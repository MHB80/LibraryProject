#include "pch.h"
#include "regist.h"
#include <iostream>
#include <string>
#include "Source.h"
using namespace std;
User* CreatObject(Result res)
{
	User* cal = new User(res);
	return cal;
}
void Regist(User* cal, string username, string password, string Fname, string Lname)
{
	cal->Set_Username(username);
	cal->Set_Password(password);
	cal->Set_Fname(Fname);
	cal->Set_Lname(Lname);
}
int callback()
{
	testfunction("hello");
	return 0;
}
void Start(Testfunction testFunction)
{
	testfunction = testFunction;
	test();
}
void test()
{
	callback();
}