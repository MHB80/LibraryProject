#include "pch.h"
#include "DataBaseDllSource.h"
#pragma comment(lib,"sqlite3.lib")
DataBase* CreateObject_API()
{

	DataBase* db = new DataBase();
	db->Open("..\\Uni.db");
	

	return db;
}



#pragma region Insertion_server
bool InsertAdmin_API(DataBase* db, string username, string password, bool ThrowExc)
{
	return db->InsertAdmin(username, password, ThrowExc);
}
int GetUsernametRowId_API(DataBase* db, string username, bool ThrowExc)
{
	
	return db->GetUsernametRowId(username, ThrowExc);
}
#pragma endregion
#pragma region Update_Server
void UpdateServerUsername_API(DataBase* db, string usernamelast, string usernamenew)
{
	db->UpdateServerUsername(usernamelast, usernamenew, true);
}
void UpdateServerPassword_API(DataBase* db, string passwordlast, string passwordnew, bool ThrowExc)
{
	db->UpdateServerPassword(passwordlast, passwordnew, ThrowExc);
}
#pragma endregion
#pragma region Server_signup
bool Signup_Admin_Username_API(DataBase* db, string username, bool ThrowExc)
{
	return db->Signup_Admin_Username(username, ThrowExc);
}
bool Signup_Admin_Password_API(DataBase* db, string password, bool ThrowExc)
{
	return db->Signup_Admin_Password(password, ThrowExc);
}
#pragma endregion

#pragma region Profile_Picture
void Set_Profile_Picture_API(DataBase* db, string path, string username, bool ThrowExc, bool readonly)
{
	db->Set_Profile_Picture(path, username, ThrowExc, readonly);
}
void Get_Profile_Picture_API(DataBase* db, string username, string path, bool ThrowExc)
{
	db->Get_Profile_Picture(username, path, ThrowExc);
}
void Set_Server_FileNmaeProfilePicture_API(DataBase* db, string username, string filenmaeprofilepicture, bool ThrowExc)
{
	db->Set_Server_FileNmaeProfilePicture(username, filenmaeprofilepicture, ThrowExc);
}
#pragma endregion

