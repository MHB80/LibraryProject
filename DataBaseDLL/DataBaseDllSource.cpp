#include "pch.h"
#include "DataBaseDllSource.h"
#pragma comment(lib,"sqlite3.lib")
DataBase* CreateObject_API()
{

	DataBase* db = new DataBase();
	db->Open("..\\Uni.db");
	

	return db;
}



void InsertProduct_API(DataBase* db, int id, string name, string filename, string bookdescription, string writer, string genre, string score, string price,string pathfilpicture)
{
	db->InsertProduct(id, name, filename, bookdescription, writer, genre, score, price, pathfilpicture, true);
}





#pragma region Insertion_server
bool InsertAdmin_API(DataBase* db, string username, string password)
{
	return db->InsertAdmin(username, password, true);
}
int GetUsernametRowId_API(DataBase* db, string username)
{
	
	return db->GetUsernametRowId(username, true);
}
void InsertAdmin_Other_API(DataBase* db, string FirstName, string LastName, string mobilenumber, string address, string postcodehome)
{
	db->InsertAdmin_Other(FirstName, LastName, mobilenumber, address, postcodehome, true);
}
#pragma endregion
#pragma region Update_Server
void UpdateServerUsername_API(DataBase* db, string usernamelast, string usernamenew)
{
	db->UpdateServerUsername(usernamelast, usernamenew, true);
}
void UpdateServerPassword_API(DataBase* db, string passwordlast, string passwordnew)
{
	db->UpdateServerPassword(passwordlast, passwordnew,true);
}
#pragma endregion
#pragma region Server_signup
bool Signup_Admin_Username_Api(DataBase* db, string username)
{
	return db->Signup_Admin_Username(username, true);
}
bool Signup_Admin_Password_API(DataBase* db, string password)
{
	return db->Signup_Admin_Password(password, true);
}
#pragma endregion
bool Check_Admin_Username_API(DataBase* db, string username, string password)
{
	return db->Check_Admin_Username(username, password, true);
}
#pragma region Profile_Picture
void Set_Profile_Picture_API(DataBase* db, string path, string username)
{
	db->Set_Profile_Picture(path, username, true, false);
}
void Get_Profile_Picture_API(DataBase* db, string username, string path)
{
	db->Get_Profile_Picture(username, path, true);
}
void Set_Server_FileNmaeProfilePicture_API(DataBase* db, string username, string filenmaeprofilepicture)
{
	db->Set_Server_FileNmaeProfilePicture(username, filenmaeprofilepicture, true);
}
#pragma endregion

