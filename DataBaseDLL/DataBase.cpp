#include"pch.h"
#include "DataBase.h"
#include <iostream>
#include"nlohmann/json.hpp"
#pragma comment(lib,"sqlite3.lib")
using json = nlohmann::json;

static int my_special_callback(void* unused, int count, char** data, char** columns)
{
	int idx;

	printf("There are %d column(s)\n", count);

	for (idx = 0; idx < count; idx++) {
		printf("The data in column \"%s\" is: %s\n", columns[idx], data[idx]);
	}

	printf("\n");

	return 0;
}












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
void DataBase::InsertProduct(int id, string name, string filename, string bookdescription, string writer, string genre, string score, string price,string pathfilpicture,bool ThrowExc)
{
	ifstream size_file(filename, ios::binary);
	long long int size = size_file.seekg(0,ios::end).tellg();
	size_file.seekg(0);
	size_file.close();
	ifstream size_picture(pathfilpicture, ios::binary);
	long long int size1 = size_picture.seekg(0, ios::end).tellg();
	size_picture.seekg(0);
	size_picture.close();
	Lock();
	const char* sql = "Insert INTO Product (ID,Name,File,FileName,BookDescription,Writer,Genre,Score,Price,SizeFile,PictureFile,PictureFileName,SizeFilePicture)VALUES(?,?,?,?,?,?,?,?,?,?,?,?,?);";
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
	res = sqlite3_bind_zeroblob(stmt, 3, size);
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
	res = sqlite3_bind_text(stmt, 5, bookdescription.c_str(), bookdescription.size(), nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_text(stmt, 6, writer.c_str(), writer.size(), nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_text(stmt, 7, genre.c_str(), genre.size(), nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_text(stmt, 8, score.c_str(), score.size(), nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_text(stmt, 9, price.c_str(), price.size(), nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_int(stmt, 10, size);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_zeroblob(stmt, 11, size1);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_text(stmt, 12, pathfilpicture.c_str(), pathfilpicture.size(), nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_int(stmt, 13, size1);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_step(stmt);
	sqlite3_finalize(stmt);
	if (res != SQLITE_DONE && ThrowExc)
		ThrowError(db);


	sqlite3_blob* file = nullptr;
	res = sqlite3_blob_open(db, "main", "Product", "File", GetProductRowId(id,true), 1, &file);
	if (res != SQLITE_OK && ThrowExc)
	{
		ThrowError(SQLITE_OK);
	}
	ifstream picture_1(filename, ios::binary);
	long long int index = 0;
	const int Buffer_Size = 20 * 1024;
	if (picture_1.is_open())
	{
		while (index < size)
		{
			char Buffer[Buffer_Size];
			long long int read;
			if (size - index < Buffer_Size)
			{
				read = size - index;
			}
			else
			{
				read = Buffer_Size;
			}
			UnLock();
			Lock();
			picture_1.read(Buffer, read);
			int res = sqlite3_blob_write(file, Buffer, read, index);
			UnLock();
			index += read;
			if (res != SQLITE_OK && ThrowExc)
			{
				CloseProductFile(file);
				throw exception("Error");
			}
		}
	}
	picture_1.close();
	CloseProductFile(file, true);







	sqlite3_blob* file1 = nullptr;
	res = sqlite3_blob_open(db, "main", "Product", "PictureFile", GetProductRowId(id, true), 1, &file1);
	if (res != SQLITE_OK && ThrowExc)
	{
		ThrowError(SQLITE_OK);
	}
	ifstream picture_2(pathfilpicture, ios::binary);
	long long int index1 = 0;
	const int Buffer_Size1 = 20 * 1024;
	if (picture_2.is_open())
	{
		while (index1 < size1)
		{
			char Buffer1[Buffer_Size1];
			long long int read1;
			if (size1 - index1 < Buffer_Size1)
			{
				read1 = size1 - index1;
			}
			else
			{
				read1 = Buffer_Size1;
			}
			Lock();
			picture_2.read(Buffer1, read1);
			int res = sqlite3_blob_write(file1, Buffer1, read1, index1);
			UnLock();
			index1 += read1;
			if (res != SQLITE_OK && ThrowExc)
			{
				CloseProductFile(file);
				throw exception("Error");
			}
		}
	}
	picture_2.close();
	CloseProductFile(file1, true);

}

void DataBase::ReplaceProduct(int id, string name, string filename, string bookdescription, string writer, string genre, string score, string price, string pathfilpicture, bool ThrowExc)
{
	ifstream size_file(filename, ios::binary);
	long long int size = size_file.seekg(0, ios::end).tellg();
	size_file.seekg(0);
	size_file.close();
	ifstream size_picture(pathfilpicture, ios::binary);
	long long int size1 = size_picture.seekg(0, ios::end).tellg();
	size_picture.seekg(0);
	size_picture.close();
	Lock();
	const char* sql = "Replace INTO Product (ID,Name,File,FileName,BookDescription,Writer,Genre,Score,Price,SizeFile,PictureFile,PictureFileName,SizeFilePicture)VALUES(?,?,?,?,?,?,?,?,?,?,?,?,?);";
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
	res = sqlite3_bind_text(stmt, 2, name.c_str(), name.size(), nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_zeroblob(stmt, 3, size);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_text(stmt, 4, filename.c_str(), filename.size(), nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_text(stmt, 5, bookdescription.c_str(), bookdescription.size(), nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_text(stmt, 6, writer.c_str(), writer.size(), nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_text(stmt, 7, genre.c_str(), genre.size(), nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_text(stmt, 8, score.c_str(), score.size(), nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_text(stmt, 9, price.c_str(), price.size(), nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_int(stmt, 10, size);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_zeroblob(stmt, 11, size1);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_text(stmt, 12, pathfilpicture.c_str(), pathfilpicture.size(), nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_int(stmt, 13, size1);
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


	sqlite3_blob* file = nullptr;
	res = sqlite3_blob_open(db, "main", "Product", "File", GetProductRowId(id, true), 1, &file);
	if (res != SQLITE_OK && ThrowExc)
	{
		ThrowError(SQLITE_OK);
	}
	ifstream picture_1(filename, ios::binary);
	long long int index = 0;
	const int Buffer_Size = 20 * 1024;
	if (picture_1.is_open())
	{
		while (index < size)
		{
			char Buffer[Buffer_Size];
			long long int read;
			if (size - index < Buffer_Size)
			{
				read = size - index;
			}
			else
			{
				read = Buffer_Size;
			}
			Lock();
			picture_1.read(Buffer, read);
			int res = sqlite3_blob_write(file, Buffer, read, index);
			UnLock();
			index += read;
			if (res != SQLITE_OK && ThrowExc)
			{
				CloseProductFile(file);
				throw exception("Error");
			}
		}
	}
	picture_1.close();
	CloseProductFile(file, true);







	sqlite3_blob* file1 = nullptr;
	res = sqlite3_blob_open(db, "main", "Product", "PictureFile", GetProductRowId(id, true), 1, &file1);
	if (res != SQLITE_OK && ThrowExc)
	{
		ThrowError(SQLITE_OK);
	}
	ifstream picture_2(pathfilpicture, ios::binary);
	long long int index1 = 0;
	const int Buffer_Size1 = 20 * 1024;
	if (picture_2.is_open())
	{
		while (index1 < size1)
		{
			char Buffer1[Buffer_Size1];
			long long int read1;
			if (size1 - index1 < Buffer_Size1)
			{
				read1 = size1 - index1;
			}
			else
			{
				read1 = Buffer_Size1;
			}
			Lock();
			picture_2.read(Buffer1, read1);
			int res = sqlite3_blob_write(file1, Buffer1, read1, index1);
			UnLock();
			index1 += read1;
			if (res != SQLITE_OK && ThrowExc)
			{
				CloseProductFile(file);
				throw exception("Error");
			}
		}
	}
	picture_2.close();
	CloseProductFile(file1, true);

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


int DataBase::GetProductId(string name, bool ThrowExc )
{
	const char* sql = "Select ID from product where Name == ?";
	sqlite3_stmt* stmt;
	int res = sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_text(stmt, 1, name.c_str(), name.size(), nullptr);
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
	int res = sqlite3_blob_open(db, "main", "Product", "PictureFile", rowid, readonly ? 0 : 1, &file);
	if (res != SQLITE_OK && ThrowExc)
	{
		ThrowError(SQLITE_OK);
	}
	return file;
}
sqlite3_blob* DataBase::OpenProductFile2(int rowid, bool readonly, bool ThrowExc)
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
void DataBase::GetProductFile(string name, string path)
{
//	int rowid = GetProductRowId(id);
	int rowid=GetUsernameProductRowId(name,true);
	sqlite3_blob* file = OpenProductFile(rowid, 1);
	long long size = sqlite3_blob_bytes(file);
	long long index = 0;
	const int buffersize = 20 * 1024;
	char Buffer[buffersize];
	
	ofstream ofs (path,ios::binary);
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
void DataBase::GetProductFile2(string name, string path)
{
	//	int rowid = GetProductRowId(id);
	int rowid = GetUsernameProductRowId(name, true);
	sqlite3_blob* file = OpenProductFile2(rowid, 1);
	long long size = sqlite3_blob_bytes(file);
	long long index = 0;
	const int buffersize = 20 * 1024;
	char Buffer[buffersize];

	ofstream ofs(path, ios::binary);
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
int DataBase::GetUsernameProductRowId(string name, bool ThrowExc)
{
	const char* sql = "Select rowid from Product where Name == ?";
	sqlite3_stmt* stmt;
	int res = sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_text(stmt, 1, name.c_str(), name.size(), nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_step(stmt);
	return sqlite3_column_int(stmt, 0);

}


#pragma region Select-client
void DataBase::Select_Product(string name)
{

	bool ThrowExc = true;
	const char* sql = "Select * from Product Where Name == ?";
	sqlite3_stmt* stmt;
	int res = sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_text(stmt, 1, name.c_str(), name.size(), nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	ofstream write("..\\temp.txt");
	res = sqlite3_step(stmt);
	write << "1[";
	write<<reinterpret_cast<const char*>(sqlite3_column_text(stmt, 1));
	write << "]1";
	write << "4[";
	write << reinterpret_cast<const char*>(sqlite3_column_text(stmt, 4));
	write << "]4";
	write << "5[";
	write << reinterpret_cast<const char*>(sqlite3_column_text(stmt, 5));
	write << "]5";
	write << "6[";
	write << reinterpret_cast<const char*>(sqlite3_column_text(stmt, 6));
	write << "]6";
	write << "7[";
	write << reinterpret_cast<const char*>(sqlite3_column_text(stmt, 7));
	write << "]7";
	write << "8[";
	write << reinterpret_cast<const char*>(sqlite3_column_text(stmt, 8));
	write << "]8";
	write.close();
	
}
#pragma endregion























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
bool  DataBase::InsertAdmin(string username, string password,string Email,string path, bool ThrowExc)
{

	ifstream size_file(path, ios::binary);
	long long int size = size_file.seekg(0, ios::end).tellg();
	size_file.seekg(0);
	size_file.close();
	bool _is_Username_Exists = Signup_Admin_Username(username, true);
	if (!_is_Username_Exists)
	{
		Lock();
		const char* sql = "INSERT INTO Server (Username,Password,pictureprofile,filenamepictureprofile,Email,SizePictureProfile)VALUES(?, ?,?,?,?,?);";
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
		res = sqlite3_bind_zeroblob(stmt, 3, size);
		if (res != SQLITE_OK && ThrowExc)
		{
			UnLock();
			sqlite3_finalize(stmt);
			ThrowError(db);
		}
		res = sqlite3_bind_text(stmt, 4, path.c_str(), path.size(), nullptr);
		if (res != SQLITE_OK && ThrowExc)
		{
			UnLock();
			sqlite3_finalize(stmt);
			ThrowError(db);
		}
		res = sqlite3_bind_text(stmt, 5, Email.c_str(), Email.size(), nullptr);
		if (res != SQLITE_OK && ThrowExc)
		{
			UnLock();
			sqlite3_finalize(stmt);
			ThrowError(db);
		}
		res = sqlite3_bind_int(stmt, 6, size);
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






		sqlite3_blob* file = nullptr;
		res = sqlite3_blob_open(db, "main", "Server", "PictureProfile", GetUsernametRowId(username, true), 1, &file);
		if (res != SQLITE_OK && ThrowExc)
		{
			ThrowError(SQLITE_OK);
		}
		ifstream picture_1(path, ios::binary);
		long long int index = 0;
		const int Buffer_Size = 20 * 1024;
		if (picture_1.is_open())
		{
			while (index < size)
			{
				char Buffer[Buffer_Size];
				long long int read;
				if (size - index < Buffer_Size)
				{
					read = size - index;
				}
				else
				{
					read = Buffer_Size;
				}
				Lock();
				picture_1.read(Buffer, read);
				int res = sqlite3_blob_write(file, Buffer, read, index);
				UnLock();
				index += read;
				if (res != SQLITE_OK && ThrowExc)
				{
					CloseProductFile(file);
					throw exception("Error");
				}
			}
		}
		picture_1.close();
		CloseProductFile(file, true);













































		return true;
	}
	else
	{
		return false;
	}
}
void  DataBase::InsertAdmin_Other(string FirstName, string LastName, string mobilenumber, string address, string postcodehome, bool ThrowExc)
{
	const char* sql = "INSERT INTO Server (FirstName,LastName,MobileNumber,Address, PostcodeHome)VALUES(?, ?,?,?,?);";
	sqlite3_stmt* stmt;
	int res = sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_text(stmt, 1, FirstName.c_str(), FirstName.size(), nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_text(stmt, 2, LastName.c_str(), LastName.size(), nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_text(stmt, 3, mobilenumber.c_str(), mobilenumber.size(), nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_text(stmt, 4, address.c_str(), address.size(), nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_text(stmt, 5, postcodehome.c_str(), postcodehome.size(), nullptr);
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
sqlite3_blob* DataBase::OpenProductFileforserver(int rowid, bool readonly, bool ThrowExc )
{
	sqlite3_blob* file = nullptr;
	int res = sqlite3_blob_open(db, "main", "Server", "PictureProfile", rowid, readonly ? 0 : 1, &file);
	if (res != SQLITE_OK && ThrowExc)
	{
		ThrowError(SQLITE_OK);
	}
	return file;
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
bool DataBase::Check_Admin_Username(string username,string password ,bool ThrowExc)
{
	Lock();
	sqlite3_stmt* stmt;
	const char* sql = "Select Password from Server where Username like ? ;";
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
	if (reinterpret_cast<const char*>(sqlite3_column_text(stmt, 0)) == password)
	{
		sqlite3_finalize(stmt);
		UnLock();
		return true;
	}
	else
	{
		sqlite3_finalize(stmt);
		UnLock();
			return false;
		
	}
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
void  DataBase::Set_Profile_Picture(string path, string username, bool ThrowExc)
{
	ifstream size_file(path, ios::binary);
	long long int size = size_file.seekg(0, ios::end).tellg();
	size_file.seekg(0);
	size_file.close();
	
	const char* sql = "Replace INTO Server (Username,PictureProfile,FileNamePictureProfile,SizePictureProfile) VALUES(?,?,?,?);";
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
	res = sqlite3_bind_zeroblob(stmt, 2, size);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_text(stmt, 3, path.c_str(), path.size(), nullptr);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_int(stmt, 4, size);
	if (res != SQLITE_OK && ThrowExc)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_step(stmt);
	sqlite3_finalize(stmt);
	if (res != SQLITE_DONE && ThrowExc)
		ThrowError(db);





	sqlite3_blob* file = nullptr;
	res = sqlite3_blob_open(db, "main", "Server", "PictureProfile", GetUsernametRowId(username, true), 1, &file);
	if (res != SQLITE_OK && ThrowExc)
	{
		ThrowError(SQLITE_OK);
	}
	ifstream picture_1(path, ios::binary);
	long long int index = 0;
	const int Buffer_Size = 20 * 1024;
	if (picture_1.is_open())
	{
		while (index < size)
		{
			char Buffer[Buffer_Size];
			long long int read;
			if (size - index < Buffer_Size)
			{
				read = size - index;
			}
			else
			{
				read = Buffer_Size;
			}
			Lock();
			picture_1.read(Buffer, read);
			int res = sqlite3_blob_write(file, Buffer, read, index);
			UnLock();
			index += read;
			if (res != SQLITE_OK && ThrowExc)
			{
				CloseProductFile(file);
				throw exception("Error");
			}
		}
	}
	picture_1.close();
	CloseProductFile(file, true);









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