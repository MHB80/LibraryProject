#include "pch.h"
#include "regist.h"
#include <iostream>
#include <string>
using namespace std;
#ifdef UIAPI
#define UIAPI _declspec(dllexport)
#else 
#define UIAPI _declspec(dllimport)
#endif // UIAPI


typedef int (*Testfunction)(std::string);
Testfunction testfunction;
extern "C"  UIAPI User* CreatObject(Result res);
extern "C"  UIAPI void Regist(User*, string username, string password, string Fname, string Lname);
extern "C"  UIAPI void Start(Testfunction testFunction);
int callback();
void test();