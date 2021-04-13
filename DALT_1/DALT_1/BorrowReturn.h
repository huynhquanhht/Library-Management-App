#pragma once
#pragma once
#include<iostream>
#include<string>
#include"Dates.h"
using namespace std;
class BorrowReturn
{
private:
	string  Order;
	string CodeStudent;
	string CodeBook;
	Dates DateBorrow;
	Dates DateReturn;
	string Status;
public:
	BorrowReturn();
	BorrowReturn(const BorrowReturn&);
	BorrowReturn(string, string, string, Dates, Dates, string);
	~BorrowReturn();
	string GetOrder();
	string GetCodeStudent();
	string GetCodeBook();
	Dates GetDateBorrow();
	Dates GetDateReturn();
	string GetStatus();

	/*void SetDateReturn(Dates);
	void SetStatus(string);*/

	void SetOrder(string _Order);
	void SetCodeStudent(string _CodeStudent);
	void SetCodeBook(string _CodeBook);
	void SetDateBorrow(Dates _DateBorrow);
	void SetDateReturn(Dates _DateReturn);
	void SetStatus(string _Status);
	friend ostream& operator<<(ostream&, const BorrowReturn&);
	friend istream& operator>>(istream&, BorrowReturn&);
	friend ostream& operator<<(ostream&, const BorrowReturn&);
	friend istream& operator>>(istream& is, BorrowReturn&);
	friend bool operator!=(const BorrowReturn&, const BorrowReturn&);
	friend bool operator==(const BorrowReturn&, const BorrowReturn&);
	friend bool operator<(const BorrowReturn&, const BorrowReturn&);
	friend bool operator>(const BorrowReturn&, const BorrowReturn&);
	friend bool operator<=(const BorrowReturn&, const BorrowReturn&);
	friend bool operator>=(const BorrowReturn&, const BorrowReturn&);
	BorrowReturn& operator=(const BorrowReturn&);
};
BorrowReturn::BorrowReturn() :Order("\0"), CodeStudent("\0"), CodeBook("\0"), DateBorrow(), DateReturn(), Status("\0") {}
BorrowReturn::BorrowReturn(const BorrowReturn& BR) : Order(BR.Order), CodeStudent(BR.CodeStudent), CodeBook(BR.CodeBook), DateBorrow(BR.DateBorrow), DateReturn(BR.DateReturn), Status(BR.Status) {}
BorrowReturn::BorrowReturn(string mOrder, string mCodeStudent, string mCodeBook, Dates mDateBorrow, Dates mDateReturn, string mStatus) : Order(mOrder), CodeStudent(mCodeStudent), CodeBook(mCodeBook), DateBorrow(mDateBorrow), DateReturn(mDateReturn), Status(mStatus) {}
BorrowReturn::~BorrowReturn() {}
string BorrowReturn::GetOrder() { return this->Order; }
string BorrowReturn::GetCodeStudent() { return this->CodeStudent; }
string BorrowReturn::GetCodeBook() { return this->CodeBook; }
Dates BorrowReturn::GetDateBorrow() { return this->DateBorrow; }
Dates BorrowReturn::GetDateReturn() { return this->DateReturn; }
string BorrowReturn::GetStatus() { return this->Status; }

void BorrowReturn::SetOrder(string _Order) { this->Order = _Order; }
void BorrowReturn::SetCodeStudent(string _CodeStudent) { this->CodeStudent = _CodeStudent; }
void BorrowReturn::SetCodeBook(string _CodeBook) { this->CodeBook = _CodeBook; }
void BorrowReturn::SetDateBorrow(Dates _DateBorrow) { this->DateBorrow = _DateBorrow; }
void BorrowReturn::SetDateReturn(Dates _DateReturn) { this->DateReturn = _DateReturn; }
void BorrowReturn::SetStatus(string _Status) { this->Status = _Status; }
ostream& operator<<(ostream& os, const BorrowReturn& BR)
{
	os << "\nOrder: " << BR.Order;
	os << "\nCode book: " << BR.CodeBook;
	os << "\nCode student: " << BR.CodeStudent;
	os << "\nDate borrow: " << BR.DateBorrow;
	os << "\nDate return: " << BR.DateReturn;
	os << "\nStatus: " << BR.Status;
	return os;
}
istream& operator>>(istream& is, BorrowReturn& BR)
{
	cout << "\nEnter order:";
	getline(is, BR.Order);
	cout << "Enter code student: ";
	getline(is, BR.CodeStudent);
	cout << "Enter code book: ";
	getline(is, BR.CodeBook);
	cout << "Enter date borrow: ";
	is >> BR.DateBorrow;
	cout << "Enter date return: ";
	is >> BR.DateReturn;
	return is;
}
inline bool operator!=(const BorrowReturn& BR1, const BorrowReturn& BR2)
{
	return (BR1.CodeBook != BR2.CodeBook || BR1.CodeStudent != BR2.CodeStudent);
}
inline bool operator==(const BorrowReturn& BR1, const BorrowReturn& BR2)
{
	return (BR1.CodeBook == BR2.CodeBook && BR1.CodeStudent == BR2.CodeStudent);
}
inline bool operator<(const BorrowReturn& BR1, const BorrowReturn& BR2)
{
	return ((BR1.CodeBook < BR2.CodeBook) || (BR1.CodeBook == BR2.CodeBook && BR1.CodeStudent < BR2.CodeStudent));
}
inline bool operator>(const BorrowReturn& BR1, const BorrowReturn& BR2)
{
	return ((BR1.CodeBook > BR2.CodeBook) || (BR1.CodeBook == BR2.CodeBook && BR1.CodeStudent > BR2.CodeStudent));
}
inline bool operator<=(const BorrowReturn& BR1, const BorrowReturn& BR2)
{
	return ((BR1.CodeBook <= BR2.CodeBook) || (BR1.CodeBook == BR2.CodeBook && BR1.CodeStudent <= BR2.CodeStudent));
}
inline bool operator>=(const BorrowReturn& BR1, const BorrowReturn& BR2)
{
	return ((BR1.CodeBook >= BR2.CodeBook) || (BR1.CodeBook == BR2.CodeBook && BR1.CodeStudent >= BR2.CodeStudent));
}
BorrowReturn& BorrowReturn::operator=(const BorrowReturn& BR)
{
	this->Order = BR.Order;
	this->CodeStudent = BR.CodeStudent;
	this->CodeBook = BR.CodeBook;
	this->DateBorrow = BR.DateBorrow;
	this->DateReturn = BR.DateReturn;
	this->Status = BR.Status;
	return *this;
}

