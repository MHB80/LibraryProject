#include <string>
#include "sqlite3.h"
#include <fstream>
#include <iostream>
#define ThrowError(db) throw exception(sqlite3_errmsg(db));
using namespace std;
class DataBase
{
private:
	sqlite3* db;
public:
	void InsertProduct(int id, string name, string writer, string janer, int chap);
	void SearchBook(string name);
	bool Open(string db, bool ThrowExc = true);
	void InsertPerson(string username, string password, string fname, string lname, string gender);
	bool LetPassword(string passord);
	bool LetUsername(string username);
	string search(string user);
	void Lock();
	void UnLock();

};