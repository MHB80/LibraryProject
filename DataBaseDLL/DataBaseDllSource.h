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




extern "C" UIAPI void KillObject_API(DataBase * db);


extern "C" UIAPI void InsertProduct_API(DataBase * db, int id, string name, string filename, string bookdescription, string writer, string genre, string score, string price,string pathfilepicture);
extern "C" UIAPI void ReplaceProduct_API(DataBase * db, int id, string name, string filename, string bookdescription, string writer, string genre, string score, string price, string pathfilepicture);
extern "C" UIAPI void Select_Product_API(DataBase * db, string name);

extern "C" UIAPI void GetProductFile(DataBase * db, string name, string path);

extern "C" UIAPI void GetProductFile2(DataBase * db, string name, string path);

extern "C" UIAPI int GetProductId(DataBase * db, string name);

#pragma region Insertion_server
extern "C" UIAPI bool InsertAdmin_API(DataBase* db, string username, string password,string Email, string path);
extern "C" UIAPI int GetUsernametRowId_API(DataBase* db, string username);
extern "C" UIAPI void InsertAdmin_Other_API(DataBase * db,string FirstName, string LastName, string mobilenumber, string address, string postcodehome);
#pragma endregion
#pragma region Update_Server
extern "C" UIAPI void UpdateServerUsername_API(DataBase* db, string usernamelast, string usernamenew);
extern "C" UIAPI void  UpdateServerPassword_API(DataBase* db, string passwordlast, string passwordnew);
#pragma endregion
#pragma region Server_signup
extern "C" UIAPI bool Signup_Admin_Username_Api(DataBase* db, string username);
extern "C" UIAPI bool Signup_Admin_Password_API(DataBase* db, string password);
extern "C" UIAPI bool Check_Admin_Username_API(DataBase * db, string username, string password);
#pragma endregion
#pragma region Profile_Picture
extern "C" UIAPI void Set_Profile_Picture_API(DataBase* db, string path, string username);
extern "C" UIAPI void Get_Profile_Picture_API(DataBase* db, string username, string path);
extern "C" UIAPI void Set_Server_FileNmaeProfilePicture_API(DataBase* db, string username, string filenmaeprofilepicture);
#pragma endregion






//other
extern "C" UIAPI void send_FW(int a,string &str);


















