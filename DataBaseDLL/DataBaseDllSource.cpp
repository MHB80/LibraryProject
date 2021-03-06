
#include <string>
#include <codecvt>
#include <locale>
#include "pch.h"
#include <iostream>
#include <string>
#include <locale>
#include <codecvt>
#include "DataBaseDllSource.h"
#pragma comment(lib,"sqlite3.lib")
using namespace std;

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


void InsertProduct_API(DataBase* db, int id, wstring name, wstring filename, wstring bookdescription, wstring writer, wstring genre, wstring score, wstring price,wstring pathfilpicture)
{
	db->InsertProduct(id, name, filename, bookdescription, writer, genre, score, price, pathfilpicture, true);
}
void ReplaceProduct_API(DataBase* db, int id, wstring name, wstring filename, wstring bookdescription, wstring writer, wstring genre, wstring score, wstring price, wstring pathfilpicture)
{
	db->ReplaceProduct(id, name, filename, bookdescription, writer, genre, score, price, pathfilpicture, true);
}
void Select_Product_API(DataBase* db, wstring name)
{
	db->Select_Product(name);
}
void GetProductFile(DataBase* db, wstring name, wstring path)
{
	db->GetProductFile(name, path);
}
void GetProductFile2(DataBase* db, wstring name, wstring path)
{
	db->GetProductFile2(name, path);
}
int GetProductId(DataBase* db, wstring name)
{
	return db->GetProductId(name, true);
}

bool checknamebook(DataBase* db, wstring name)
{
	return db->checknamebook(name);
 }

void DeleteProduct(DataBase* db, wstring name)
{
	db->DeleteProduct(name);
}

#pragma region Insertion_server
bool InsertAdmin_API(DataBase* db, string username, string password,string Email, string path)
{
	return db->InsertAdmin(username, password,Email,path, true);
}
int GetUsernametRowId_API(DataBase* db, wstring username)
{
	
	return db->GetUsernametRowId(username, true);
}
void InsertAdmin_Other_API(DataBase* db,wstring username, wstring FirstName, wstring LastName, wstring mobilenumber, wstring address, wstring postcodehome)
{
	db->InsertAdmin_Other(username ,FirstName, LastName, mobilenumber, address, postcodehome, true);
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
void Set_Profile_Picture_API(DataBase* db, wstring path, wstring username )
{
	db->Set_Profile_Picture(path, username,true);
}
void Get_Profile_Picture_API(DataBase* db, wstring username, wstring path)
{
	db->Get_Profile_Picture(username, path, true);
}
void Set_Server_FileNmaeProfilePicture_API(DataBase* db, string username, string filenmaeprofilepicture)
{
	db->Set_Server_FileNmaeProfilePicture(username, filenmaeprofilepicture, true);
}
#pragma endregion

//other
void send_FW(int a,wstring &str)
{
	ifstream read("..\\temp.txt");
	string text;
	
	while (!read.eof())
	{
		char a;
		read.get(a);
		text += a;
	}
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
	read.close();
	DataBase ab;
	str=ab.convert_wstring_to_string(str1);
}