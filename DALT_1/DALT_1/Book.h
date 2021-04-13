#pragma once
#include<iostream>
#include<string>
using namespace std;
class Book
{
private:
	string CodeBook;
	string NameBook;
	string CodeType;
	string Author;
	int OriginQuantity;
	int RemainQuantity;

public:
	Book();
	Book(const Book&);
	Book(string, string, string, string, int, int);
	~Book();
	string GetCodeBook();
	string GetNameBook();
	string GetCodeType();
	string GetAuthor();
	int GetOriQua();
	int GetReQua();

	void SetCodeBook(string);
	void SetNameBook(string);
	void SetCodeType(string);
	void SetAuthor(string);
	void SetOriQua(int);
	void SetReQua(int);


	friend ostream& operator<<(ostream&, const Book&);
	friend istream& operator>>(istream&, Book&);
	Book& operator=(Book const&);
	friend bool operator!=(const Book&, const Book&);
	friend bool operator==(const Book&, const Book&);
	friend bool operator<(const Book&, const Book&);
	friend bool operator>(const Book&, const Book&);
	friend bool operator<=(const Book&, const Book&);
	friend bool operator>=(const Book&, const Book&);
};
Book::Book()
{
	this->CodeBook = '\0';
	this->NameBook = '\0';
	this->CodeType = '\0';
	this->Author = '\0';
	this->OriginQuantity = 0;
	this->RemainQuantity = 0;
}
Book::Book(const Book& B) :CodeBook(B.CodeBook), NameBook(B.NameBook), CodeType(B.CodeType), Author(B.Author), OriginQuantity(B.OriginQuantity), RemainQuantity(B.RemainQuantity) {}
Book::Book(string mCodeBook, string mNameBook, string mCodeType, string mAuthor, int mOriginQuantity, int mRemainQuantity) : CodeBook(mCodeBook), NameBook(mNameBook), CodeType(mCodeType), Author(mAuthor), OriginQuantity(mOriginQuantity), RemainQuantity(mRemainQuantity) {}
Book::~Book()
{
}
string Book::GetCodeBook() { return this->CodeBook; }
string Book::GetNameBook() { return this->NameBook; }
string Book::GetCodeType() { return this->CodeType; }
string Book::GetAuthor() { return this->Author; }
int Book::GetOriQua() { return this->OriginQuantity; }
int Book::GetReQua() { return this->RemainQuantity; }
void Book::SetCodeBook(string _CodeBook) { this->CodeBook = _CodeBook; }
void Book::SetNameBook(string _NameBook) { this->NameBook = _NameBook; }
void Book::SetCodeType(string _CodeType) { this->CodeType = _CodeType; }
void Book::SetAuthor(string _Author) { this->Author = _Author; }
void Book::SetOriQua(int _OriQua) { this->OriginQuantity = _OriQua; }
void Book::SetReQua(int _ReQua) { this->RemainQuantity = _ReQua; }
ostream& operator<<(ostream& os, const Book& B)
{
	cout << "---------------- Book IMFORMATION ----------------- ";
	os << endl << "Code book: " << B.CodeBook;
	os << endl << "Name book: " << B.NameBook;
	os << endl << "Code type: " << B.CodeType;
	os << endl << "Author: " << B.Author;
	os << endl << "Origin Quantity: " << B.OriginQuantity;
	os << endl << "Remain Quantity: " << B.RemainQuantity;
	return os;
}
istream& operator>>(istream& is, Book& B)
{
	cout << endl << "Enter code book: ";
	getline(is, B.CodeBook);
	cout << endl << "Enter name book: ";
	getline(is, B.NameBook);
	cout << endl << "Enter code type: ";
	getline(is, B.CodeType);
	cout << endl << "Enter author: ";
	getline(is, B.Author);
	cout << endl << "Enter origin quantity: ";
	is >> B.OriginQuantity;
	B.RemainQuantity = B.OriginQuantity;
	return is;
}
inline bool operator!=(const Book& B1, const Book& B2)
{
	return (B1.CodeBook != B2.CodeBook && B1.NameBook != B2.NameBook && B1.CodeType != B2.CodeType && B1.Author != B2.Author && B1.OriginQuantity != B2.OriginQuantity && B1.RemainQuantity != B2.RemainQuantity);
}
inline bool operator==(const Book& B1, const Book& B2)
{
	return (B1.CodeBook == B2.CodeBook || B1.NameBook == B2.NameBook || B1.CodeType == B2.CodeType || B1.Author == B2.Author || B1.OriginQuantity == B2.OriginQuantity || B1.RemainQuantity == B2.RemainQuantity);
}
inline bool operator<(const Book& B1, const Book& B2)
{
	return ((B1.CodeBook < B2.CodeBook) || (B1.CodeBook == B2.CodeBook && B1.NameBook < B2.NameBook) || (B1.CodeBook == B2.CodeBook && B1.NameBook == B2.NameBook && B1.CodeType < B2.CodeType) || (B1.CodeBook == B2.CodeBook && B1.NameBook == B2.NameBook && B1.CodeType == B2.CodeType && B1.OriginQuantity < B2.OriginQuantity) || (B1.CodeBook == B2.CodeBook && B1.NameBook == B2.NameBook && B1.CodeType == B2.CodeType && B1.OriginQuantity == B2.OriginQuantity && B1.RemainQuantity < B2.RemainQuantity));
}
inline bool operator<=(const Book& B1, const Book& B2)
{
	return ((B1.CodeBook <= B2.CodeBook) || (B1.CodeBook == B2.CodeBook && B1.NameBook <= B2.NameBook) || (B1.CodeBook == B2.CodeBook && B1.NameBook == B2.NameBook && B1.CodeType <= B2.CodeType) || (B1.CodeBook == B2.CodeBook && B1.NameBook == B2.NameBook && B1.CodeType == B2.CodeType && B1.OriginQuantity <= B2.OriginQuantity) || (B1.CodeBook == B2.CodeBook && B1.NameBook == B2.NameBook && B1.CodeType == B2.CodeType && B1.OriginQuantity == B2.OriginQuantity && B1.RemainQuantity <= B2.RemainQuantity));
}
inline bool operator>(const Book& B1, const Book& B2)
{
	return ((B1.CodeBook > B2.CodeBook) || (B1.CodeBook == B2.CodeBook && B1.NameBook > B2.NameBook) || (B1.CodeBook == B2.CodeBook && B1.NameBook == B2.NameBook && B1.CodeType > B2.CodeType) || (B1.CodeBook == B2.CodeBook && B1.NameBook == B2.NameBook && B1.CodeType == B2.CodeType && B1.OriginQuantity > B2.OriginQuantity) || (B1.CodeBook == B2.CodeBook && B1.NameBook == B2.NameBook && B1.CodeType == B2.CodeType && B1.OriginQuantity == B2.OriginQuantity && B1.RemainQuantity > B2.RemainQuantity));
}
inline bool operator>=(const Book& B1, const Book& B2)
{
	return ((B1.CodeBook >= B2.CodeBook) || (B1.CodeBook == B2.CodeBook && B1.NameBook >= B2.NameBook) || (B1.CodeBook == B2.CodeBook && B1.NameBook == B2.NameBook && B1.CodeType >= B2.CodeType) || (B1.CodeBook == B2.CodeBook && B1.NameBook == B2.NameBook && B1.CodeType == B2.CodeType && B1.OriginQuantity >= B2.OriginQuantity) || (B1.CodeBook == B2.CodeBook && B1.NameBook == B2.NameBook && B1.CodeType == B2.CodeType && B1.OriginQuantity == B2.OriginQuantity && B1.RemainQuantity >= B2.RemainQuantity));
}
Book& Book::operator=(const Book& B)
{
	this->CodeBook = B.CodeBook;
	this->NameBook = B.NameBook;
	this->CodeType = B.CodeType;
	this->Author = B.Author;
	this->OriginQuantity = B.OriginQuantity;
	this->RemainQuantity = B.RemainQuantity;
	return *this;
}