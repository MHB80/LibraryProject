#include "Databaseclas.h"
bool DataBase::Open(string path, bool ThrowExc)
{
	int res = sqlite3_open(path.c_str(), &db);
	if (res != SQLITE_OK && ThrowExc)
	{
		ThrowError(SQLITE_OK);
	}
	return true;
}
void DataBase::InsertProduct(int id, string name, string writer, string janer, int chap)
{
	Lock();
	const char* sql = "INSERT INTO Book (id,name,writer,janer,chap)VALUES(?,?, ? ,?,?)";
	sqlite3_stmt* stmt;
	int res = sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr);
	if (res != SQLITE_OK)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_int(stmt, 1, id);
	if (res != SQLITE_OK)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_text(stmt, 2, name.c_str(), name.size(), nullptr);
	if (res != SQLITE_OK)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_text(stmt, 3, writer.c_str(), writer.size(), nullptr);
	if (res != SQLITE_OK)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_text(stmt, 4, janer.c_str(), janer.size(), nullptr);
	if (res != SQLITE_OK)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_int(stmt, 5, chap);

	if (res != SQLITE_OK)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_step(stmt);
	sqlite3_finalize(stmt);
	UnLock();
	if (res != SQLITE_DONE)
		ThrowError(db);

}
string DataBase::search(string name)
{
	Lock();
	name = "%" + name + "%";
	const char* sql = "Select password From Login where username like ?;";
	sqlite3_stmt* stmt;
	int res = sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr);
	if (res != SQLITE_OK )
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_text(stmt, 1, name.c_str(), name.size(), nullptr);
	if (res != SQLITE_OK )
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_step(stmt);
	if (res != SQLITE_OK)
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	sql = "Select password From Login where username like ? ;";
	res = sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr);
	if (res != SQLITE_OK )
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	res = sqlite3_bind_text(stmt, 1, name.c_str(), name.size(), nullptr);
	if (res != SQLITE_OK )
	{
		UnLock();
		sqlite3_finalize(stmt);
		ThrowError(db);
	}
	//Book* books = new Book[BookCount];
	/*while (sqlite3_step(stmt) != SQLITE_DONE)
	{
	}*/
	/*while (sqlite3_step(stmt) == SQLITE_ROW)
	{
	}*/
	sqlite3_step(stmt);
	name = string(reinterpret_cast<const char*>(sqlite3_column_text(stmt, 2)));
	sqlite3_finalize(stmt);
	UnLock();
	return name;
}
bool DataBase::LetUsername(string Username)
{
	if (Username.length() < 3)
	{
		return false;
	}
	for (auto achar : Username)//for(int i=0;i<username.lengh;i++)
	{
		if (!((achar >= 'A' && achar <= 'Z') || (achar >= 'a' && achar <= 'z')))
		{
			return false;
		}
	}
	return true;
}
bool DataBase::LetPassword(string Password)
{
	if (Password.length() < 8)
	{
		return false;
	}
	for (auto achar : Password)
	{
		if (!((achar >= 'A' && achar <= 'Z') || (achar >= 'a' && achar <= 'z') || (achar >= '0' && achar <= '9')))
		{
			return false;
		}
	}
	return true;
}
void DataBase::InsertPerson(string username, string password, string fname, string lname, string gender)
{
	Lock();
	const char* sql = "INSERT INTO Login (username, password, fname, lname, gender)VALUES(?,?, ? ,?,?)";
	sqlite3_stmt* stmtlogin;
	int res = sqlite3_prepare_v2(db, sql, -1, &stmtlogin, nullptr);
	if (res != SQLITE_OK)
	{
		UnLock();
		sqlite3_finalize(stmtlogin);
		ThrowError(db);
	}
	/*if (!LetUsername(username))
	{
		cerr << "The User Name must be larger than 4 characters and contain letters";
		return;
		//UnLock();
		//sqlite3_finalize(stmtlogin);
	}*/
	res = sqlite3_bind_text(stmtlogin, 1, username.c_str(), username.size(), nullptr);
	if (res != SQLITE_OK)
	{
		UnLock();
		sqlite3_finalize(stmtlogin);
		ThrowError(db);
	}
	if (!LetPassword(password))
	{
		cerr << "The Pass Word must be larger than 8 characters and contain letters or number";
		UnLock();
		sqlite3_finalize(stmtlogin);
	}
	res = sqlite3_bind_text(stmtlogin, 2, password.c_str(), password.size(), nullptr);
	if (res != SQLITE_OK)
	{
		UnLock();
		sqlite3_finalize(stmtlogin);
		ThrowError(db);
	}
	res = sqlite3_bind_text(stmtlogin, 3, fname.c_str(), fname.size(), nullptr);
	if (res != SQLITE_OK)
	{
		UnLock();
		sqlite3_finalize(stmtlogin);
		ThrowError(db);
	}
	res = sqlite3_bind_text(stmtlogin, 4, lname.c_str(), lname.size(), nullptr);
	if (res != SQLITE_OK)
	{
		UnLock();
		sqlite3_finalize(stmtlogin);
		ThrowError(db);
	}
	res = sqlite3_bind_text(stmtlogin, 5, gender.c_str(), gender.size(), nullptr);
	if (res != SQLITE_OK)
	{
		UnLock();
		sqlite3_finalize(stmtlogin);
		ThrowError(db);
	}
	res = sqlite3_step(stmtlogin);
	sqlite3_finalize(stmtlogin);
	UnLock();
	if (res != SQLITE_DONE)
		ThrowError(db);


}
void DataBase::Lock()
{
	sqlite3_mutex_enter(sqlite3_db_mutex(db));
}
void DataBase::UnLock()
{
	sqlite3_mutex_leave(sqlite3_db_mutex(db));
}

