#pragma once
#include <iostream>
#include <string>
#include<vector> 
using namespace std;
using namespace System;
//unique_ptr<Book> Currentuser;
std::vector<Book>* books;
enum class Genre
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
enum class Type_book
{
	Digital,
	Printed
};
ref struct Book
{
private:
	String^ Name;
	String^ Writer;
	String^ Price;
	Genre genre;
	String^ Edition;
	String^ Publication_year;
	Type_book type;
public:
	Book(string NameB, string WriterB, Genre genre, string EditionB, string Publication_year, Type_book type, string priceB)
	{
		string answerstr = NameB;
		String^ Answer = gcnew String(answerstr.c_str());
		auto Name = Answer;
		///////////////////////////////
		string answerstr = WriterB;
		String^ Answer = gcnew String(answerstr.c_str());
		auto Writer = Answer;
		////////////////////////////////////
		this->genre = genre;
		/// <summary>
		/// ///////////////////
		/// </summary>
		string answerstr = Publication_year;
		String^ Answer = gcnew String(answerstr.c_str());
		auto Publication_year = Answer;
		////////////////////
		string answerstr = EditionB;
		String^ Answer = gcnew String(answerstr.c_str());
		auto Edition = Answer;
		///////////////////////
		this->type = type;
		/// <summary>
		/// ////////////////////
		/// </summary>
		string answerstr = priceB;
		String^ Answer = gcnew String(answerstr.c_str());
		auto Price = Answer;
	}

	String^ Get_Name()
	{
		return Name;
	}
public:String^ Get_Writer()
{
	return Writer;
}
public:	Genre Get_genre()
{
	return genre;
}
	  String^ Get_Publication_year()
	  {

		  return Publication_year;
	  }
	  String^ Get_Edition()
	  {

		  return Edition;
	  }
public:	Type_book Get_Type()
{
	return type;
}
public:	String^ Get_price()
{
	return Price;
}
public:
	Book() {}

};
public ref class Book_Shop
{

	//unique_ptr<Book> Currentuser;
	//std::vector<Book>* books;

public:

	void Regist(string Name, string Writer, Genre genre, string Edition, string Publication_year, Type_book type, string price)
	{
		Book newbook(Name, Writer, genre, Edition, Publication_year, type, price);
		books->push_back(newbook);
	}
};
String^ retstr2Str(string Answer)
{
	String^ ReturnAns = gcnew String(Answer.c_str());
	return ReturnAns;
}
String^ Genre_name(int a)
{
	string Answer;

	switch (a)
	{
	case(0):
		return retstr2Str("Comedy");
		break;
	case(1):
		return retstr2Str("Fantasy");
		break;
	case(2):
		return retstr2Str("Science_Fiction");
		break;
	case(3):
		return retstr2Str("adventure");
		break;
	case(4):
		return retstr2Str("Panic");
		break;
	case(5):
		return retstr2Str("Historical");
		break;
	case(6):
		return retstr2Str("Comic");
		break;
	case(7):
		return retstr2Str("biography");
		break;
	case(8):
		return retstr2Str("articles");
		break;
	case(9):
		return retstr2Str("Religious");
		break;
	case(10):
		return retstr2Str("Romantic");
	default:
		break;
	}
	String^ Type_name(int a) {

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
		for (int i = 0; i < books->size(); i++)
		{
			if (books[i]->Get_Name() == Book_Name)
			{
				cout << "Book name : " << Book_Name << endl;
				cout << "Write : " << books[i]->Get_Writer() << endl;
				cout << "Genre : " << Genre_name(books[i].Get_genre()) << endl;
				cout << "Edition : " << books[i].Get_Edition() << endl;
				cout << "Publication_year : " << books[i].Get_Publication_year() << endl;
				cout << "Type : " << Type_name(books[i].Get_Type()) << endl;
				cout << "Price : " << books[i].Get_price() << endl;
				return;
			}
		}
		cout << "The book is not available" << endl;
	}
	void search_Genre(Genre genre)
	{
		bool is_avalibale = false;
		for (int i = 0; i < books->size(); i++)
		{
			if (books[i].Get_genre() == genre)
			{
				cout << "Book name : " << books[i].Get_Name() << endl;
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
		bool is_Writer = false;
		for (int i = 0; i < books->size(); i++)
		{
			if (books[i]->Get_Writer() == Writer)
			{
				cout << "Book name : " << books[i]->Get_Name() << endl;
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
		for (int i = 0; i < books->size(); i++)
		{
			if (books[i]->Get_Type() == type)
			{
				cout << "Book name : " << books[i]->Get_Name() << endl;
			}
		}
	}
};
