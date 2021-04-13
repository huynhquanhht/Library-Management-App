#pragma once
#include<iostream>
#include<string>
using namespace std;
class TypeBook
{
private:
	string CodeType;
	string NameType;
public:
	TypeBook();
	TypeBook(const TypeBook&);
	TypeBook(string, string);
	~TypeBook();
	string GetCodeType();
	string GetNameType();
	friend bool operator!=(const TypeBook&, const TypeBook&);
	friend bool operator==(const TypeBook&, const TypeBook&);
	friend bool operator<(const TypeBook&, const TypeBook&);
	friend bool operator>(const TypeBook&, const TypeBook&);
	friend bool operator<=(const TypeBook&, const TypeBook&);
	friend bool operator>=(const TypeBook&, const TypeBook&);
	friend ostream& operator<<(ostream&, const TypeBook&);
	friend istream& operator>>(istream&, TypeBook&);
	TypeBook operator=(const TypeBook&);
};

TypeBook::TypeBook() : CodeType("\0"), NameType("\0") {}
TypeBook::TypeBook(const TypeBook& T) : CodeType(T.CodeType), NameType(T.NameType) {}
TypeBook::TypeBook(string mCodeType, string mNameType) : CodeType(mCodeType), NameType(mNameType) {}
TypeBook::~TypeBook() {}
string TypeBook::GetCodeType() {return this->CodeType;}
string TypeBook::GetNameType() {return this->NameType;}
inline bool operator!=(const TypeBook& T1, const TypeBook& T2)
{
	return (T1.CodeType != T2.CodeType || T1.NameType != T2.NameType);
}
inline bool operator==(const TypeBook& T1, const TypeBook& T2)
{
	return (T1.CodeType == T2.CodeType && T1.NameType == T2.NameType);
}
inline bool operator<(const TypeBook& T1, const TypeBook& T2)
{
	return (T1.CodeType < T2.CodeType || (T1.CodeType == T2.CodeType && T1.NameType < T2.NameType));
}
inline bool operator>(const TypeBook& T1, const TypeBook& T2)
{
	return (T1.CodeType > T2.CodeType || (T1.CodeType == T2.CodeType && T1.NameType > T2.NameType));
}
inline bool operator>=(const TypeBook& T1, const TypeBook& T2)
{
	return (T1.CodeType >= T2.CodeType || (T1.CodeType == T2.CodeType && T1.NameType >= T2.NameType));
}
inline bool operator<=(const TypeBook& T1, const TypeBook& T2)
{
	return (T1.CodeType <= T2.CodeType || (T1.CodeType == T2.CodeType && T1.NameType <= T2.NameType));
}
ostream& operator<<(ostream& os, const TypeBook& T)
{
	os << "\n---------------- TypeBook IMFORMATION ----------------- ";
	os << "\nCode type:" << T.CodeType;
	os << "\nType Book:" << T.NameType;
	return os;
}
istream& operator>>(istream& is, TypeBook& T)
{
	cout << "Enter code type:";
	getline(is, T.CodeType);
	cout << "Enter name type";
	getline(is, T.NameType);
	return is;
}
TypeBook TypeBook::operator=(const TypeBook& T)
{
	this->CodeType = T.CodeType;
	this->NameType = T.NameType;
	return *this;
}


