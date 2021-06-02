#include <iostream>
#include <string>
#include<vector> 
using namespace std;
enum Gender
{
	Male,
	Fimale  
};
struct User
{
private:
	string Username;
	string Password;
	string Fname;
	string Lname;
	string Email;
	Gender gender;
	bool Let(string name)
	{
		for (auto achar :name)
		{
			if (!((achar >= 'A' && achar <= 'Z') || (achar >= 'a' && achar <= 'z')))
			{
				return false;
			}
		}
		return true;
	}
	bool Let_Username(string Username)
	{
		if (Username.length() < 2)
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
	bool Let_Password(string Password)
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
	void Set_Username(string username)
	{
		if (! Let_Username(username))
		{
			throw("The User Name must be larger than 4 characters and contain letters");
		}
		else
		{
			this->Username = username;
		}
	}
	void Set_Fname(string name)
	{
		if (!Let(name))
		{
			throw("First name must be contain letters");
		}
		else
		{
			Fname = name;
		}
	}
	void Set_Lname(string name)
	{
		if (!Let(name))
		{
			throw("Last Name must be contain letters");
		}
		else
		{
			Lname = name;
		}
	}
	void Setgender(Gender gender)
	{
		this->gender = gender;
	}
public:
	void Set_Password(string password)
	{
		if (!Let_Password(password))
		{
			throw("The Pass Word must be larger than 8 characters and contain letters or number");
		}
		else
		{
			this->Password = password;
		}
	}
	string Get_password()
	{
		return this->Password;
	}
	string Get_username()
	{
		return this->Username;
	}
	string Get_Fname()
	{
		return this->Fname;
	}
	string Get_Lname()
	{
		return this->Lname;
	}
	Gender Get_gender()
	{
		return this->gender;
	}

	User(string username, string password, string Fname, string Lname, Gender gender)
	{
		Set_Username(username);
		Set_Password(password);
		Set_Fname(Fname);
		Set_Lname(Lname);
		Setgender(gender);
	}
	//users.push_back(User);
};
class  Login
{
private:
	unique_ptr<User> Currentuser;
	vector<User> users;
	bool Is_Login;
public:
	int j;
	bool Login_Usernamepass(string Username, string password)
	{
		for (int i = 0; i < users.size(); i++)
		{

		//here:
			if (users[i].Get_username() == Username)
			{
				if (users[i].Get_password() == password)
				{
					//Is_Login = true;
					//cout << "wellcome";
					j = i;
					return true;
				}
				//flag Here;
			/*	else
				{
					cout << "Password is incorrect";
					//flag Here;
					//return false;
					goto here;
				}*/
			}

		}
		//throw("there is not this username");
		return false;
	}
	void  Register(string username, string Password, string Fname,
		string Lname, Gender gender)
	{

		User newuser(username, Password, Fname, Lname, gender);
		users.push_back(newuser);
	}
	void Login1(string username, string password)
	{
	here:
	there:
		if ( Login_Usernamepass(username,password))
		{
			cout << "conecting....";
		}
		else if (users[j].Get_username() != username)
		{
			cout << "There is not this username"<<endl;
			cout << "Username : ";
			cin >> username;
			cout << "Password : ";
			cin >> password;
			goto there;
		}
		else
		{
			//throw("there is not this username");
			cout << "disconnect"<<endl;
			cout << "Password : ";
			cin >> password;
			goto here;
		}
	}
};
int main()
{
	Login al;
	al.Register("Amir", "12345678", "amir", "mehraban", Male);
	al.Register("ferizirki", "12345678", "fariborz", "baghmisheh", Male);
	Login a;
	al.Login1("Amir", "12345678");
	//users.push_back(abbas);
	return 0;
}