#include"pch.h"
#include "DataBase.h"
#include <iostream>
#pragma comment(lib,"sqlite3.lib")
DataBase::DataBase()
{

}
DataBase::~DataBase()
{
	Close();
}
bool DataBase::Open(string path, bool ThrowExc)
{
	int res = sqlite3_open(path.c_str(),&db);
	if (res != SQLITE_OK && ThrowExc)
	{
		ThrowError(SQLITE_OK);
	}
	return true;
}
void DataBase::Close(bool ThrowExc )
{
	int res = sqlite3_close(db);
	if (res != SQLITE_OK && ThrowExc)
		ThrowError(db);
}
#pragma region Insertion
void DataBase::InsertCustomer(int username, int listid, bool ThrowExc )
{
	Lock();
	const char* sql = "INSERT INTO Customer (Username,ListId)VALUES(?, ?);";
	sqlite3_stmt* stmt;
	int res = sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_int(stmt ,1, username);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_int(stmt, 2, listid);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_step(stmt);
	sqlite3_finalize(stmt);
	UnLock();
	if (res != SQLITE_DONE && ThrowExc)
		ThrowError(db);
}

void DataBase::InsertList(int productid, int listid, bool ThrowExc )
{
	Lock();
	const char* sql = "INSERT INTO List (ProductId,ListId,DateTime)VALUES(?, ?, datetime('now', 'localtime'));";
	sqlite3_stmt* stmt;
	int res = sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_int(stmt, 1, productid);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_int(stmt, 2, listid);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_step(stmt);
	sqlite3_finalize(stmt);
	UnLock();
	if (res != SQLITE_DONE && ThrowExc)
		ThrowError(db);
}
void DataBase::InsertProduct(int id, string name, int filesize, string filename, bool ThrowExc)
{
	Lock();
	const char* sql = "INSERT INTO Product (Id,Name,File,FileName)VALUES(?, ?, ? ,?);";
	sqlite3_stmt* stmt;
	int res = sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_int(stmt, 1, id);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_text(stmt, 2, name.c_str(), name.size() , nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_zeroblob(stmt, 3, filesize);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_text(stmt, 4, filename.c_str() , filename.size(),nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_step(stmt);
	sqlite3_finalize(stmt);
	UnLock();
	if (res != SQLITE_DONE && ThrowExc)
		ThrowError(db);
}
int DataBase::GetProductRowId(int id, bool ThrowExc)
{
	const char* sql = "Select rowid from product where id == ?";
	sqlite3_stmt* stmt;
	int res = sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_int(stmt, 1, id);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_step(stmt);
	return sqlite3_column_int(stmt, 0);
}
string DataBase::GetProductFileName(int id, bool ThrowExc)
{
	const char* sql = "Select filename from product where id == ?";
	sqlite3_stmt* stmt;
	int res = sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_int(stmt, 1, id);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_step(stmt);
	return string(reinterpret_cast<const char*>(sqlite3_column_text(stmt, 0)));
}
sqlite3_blob* DataBase::OpenProductFile(int rowid,bool readonly , bool ThrowExc )
{
	sqlite3_blob* file = nullptr;
	int res = sqlite3_blob_open(db, "main", "Product", "File", rowid, readonly ? 0 : 1, &file);
	if (res != SQLITE_OK && ThrowExc)
	{
		ThrowError(SQLITE_OK);
	}
	return file;
}
void DataBase::WriteProductFile(sqlite3_blob* file, char* Buffer, long long Size, long long index, bool ThrowExc )
{
	Lock();
	int res = sqlite3_blob_write(file , Buffer , Size, index);
	UnLock();
	if (res != SQLITE_OK && ThrowExc)
	{
		CloseProductFile(file);
		throw exception("Error");
	}
}
void DataBase::GetProductFile(int id, string path)
{
	int rowid = GetProductRowId(id);
	sqlite3_blob* file = OpenProductFile(rowid, 1);
	long long size = sqlite3_blob_bytes(file);
	long long index = 0;
	const int buffersize = 20 * 1024;
	char Buffer[buffersize];
	string Path = path + "\\" + GetProductFileName(id);
	ofstream ofs (Path,ios::binary);
	if (ofs.good())
	{
		while (index < size)
		{
			int read = size - index < buffersize ? size - index : buffersize;
			sqlite3_blob_read(file, Buffer, read, index);
			ofs.write(Buffer, read);
			index += read;
		}
	}
	ofs.close();
	CloseProductFile(file);
}
void DataBase::CloseProductFile(sqlite3_blob* file, bool ThrowExc )
{
	Lock();
	int res = sqlite3_blob_close(file);
	UnLock();
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		ThrowError(db);
	}
}
//#pragma endregion
//#pragma region Delete
//void DataBase::DeleteCustomer(int username = 0, int listid = 0, bool ThrowExc = true)
//{
//
//}
//void DataBase::DeleteCustomer(int product = 0, int listid = 0, bool ThrowExc = true)
//{
//
//}
//void DataBase::DeleteProduct(int id = 0, string name = "", string filename = "", bool ThrowExc = true)
//{
//
//}
//#pragma endregion
#pragma region Update_client
void DataBase::UpdateCustomerUsername(int usernamelast, int usernameNew, bool ThrowExc)
{
	Lock();
	const char* sql = "UPDATE Customer set username = ? where username = ?;";
	sqlite3_stmt* stmt;
	int res = sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_int(stmt, 1, usernameNew);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_int(stmt, 2, usernamelast);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_step(stmt);
	sqlite3_finalize(stmt);
	UnLock();
	if (res != SQLITE_DONE && ThrowExc)
		ThrowError(db);
}
void  DataBase::UpdateCustomerListId(int listidlast, int listidnew, bool ThrowExc)
{
	Lock();
	const char* sql = "UPDATE Customer set username = ? where username = ?;";
	sqlite3_stmt* stmt;
	int res = sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_int(stmt, 1, listidnew);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_int(stmt, 2, listidlast);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_step(stmt);
	sqlite3_finalize(stmt);
	UnLock();
	if (res != SQLITE_DONE && ThrowExc)
		ThrowError(db);
}
#pragma endregion

#pragma region Insertion-server
bool  DataBase::InsertAdmin(string username, string password, bool ThrowExc)
{
	bool _is_Username_Exists = Signup_Admin_Username(username, true);
	if (!_is_Username_Exists)
	{
		Lock();
		const char* sql = "INSERT INTO Server (Username,Password)VALUES(?, ?);";
		sqlite3_stmt* stmt;
		int res = sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr);
		if (res != SQLITE_OK && ThrowExc)
		{
			UnLock();
			sqlite3_finalize(stmt);
			ThrowError(db);
		}
		res = sqlite3_bind_text(stmt, 1, username.c_str(), username.size(), nullptr);
		if (res != SQLITE_OK && ThrowExc)
		{
			UnLock();
			sqlite3_finalize(stmt);
			ThrowError(db);
		}
		res = sqlite3_bind_text(stmt, 2, password.c_str(), password.size(), nullptr);
		if (res != SQLITE_OK && ThrowExc)
		{
			UnLock();
			sqlite3_finalize(stmt);
			ThrowError(db);
		}
		res = sqlite3_step(stmt);
		sqlite3_finalize(stmt);
		UnLock();
		if (res != SQLITE_DONE && ThrowExc)
			ThrowError(db);
		return true;
	}
	else
	{
		return false;
	}
}
int  DataBase::GetUsernametRowId(string username, bool ThrowExc)
{
	const char* sql = "Select rowid from Server where Username == ?";
	sqlite3_stmt* stmt;
	int res = sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_text(stmt, 1, username.c_str(), username.size(), nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_step(stmt);
	return sqlite3_column_int(stmt, 0);
}
#pragma endregion
#pragma region Update_Server
void DataBase::UpdateServerUsername(string usernamelast, string usernamenew, bool ThrowExc)
{
	Lock();
	const char* sql = "UPDATE Server set Username = ? where Username = ?;";
	sqlite3_stmt* stmt;
	int res = sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_text(stmt, 1, usernamenew.c_str(), usernamenew.size(), nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_text(stmt, 2, usernamelast.c_str(), usernamelast.size(), nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_step(stmt);
	sqlite3_finalize(stmt);
	UnLock();
	if (res != SQLITE_DONE && ThrowExc)
		ThrowError(db);
}
void  DataBase::UpdateServerPassword(string passwordlast, string passwordnew, bool ThrowExc)
{
	Lock();
	const char* sql = "UPDATE Server set sername = ? where username = ?;";
	sqlite3_stmt* stmt;
	int res = sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_text(stmt, 1, passwordnew.c_str(), passwordnew.size(), nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_text(stmt, 2, passwordlast.c_str(), passwordlast.size(), nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_step(stmt);
	sqlite3_finalize(stmt);
	UnLock();
	if (res != SQLITE_DONE && ThrowExc)
		ThrowError(db);
}
#pragma endregion
#pragma region Server_signup
bool  DataBase::Signup_Admin_Username(string username, bool ThrowExc)
{
	Lock();
	sqlite3_stmt* stmt;
	const char* sql = "Select Username from Server where Username like ?;";
	int res = sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_text(stmt, 1, username.c_str(), username.size(), nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_step(stmt);
	if (reinterpret_cast<const char*>(sqlite3_column_text(stmt, 0)) == NULL)
	{
		sqlite3_finalize(stmt);
		UnLock();
		return false;
	}
	else
	{
		string username_main = string(reinterpret_cast<const char*>(sqlite3_column_text(stmt, 0)));
		sqlite3_finalize(stmt);
		UnLock();
		if (username_main == username)
		{
			return true;
		}
	}
}

bool  DataBase::Signup_Admin_Password(string password, bool ThrowExc)
{
	Lock();
	sqlite3_stmt* stmt;
	const char* sql = "Select Password from Server where name like ? ;";
	int res = sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_text(stmt, 1, password.c_str(), password.size(), nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_step(stmt);
	if (reinterpret_cast<const char*>(sqlite3_column_text(stmt, 0)) == NULL)
	{
		sqlite3_finalize(stmt);
		UnLock();
		return false;
	}
	else
	{
		string password_main = string(reinterpret_cast<const char*>(sqlite3_column_text(stmt, 0)));
		sqlite3_finalize(stmt);
		UnLock();
		if (password_main == password)
		{
			return true;
		}
	}
}
#pragma endregion
#pragma region Server_Change
bool DataBase::Change_Admin_Username(string usernamelast,string usernamenew, bool ThrowExc)
{
	Lock();
	const char* sql = "UPDATE Server set Username = ? where Username = ?;";
	sqlite3_stmt* stmt;
	int res = sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_text(stmt, 1, usernamenew.c_str(), usernamenew.size(), nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_text(stmt, 1, usernamelast.c_str(), usernamelast.size(), nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_step(stmt);
	sqlite3_finalize(stmt);
	UnLock();
	if (res != SQLITE_DONE && ThrowExc)
		ThrowError(db);
}
bool DataBase::Change_Admin_Password(string passwordlast, string passwordnew, bool ThrowExc)
{
	Lock();
	const char* sql = "UPDATE Server set Password = ? where Password = ?;";
	sqlite3_stmt* stmt;
	int res = sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_text(stmt, 1, passwordnew.c_str(), passwordnew.size(), nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_text(stmt, 1, passwordlast.c_str(), passwordlast.size(), nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_step(stmt);
	sqlite3_finalize(stmt);
	UnLock();
	if (res != SQLITE_DONE && ThrowExc)
		ThrowError(db);
}
#pragma endregion
#pragma region Profile_Picture
void  DataBase::Set_Profile_Picture(string path, string username, bool ThrowExc,bool readonly)
{
	sqlite3_blob* file = nullptr;
	int res = sqlite3_blob_open(db, "main", "Server", "PictureProfile", GetUsernametRowId(username,true), readonly ? 0 : 1, &file);
	if (res != SQLITE_OK && ThrowExc)
	{
		ThrowError(SQLITE_OK);
	}
	ifstream picture_1(path, ios::binary);
	int size = picture_1.seekg(0, ios::end).tellg();
	picture_1.seekg(0);
	int index=0;
	const int Buffer_Size = 20 * 1024;
	if (picture_1.is_open())
	{
		while (index < size)
		{
			char Buffer[Buffer_Size];
			int read;
			if (size - index < Buffer_Size)
			{
				read = size - index;
			}
			else
			{
				read = Buffer_Size;
			}
			Lock();
			int res = sqlite3_blob_write(file, Buffer, size, index);
			UnLock();
			if (res != SQLITE_OK && ThrowExc)
			{
				CloseProductFile(file);
				throw exception("Error");
			}
		}
	}
	picture_1.close();
	
}
void  DataBase::Get_Profile_Picture(string username, string path , bool ThrowExc)
{
	int rowid = GetUsernametRowId(username,true);
	sqlite3_blob* file = nullptr;
	int res = sqlite3_blob_open(db, "main", "Server", "PictureProfile", GetUsernametRowId(username, true), 1, &file);
	if (res != SQLITE_OK && ThrowExc)
	{
		ThrowError(SQLITE_OK);
	}
	long long size = sqlite3_blob_bytes(file);
	long long index = 0;
	const int buffersize = 20 * 1024;
	char Buffer[buffersize];
	string Path = path + "\\" + to_string(GetUsernametRowId(username,true));
	ofstream picture_1(Path, ios::binary);
	if (picture_1.good())
	{
		while (index < size)
		{
			int read = size - index < buffersize ? size - index : buffersize;
			sqlite3_blob_read(file, Buffer, read, index);
			picture_1.write(Buffer, read);
			index += read;
		}
	}
	picture_1.close();
	CloseProductFile(file);
}
void DataBase::Set_Server_FileNmaeProfilePicture(string username, string filenmaeprofilepicture, bool ThrowExc)
{
	Lock();
	const char* sql = "UPDATE Server set FileNamePictureProfile = ? where Username = ?;";
	sqlite3_stmt* stmt;
	int res = sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_text(stmt, 1, filenmaeprofilepicture.c_str(), filenmaeprofilepicture.size(), nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_text(stmt, 2, username.c_str(), username.size(), nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_step(stmt);
	sqlite3_finalize(stmt);
	UnLock();
	if (res != SQLITE_DONE && ThrowExc)
		ThrowError(db);
}
#pragma endregion





#ifndef Other
int DataBase::GetCount(string tablename)
{
	string sql = "Select count(*) from " + tablename;
	sqlite3_stmt* stmt;
	int res = sqlite3_prepare_v2(db, sql.c_str(), -1, &stmt, nullptr);
	if (res != SQLITE_OK)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_step(stmt);
	if (res != SQLITE_OK )
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	return sqlite3_column_int(stmt, 0);
}
Book* DataBase::SearchBook(string bookname, int& BookCount, bool ThrowExc)
{
	Lock();
	bookname = "%" + bookname + "%";
	const char* sql = "Select count(*) from product where name like ?;";
	sqlite3_stmt* stmt;
	int res = sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_text(stmt, 1, bookname.c_str(), bookname.size(), nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_step(stmt);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	BookCount = sqlite3_column_int(stmt, 0);
	sql = "Select id,name,filename from product where name like ? ;";
	res = sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_text(stmt, 1, bookname.c_str(), bookname.size(), nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	Book* books = new Book[BookCount];
	/*while (sqlite3_step(stmt) != SQLITE_DONE)
	{

	}*/
	/*while (sqlite3_step(stmt) == SQLITE_ROW)
	{

	}*/
	for (int i = 0; i < BookCount; i++)
	{
		sqlite3_step(stmt);
		Book book;
		book.BookId = sqlite3_column_int(stmt, 0);
		book.BookName = string(reinterpret_cast<const char*>(sqlite3_column_text(stmt, 1)));
		book.filename = string(reinterpret_cast<const char*>(sqlite3_column_text(stmt, 2)));
		books[i] = book;
	}
	sqlite3_finalize(stmt);
	UnLock();
	return books;

}
void DataBase::Lock()
{
	sqlite3_mutex_enter(sqlite3_db_mutex(db));
}
void DataBase::UnLock()
{
	sqlite3_mutex_leave(sqlite3_db_mutex(db));
}

#endif // !Other