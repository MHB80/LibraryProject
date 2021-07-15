#ifndef DATABASE_H
#define DATABASE_H
#include <string>
#include "sqlite3.h"
#include <fstream>
#pragma comment(lib,"sqlite3.lib")
#define ThrowError(db) throw exception(sqlite3_errmsg(db));
using namespace std;
struct Book
{
	int BookId;
	string BookName;
	string filename;
};
class DataBase
{
private:
	sqlite3* db;
public:
	DataBase();
	~DataBase();
	bool Open(string db, bool ThrowExc = true);
	void Close(bool ThrowExc = true);
#pragma region Insertion-client
	void InsertCustomer(int username, int listid, bool ThrowExc = true);
	void InsertList(int productid, int listid, bool ThrowExc = true);
	void InsertProduct(int id, string name, string filename, string bookdescription, string writer, string genre, string score, string price,string pathfilpicture, bool ThrowExc);
	int GetProductRowId(int id, bool ThrowExc = true);
	sqlite3_blob* OpenProductFile(int rowid, bool readonly, bool ThrowExc = true);
	void WriteProductFile(sqlite3_blob* file, char* Buffer, long long Size, long long index, bool ThrowExc = true);
	void GetProductFile(int id, string path);
	void CloseProductFile(sqlite3_blob* file, bool ThrowExc = true);
	string GetProductFileName(int id, bool ThrowExc = true);
#pragma endregion
	//#pragma region Delete
	//	void DeleteCustomer(int username , int listid , bool ThrowExc );
	//	void DeleteCustomer(int product = 0, int listid , bool ThrowExc );
	//	void DeleteProduct(int id = 0, string name ="",  string filename = "", bool ThrowExc = true);
	//#pragma endregion
	#pragma region Update_Client
	void UpdateCustomerUsername(int usernamelast, int usernameNew, bool ThrowExc = true);
	void UpdateCustomerListId(int listidlast, int listidnew, bool ThrowExc);
	#pragma endregion
#pragma region Insertion_server
	bool InsertAdmin(string username, string password, bool ThrowExc);
	void InsertAdmin_Other(string FirstName, string LastName,string mobilenumber,string address,string postcodehome,bool ThrowExc);
	int GetUsernametRowId(string username, bool ThrowExc);
#pragma endregion
#pragma region Update_Server
	void UpdateServerUsername(string usernamelast, string usernamenew, bool ThrowExc);
	void  UpdateServerPassword(string passwordlast, string passwordnew, bool ThrowExc);
#pragma endregion
#pragma region Server_signup
	bool Signup_Admin_Username(string username, bool ThrowExc);
	bool Signup_Admin_Password(string password, bool ThrowExc);
#pragma endregion
#pragma region Server_Change
	bool Change_Admin_Username(string usernamelast, string usernamenew, bool ThrowExc);
	bool Change_Admin_Password(string passwordlast, string passwordnew, bool ThrowExc);
#pragma endregion
#pragma region Server_Check
	bool Check_Admin_Username(string username, string password , bool ThrowExc);
#pragma endregion
#pragma region Profile_Picture
	void Set_Profile_Picture(string path, string username, bool ThrowExc, bool readonly);
	void Get_Profile_Picture(string username, string path, bool ThrowExc);
	void Set_Server_FileNmaeProfilePicture(string username, string filenmaeprofilepicture, bool ThrowExc);
#pragma endregion
#ifndef Other
	int GetCount(string tablename);
	Book* SearchBook(string bookname, int& BookCount, bool ThrowExc = true);
	void Lock();
	void UnLock();

#endif // !Other


};
#endif // !DATABASE_H
