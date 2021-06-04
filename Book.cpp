#include <iostream>
#include <string>
#include<vector> 
using namespace std;
enum Genre
{
	Comedy,
	Fantasy,
	Science_Fiction,
	adventure,
	Panic,
	Historical,
	Comic,
	biography,
	articles,
	Religious,
	Romantic

};
enum Type_book
{
	Digital,
	Printed
};
struct  Book
{
private:
	string Name;
	string Writer;
	string Price;
	Genre genre;
	string Edition;
	string Publication_year;
	Type_book type;
public:
	Book(string Name, string Writer, Genre genre, string Edition, string Publication_year, Type_book type,string price)
	{
		this->Name = Name;
		this->Writer = Writer;
		this->genre = genre;
		this->Publication_year = Publication_year;
		this->Edition = Edition;
		this->type = type;
		this->Price = price;
	}
	string Get_Name()
	{
		return Name;
	}
	string Get_Writer()
	{
		return Writer;
	}
	Genre Get_genre()
	{
		return genre;
	}
	string Get_Publication_year()
	{
		return Publication_year;
	}
	string Get_Edition()
	{
		return Edition;
	}
	Type_book Get_Type()
	{
		return type;
	}
	string Get_price()
	{
		return Price;
	}
};
class Book_Shop
{
private:
	//unique_ptr<Book> Currentuser;
	vector<Book> books;
public:
	void Regist(string Name, string Writer, Genre genre, string Edition, string Publication_year, Type_book type,string price)
	{
		Book newbook(Name, Writer,genre, Edition, Publication_year, type,price);
		books.push_back(newbook);
	}
	string Genre_name(int a)
	{
		switch (a)
		{
		case(0):
			return "Comedy";
			break;
		case(1):
			return "Fantasy";
			break;
		case(2):
			return "Science_Fiction";
			break;
		case(3):
			return "adventure";
			break;
		case(4):
			return "Panic";
			break;
		case(5):
			return "Historical";
			break;
		case(6):
			return "Comic";
			break;
		case(7):
			return "biography";
			break;
		case(8):
			return "articles";
			break;
		case(9):
			return "Religious";
			break;
		case(10):
			return "Romantic";
		}
	}
	string Type_name(int a)
	{
		if (a == 0)
		{
			return "Digital";
		}
		else
		{
			return "Printed";
		}
	}
	void Search_Book(string Book_Name)
	{
		for (int i = 0;i < books.size();i++)
		{
			if (books[i].Get_Name() == Book_Name)
			{
				cout << "Book name : " << Book_Name<<endl;
				cout << "Write : " << books[i].Get_Writer()<<endl;
				cout << "Genre : " << Genre_name(books[i].Get_genre())<<endl;
				cout << "Edition : " << books[i].Get_Edition()<<endl;
				cout << "Publication_year : " << books[i].Get_Publication_year()<<endl;
				cout << "Type : " << Type_name(books[i].Get_Type())<<endl;
				cout << "Price : " << books[i].Get_price()<<endl;
				return;
			}
		}
		cout<<"The book is not available"<<endl;
	}
	void search_Genre(Genre genre)
	{
		bool is_avalibale=false;
		for (int i = 0;i < books.size();i++)
		{
			if (books[i].Get_genre() == genre)
			{
				cout << "Book name : " << books[i].Get_Name()<<endl;
				is_avalibale = true;
			}
		}
		if (is_avalibale == false)
		{
			cout << "This genre is empety" << endl;
		}
	}
	void Search_writer(string Writer)
	{
		bool is_Writer=false;
		for (int i = 0;i < books.size();i++)
		{
			if (books[i].Get_Writer() == Writer)
			{
				cout << "Book name : " << books[i].Get_Name() << endl;
				is_Writer = true;
			}
		}
		if (is_Writer == false)
		{
			cout << "Writer not found" << endl;
		}
	}
	void Search_Type(Type_book type)
	{
		for (int i = 0;i < books.size();i++)
		{
			if (books[i].Get_Type() ==type)
			{
				cout << "Book name : " << books[i].Get_Name() << endl;
			}
		}
	}
};
int main()
{
	Book_Shop a;
	a.Regist("bookname1", "Amir", Comedy, "2", "1399", Digital,"1$");
	a.Regist("Bookname2", "Amir", Fantasy, "1", "1400", Printed,"1$");
	a.Regist("Bookname3", "Amir", Comedy, "100", "1398", Printed,"5$");
	a.Search_Book("bookname12");
	a.Search_Book("bookname1");
	a.search_Genre(Comedy);
	a.Search_writer("Asef");
	a.search_Genre(Historical);
	return 0;
}