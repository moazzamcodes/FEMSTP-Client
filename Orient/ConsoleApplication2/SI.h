
#include<string>
#include <Windows.h>
#include <Iphlpapi.h>
#include <Assert.h>
#pragma comment(lib, "iphlpapi.lib")
#include <stdio.h>
#include <WinSock.h>
#pragma comment(lib, "wsock32.lib")
#include<iostream>

using namespace std;

class GetSysteminfo
{

public:

	GetSysteminfo::GetSysteminfo()
	{

	}

	std::string hostname;
	std::string ip_address;
	std::string Mac_address = "NULL";

public:


	void pc_info(std::string & ip, std::string &host, std::string &mac, std::string & drive)
	{
		GMADRS();
		iphost();
		drive = total_drive();
		ip = ip_address;
		host = hostname;
		mac = Mac_address;
	}

	std::string total_drive()
	{
		std::string drivename;
		std::string drives = " ";
		std::string hash = "\\";

		char VolumeName[MAX_PATH + 1];
		char DriveLetter[] = "A:\\";

		for (char count = 'A'; count <= 'Z'; ++count)
		{
			DriveLetter[0] = count;
			wchar_t* wString = new wchar_t[4096];
			MultiByteToWideChar(CP_ACP, 0, DriveLetter, -1, wString, 4096);
			wchar_t* wString2 = new wchar_t[4096];
			MultiByteToWideChar(CP_ACP, 0, VolumeName, -1, wString2, 4096);
			if (GetVolumeInformation(wString, wString2, MAX_PATH + 1, NULL, NULL, NULL, NULL, 0) != FALSE)
			{
				std::string vol = drives;
				std::string letter = DriveLetter + hash;
				drivename += letter + vol;
			}
		}
		return drivename;

	}
	//................................................................................
	void iphost()
	{
		WORD wVersionRequested;
		WSADATA wsaData;
		char name[255];
		PHOSTENT hostinfo;
		wVersionRequested = MAKEWORD(1, 1);
		char *ip;

		if (WSAStartup(wVersionRequested, &wsaData) == 0)
		if (gethostname(name, sizeof(name)) == 0)
		{
			hostname = name;

			if ((hostinfo = gethostbyname(name)) != NULL)
			{
				int nCount = 0;
				while (hostinfo->h_addr_list[nCount])
				{
					ip = inet_ntoa(*(
					struct in_addr *)hostinfo->h_addr_list[nCount]);
					++nCount;
					ip_address = ip;
				}
			}
		}
	}
	//.......................................................................
	void PrintMACaddress(unsigned char MACData[])
	{
		char result[3];
		std::string MACADRESSFULL;

		sprintf_s(result, "%02x", MACData[0]);


		MACADRESSFULL = MACADRESSFULL + result + "-";
		sprintf_s(result, "%02x", MACData[1]);


		MACADRESSFULL = MACADRESSFULL + result + "-";
		sprintf_s(result, "%02x", MACData[2]);


		MACADRESSFULL = MACADRESSFULL + result + "-";
		sprintf_s(result, "%02x", MACData[3]);


		MACADRESSFULL = MACADRESSFULL + result + "-";
		sprintf_s(result, "%02x", MACData[4]);

		MACADRESSFULL = MACADRESSFULL + result + "-";
		sprintf_s(result, "%02x", MACData[5]);
		MACADRESSFULL = MACADRESSFULL + result;
		Mac_address = MACADRESSFULL;


	}

	//.....................................................................
	void GMADRS()
	{
		IP_ADAPTER_INFO AdapterInfo[16];			// Allocate information for up to 16 NICs
		DWORD dwBufLen = sizeof(AdapterInfo);		// Save the memory size of buffer

		DWORD dwStatus = GetAdaptersInfo(			// Call GetAdapterInfo
			AdapterInfo,							// [out] buffer to receive data
			&dwBufLen);								// [in] size of receive data buffer
		assert(dwStatus == ERROR_SUCCESS);			// Verify return value is valid, no buffer overflow

		PIP_ADAPTER_INFO pAdapterInfo = AdapterInfo;// Contains pointer to current adapter info

		PrintMACaddress(pAdapterInfo->Address);
		// Progress through linked list
		// Terminate if last adapter
	}
};