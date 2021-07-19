#include "pch.h"
#include "DataBaseDllSource.h"
#pragma comment(lib,"sqlite3.lib")


DataBase* CreateObject_API()
{

	DataBase* db = new DataBase();
	db->Open("..\\Uni.db");
	

	return db;
}


void KillObject_API(DataBase* db)
{
	delete db;

}


void InsertProduct_API(DataBase* db, int id, string name, string filename, string bookdescription, string writer, string genre, string score, string price,string pathfilpicture)
{
	db->InsertProduct(id, name, filename, bookdescription, writer, genre, score, price, pathfilpicture, true);
}
void ReplaceProduct_API(DataBase* db, int id, string name, string filename, string bookdescription, string writer, string genre, string score, string price, string pathfilpicture)
{
	db->ReplaceProduct(id, name, filename, bookdescription, writer, genre, score, price, pathfilpicture, true);
}
void Select_Product_API(DataBase* db, string name)
{
	db->Select_Product(name);
}
void GetProductFile(DataBase* db, string name, string path)
{
	db->GetProductFile(name, path);
}
void GetProductFile2(DataBase* db, string name, string path)
{
	db->GetProductFile2(name, path);
}
int GetProductId(DataBase* db, string name)
{
	return db->GetProductId(name, true);
}
#pragma region Insertion_server
bool InsertAdmin_API(DataBase* db, string username, string password,string Email, string path)
{
	return db->InsertAdmin(username, password,Email,path, true);
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
void Set_Profile_Picture_API(DataBase* db, string path, string username )
{
	db->Set_Profile_Picture(path, username,true);
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

//other
void send_FW(int a,string &str)
{
	ifstream read("..\\temp.txt");
	string text;
	read >> text;
	int start;
	int end;
	string str1;
	if (text.find(to_string(a) + "[")!=-1)
	{
		start = text.find(to_string(a) + "[");
		if (text.find("]" + to_string(a)) != -1)
		{
			end = text.find("]" + to_string(a));
			str1 = text.substr(start+2, end - start-2);
		}
	}
	str = str1;
}