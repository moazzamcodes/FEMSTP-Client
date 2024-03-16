
#include <iostream>
#include <string>
#include <windows.h>
#include <mmsystem.h>
#pragma comment ( lib, "winmm.lib" )

using namespace std;
string mypath;
string file;

class RCDR
{
public:

	void record()
	{
		if (mciExecute("open new type waveaudio alias my_sound"))
		{
			mciExecute("record my_sound");
			action = "RECORDING"; rec = true;
		}
	}

	void SRDING(int minutes, string &names)
	{
		mypath = names;
		RCDR x;
		while (true)
		{
			x.record();
			Sleep(60000 * minutes);
			x.stop();
			break;
		}
	}

	void play()
	{
		if (paused)
			mciExecute("play my_sound");
		else
		if (mciExecute("open tmp.wav alias my_sound"))
			mciExecute("play my_sound");

		action = "PLAYING";
		paused = false;
	}
	void pause()
	{
		if (rec) return;
		mciExecute("pause my_sound");
		paused = true; action = "PAUSED";
	}

	void stop()
	{
		if (rec)
		{

			mciExecute("stop my_sound");
			mciExecute("save my_sound " + mypath);
			mciExecute("close my_sound");
			action = "IDLE"; rec = false;
		}
		else
		{
			mciExecute("stop my_sound");
			mciExecute("close my_sound");
			action = "IDLE";
		}
	}
	bool mciExecute(std::string cmd)
	{
		wchar_t* wString = new wchar_t[4096];
		const char*temporarypath = cmd.c_str();
		MultiByteToWideChar(CP_ACP, 0, temporarypath, -1, wString, 4096);

		if (mciSendString(wString, NULL, 0, NULL))
		{
			//cout << "Can't do this: " << cmd << endl;
			return false;
		}
		return true;
	}
	bool paused, rec;
	string action;
};