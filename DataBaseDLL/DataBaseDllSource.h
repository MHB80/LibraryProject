#pragma once
#pragma once
#include<iostream>
#include<string>
#include"DataBase.h"



#pragma comment(lib,"sqlite3.lib")
using namespace std;

#ifdef UIAPI
#define UIAPI __declspec(dllexport)
#else
#define UIAPI  __declspec(dllimport)
#endif // DEBUG


extern "C" UIAPI DataBase * CreateObject_API();

#pragma region Insertion_server
extern "C" UIAPI bool InsertAdmin_API(DataBase* db, string username, string password);
extern "C" UIAPI int GetUsernametRowId_API(DataBase* db, string username, bool ThrowExc);
#pragma endregion
#pragma region Update_Server
extern "C" UIAPI void UpdateServerUsername_API(DataBase* db, string usernamelast, string usernamenew);
extern "C" UIAPI void  UpdateServerPassword_API(DataBase* db, string passwordlast, string passwordnew, bool ThrowExc);
#pragma endregion
#pragma region Server_signup
extern "C" UIAPI bool Signup_Admin_Username_Api(DataBase* db, string username);
extern "C" UIAPI bool Signup_Admin_Password_API(DataBase* db, string password);
extern "C" UIAPI bool Check_Admin_Username_API(DataBase * db, string username, string password);
#pragma endregion
#pragma region Profile_Picture
extern "C" UIAPI void Set_Profile_Picture_API(DataBase* db, string path, string username, bool readonly);
extern "C" UIAPI void Get_Profile_Picture_API(DataBase* db, string username, string path);
extern "C" UIAPI void Set_Server_FileNmaeProfilePicture_API(DataBase* db, string username, string filenmaeprofilepicture);
#pragma endregion
























