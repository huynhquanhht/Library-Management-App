#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <sqlext.h>
#include <sqltypes.h>
#include <sql.h>
#include "Student.h"
#include "Book.h"
#include "BorrowReturn.h"
#include "TypeBook.h"
#include "Node.h"
#include "DoubleLinkList.h"
#include "Conditional.h"
#include<Windows.h>
#define MAXcon 75
#define MeShow 75
class DATABASE
{
#define SQL_RESULT_LEN 240
#define SQL_RETURN_CODE_LEN 1024
private:
	SQLHANDLE sqlConnHandle;
	SQLHANDLE sqlStmtHandle;
	SQLHANDLE sqlEnvHandle;
	SQLWCHAR retconstring[SQL_RETURN_CODE_LEN];
public:
	void Init();
	void close();
	// Student
	void Select_GetStudentList(DoubleLinkList<Student>&);
	void Select_UpdateStudentList(DoubleLinkList<Student>&);
	bool Insert_DBStudent(Student);
	bool Update_DBStudent(Student, string);
	bool Delete_DBStudent(string);
	void Sync_DBStudent(DoubleLinkList<Student>&);
	// Book
	void Select_GetBookList(DoubleLinkList<Book>&);
	void Select_UpdateBookList(DoubleLinkList<Book>&);
	bool Insert_DBBook(Book);
	bool Update_DBBook(Book, string);
	bool Delete_DBBook(string);
	void Sync_DBBook(DoubleLinkList<Book>&);
	// TypeBook
	void Select_GetTypeBookList(DoubleLinkList<TypeBook>&);
	void Select_UpdateTypeBookList(DoubleLinkList<TypeBook>&);
	bool Insert_DBTypeBook(TypeBook);
	bool Update_DBTypeBook(TypeBook, string);
	bool Delete_DBTypeBook(string);
	void Sync_DBTypeBook(DoubleLinkList<TypeBook>&);
	// BORROW RETURN 
	void Select_GetBorrowReturnList(DoubleLinkList<BorrowReturn>&);
	void Select_UpdateBorrowReturnList(DoubleLinkList<BorrowReturn>&);
	bool Insert_DBBorrowReturn(BorrowReturn);
	bool Update_DBBorrowReturn(BorrowReturn, string);
	bool Delete_DBBorrowReturn(string);
	void Sync_DBBorrowReturn(DoubleLinkList<BorrowReturn>&);
};


void DATABASE::Init()
{
	//initializations
	sqlConnHandle = NULL;
	sqlStmtHandle = NULL;
	//allocations
	if (SQL_SUCCESS != SQLAllocHandle(SQL_HANDLE_ENV, SQL_NULL_HANDLE, &sqlEnvHandle))
		close();

	if (SQL_SUCCESS != SQLSetEnvAttr(sqlEnvHandle, SQL_ATTR_ODBC_VERSION, (SQLPOINTER)SQL_OV_ODBC3, 0))
		close();

	if (SQL_SUCCESS != SQLAllocHandle(SQL_HANDLE_DBC, sqlEnvHandle, &sqlConnHandle))
		close();

	//output
	/*cout << "Attempting connection to SQL Server...";
	cout << "\n";*/
	switch (SQLDriverConnectW(sqlConnHandle, NULL, (SQLWCHAR*)L"DRIVER={SQL Server};SERVER=DESKTOP-G82LPV2;DATABASE=MANAGELIBRARY;trusted = true;E",
		SQL_NTS,
		retconstring,
		1024,
		NULL,
		SQL_DRIVER_NOPROMPT)) {
	case SQL_SUCCESS:

		for (size_t i = 0; i < MAXcon; i++)
			cout << " ";
		cout << "DATABASE: Successfully connected to SQL Server!";
		break;

	case SQL_SUCCESS_WITH_INFO:
		cout << "\n";
		for (size_t i = 0; i < MAXcon; i++)
			cout << " ";
		cout << "DATABASE: Successfully connected to SQL Server!";
		break;

	case SQL_INVALID_HANDLE:
		cout << "\n";
		for (size_t i = 0; i < MAXcon; i++)
			cout << " ";
		cout << "DATABASE: Could not connect to SQL Server! Please check again!";
		close();

		break;

	case SQL_ERROR:
		cout << "\n";
		for (size_t i = 0; i < MAXcon; i++)
			cout << " ";
		cout << "DATABASE: Could not connect to SQL Server! Please check again!";
		close();
		break;
	default:
		break;
	}
	//if there is a problem connecting then exit application
	if (SQL_SUCCESS != SQLAllocHandle(SQL_HANDLE_STMT, sqlConnHandle, &sqlStmtHandle))
		close();
}
void DATABASE::close()
{
	SQLFreeHandle(SQL_HANDLE_STMT, sqlStmtHandle);
	SQLDisconnect(sqlConnHandle);
	SQLFreeHandle(SQL_HANDLE_DBC, sqlConnHandle);
	SQLFreeHandle(SQL_HANDLE_ENV, sqlEnvHandle);
	system("pause");
	exit(0);
}
// Student
void DATABASE::Select_GetStudentList(DoubleLinkList<Student>& LStudent)
{
	//output
	//if there is a problem executing the query then exit application
	//else display query result
	if (SQL_SUCCESS != SQLExecDirectA(sqlStmtHandle, (SQLCHAR*)"SELECT * FROM STUDENT", SQL_NTS)) {
		cout << "\n";
		for (size_t i = 0; i < MAXcon; i++)
			cout << " ";
		cout << "Get data Student from database unsuccessfully";
		cout << "\n";
		close();
	}
	else {
		//declare output variable and pointer
		SQLLEN ptrSqlVersion;
		char* maSV = new char[9];
		char* hoTen = new char[40];
		char* khoa = new char[26];
		char* lop = new char[21];
		char* sdt = new char[26];
		while (SQLFetch(sqlStmtHandle) == SQL_SUCCESS) {
			SQLGetData(sqlStmtHandle, 1, SQL_C_CHAR, maSV, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 2, SQL_C_CHAR, hoTen, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 3, SQL_C_CHAR, khoa, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 4, SQL_C_CHAR, lop, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 5, SQL_C_CHAR, sdt, SQL_RESULT_LEN, &ptrSqlVersion);
			Format(maSV);
			Format(hoTen);
			Format(khoa);
			Format(lop);
			Format(sdt);
			Student St(maSV, hoTen, khoa, lop, sdt);
			LStudent.InsertLast(St);
		}
	}
	cout << "\n";
	for (size_t i = 0; i < MAXcon; i++)
		cout << " ";
	cout << "Get data Student from database successfully!";
	SQLCancel(sqlStmtHandle);
}
void DATABASE::Select_UpdateStudentList(DoubleLinkList<Student>& LStudent)
{
	Node<Student>* tmp = LStudent.getpHead()->getpNext();
	//if there is a problem executing the query then exit application
	//else display query result
	if (SQL_SUCCESS != SQLExecDirectA(sqlStmtHandle, (SQLCHAR*)"SELECT * FROM Student", SQL_NTS)) {
		cout << "Error querying SQL Server";
	}
	else {
		//declare output variable and pointer
		SQLLEN ptrSqlVersion;
		char* maSV = new char[9];
		char* hoTen = new char[40];
		char* khoa = new char[26];
		char* lop = new char[21];
		char* sdt = new char[26];
		while (SQLFetch(sqlStmtHandle) == SQL_SUCCESS) {
			SQLGetData(sqlStmtHandle, 1, SQL_C_CHAR, maSV, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 2, SQL_C_CHAR, hoTen, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 3, SQL_C_CHAR, khoa, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 4, SQL_C_CHAR, lop, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 5, SQL_C_CHAR, sdt, SQL_RESULT_LEN, &ptrSqlVersion);
			//display query result
			//Format(khoa);
			Format(maSV);
			Format(hoTen);
			Format(khoa);
			Format(lop);
			Format(sdt);
			Student St(maSV, hoTen, khoa, lop, sdt);
			tmp->setData(St);
			tmp = tmp->getpNext();
		}
	}
	SQLCancel(sqlStmtHandle);
}
bool DATABASE::Insert_DBStudent(Student St)
{
	string s = "INSERT INTO STUDENT VALUES('";
	s = s + St.GetCodeStudent() + "','" + St.GetNameStudent() + "','" + St.GetFaculty() + "','" + St.GetClass() + "','" + St.GetPhoneNumber() + "')";
	char* Query = new char[s.length()];
	for (size_t i = 0; i <= s.length(); i++)
	{
		*(Query + i) = s[i];
	}
	if (SQL_SUCCESS != SQLExecDirectA(sqlStmtHandle, (SQLCHAR*)Query, SQL_NTS)) {

		cout << "Error querying SQL Server";
		return 0;

	}
	else {
		cout << "Insert successfully";
		return 1;
	}
}
bool DATABASE::Update_DBStudent(Student St, string _CodeStudent)
{
	string s = "UPDATE STUDENT SET ";
	s = s + "CodeStudent = '" + St.GetCodeStudent() + "', NameStudent = '" + St.GetNameStudent() + "', Faculty = '" + St.GetFaculty() + "', Class = '" + St.GetClass() + "', PhoneNumber = '" + St.GetPhoneNumber() + "' WHERE CodeStudent = '" + _CodeStudent + '\'';
	char* Query = new char[s.length()];
	for (size_t i = 0; i <= s.length(); i++)
	{
		*(Query + i) = s[i];
	}
	if (SQL_SUCCESS != SQLExecDirectA(sqlStmtHandle, (SQLCHAR*)Query, SQL_NTS)) {
		cout << "Error querying SQL Server";
		return 0;
	}
	else {

		cout << "Update successfully\n";
		return 1;
	}
}
bool DATABASE::Delete_DBStudent(string _CodeStudent)
{
	string s = "DELETE FROM STUDENT WHERE CodeStudent = '" + _CodeStudent + "'";
	char* Query = new char[s.length()];
	for (size_t i = 0; i <= s.length(); i++)
	{
		*(Query + i) = s[i];
	}
	if (SQL_SUCCESS != SQLExecDirectA(sqlStmtHandle, (SQLCHAR*)Query, SQL_NTS)) {
		cout << "Error querying SQL Server";
		return 0;
	}
	else {

		cout << "Delete successfully";
		return 1;
	}
}
void DATABASE::Sync_DBStudent(DoubleLinkList<Student>& LStudent)
{
	if (SQL_SUCCESS != SQLExecDirectA(sqlStmtHandle, (SQLCHAR*)"DELETE FROM STUDENT", SQL_NTS))
	{
		cout << "\n";
		cout << "Error querying SQL Server";
		cout << "\n";
		close();
	}
	else
	{
		cout << "DELETE SUCCESS";
	}

	Node<Student>* tmp = LStudent.getpHead()->getpNext();
	while (tmp != NULL)
	{
		Insert_DBStudent(tmp->getData());
		tmp = tmp->getpNext();
	}
	cout << "Sync SUCCESS";
}
// Book
void DATABASE::Select_GetBookList(DoubleLinkList<Book>& LBook)
{
	//if (SQL_SUCCESS != SQLExecDirectA(sqlStmtHandle, (SQLCHAR*)"select B.CodeBook, NameBook, CodeType, Author, OriginQuantity, RemainQuantity from BOOK as B left join TypeBook as T on B.CodeType = T.CodeType", SQL_NTS)) {
	if (SQL_SUCCESS != SQLExecDirectA(sqlStmtHandle, (SQLCHAR*)"SELECT * from BOOK", SQL_NTS)) {

		cout << "\n";
		for (size_t i = 0; i < MAXcon; i++)
			cout << " ";
		cout << "Error querying SQL Server!";
		close();
	}
	else {
		//declare output variable and pointer
		SQLLEN ptrSqlVersion;
		char* CodeBook = new char[12];
		char* NameBook = new char[41];
		char* CodeType = new char[17];
		char* Author = new char[32];
		int OriginQuantity;
		int RemainQuantity;

		while (SQLFetch(sqlStmtHandle) == SQL_SUCCESS) {
			SQLGetData(sqlStmtHandle, 1, SQL_C_CHAR, CodeBook, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 2, SQL_C_CHAR, NameBook, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 3, SQL_C_CHAR, CodeType, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 4, SQL_C_CHAR, Author, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 5, SQL_C_SLONG, &OriginQuantity, 1, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 6, SQL_C_SLONG, &RemainQuantity, 1, &ptrSqlVersion);
			Format(CodeBook);
			Format(NameBook);
			Format(CodeType);
			Format(Author);
			Book B(CodeBook, NameBook, CodeType, Author, OriginQuantity, RemainQuantity);
			LBook.InsertLast(B);
		}
	}
	cout << "\n";
	for (size_t i = 0; i < MAXcon; i++)
		cout << " ";
	cout << "Get data Book from database successfully!";
	SQLCancel(sqlStmtHandle);
}
void DATABASE::Select_UpdateBookList(DoubleLinkList<Book>& LBook)
{
	Node<Book>* tmp = LBook.getpHead()->getpNext();
	//if (SQL_SUCCESS != SQLExecDirectA(sqlStmtHandle, (SQLCHAR*)"select B.CodeBook, NameBook, CodeType, Author, OriginQuantity, RemainQuantity from Book as B left join TypeBook as T on B.CodeType = T.CodeType", SQL_NTS)) {
	if (SQL_SUCCESS != SQLExecDirectA(sqlStmtHandle, (SQLCHAR*)"select * from BOOK", SQL_NTS)) {
		cout << "Error querying SQL Server";
	}
	else {
		//declare output variable and pointer
		SQLLEN ptrSqlVersion;
		char* CodeBook = new char[12];
		char* NameBook = new char[41];
		char* CodeType = new char[17];
		char* Author = new char[32];
		int OriginQuantity;
		int RemainQuantity;

		while (SQLFetch(sqlStmtHandle) == SQL_SUCCESS) {

			SQLGetData(sqlStmtHandle, 1, SQL_C_CHAR, CodeBook, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 2, SQL_C_CHAR, NameBook, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 3, SQL_C_CHAR, CodeType, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 4, SQL_C_CHAR, Author, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 5, SQL_C_SLONG, &OriginQuantity, 1, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 6, SQL_C_SLONG, &RemainQuantity, 1, &ptrSqlVersion);
			Format(CodeBook);
			Format(NameBook);
			Format(CodeType);
			Format(Author);
			Book B(CodeBook, NameBook, CodeType, Author, OriginQuantity, RemainQuantity);
			tmp->setData(B);
			tmp = tmp->getpNext();
		}
	}
	SQLCancel(sqlStmtHandle);
}
bool DATABASE::Insert_DBBook(Book B)
{
	string s = "INSERT INTO BOOK VALUES('";
	char s1[10] = { '\0' }, s3[10] = { '\0' };
	string s2, s4;

	_itoa_s(B.GetOriQua(), s1, 10);
	s2 = (char*)s1;
	_itoa_s(B.GetOriQua(), s3, 10);
	s4 = (char*)s3;
	s = s + B.GetCodeBook() + "','" + B.GetNameBook() + "','" + B.GetCodeType() + "','" + B.GetAuthor() + "'," + s2 + "," + s4 + ")";
	char* Query = new char[s.length()];
	for (size_t i = 0; i <= s.length(); i++)
	{
		*(Query + i) = s[i];
	}
	if (SQL_SUCCESS != SQLExecDirectA(sqlStmtHandle, (SQLCHAR*)Query, SQL_NTS)) {
		cout << "Error querying SQL Server";
		return 0;
	}
	else {
		cout << "Insert successfully";
		return 1;
	}
}
bool DATABASE::Update_DBBook(Book B, string CodeBook)
{
	string s = "UPDATE BOOK SET ";
	char s1[3] = { '\0' }, s3[3] = { '\0' };
	string s2, s4;
	_itoa_s(B.GetOriQua(), s1, 10);
	s2 = (char*)s1;
	_itoa_s(B.GetOriQua(), s3, 10);
	s4 = (char*)s3;
	s = s + "CodeBook = '" + B.GetCodeBook() + "', NameBook = '" + B.GetNameBook() + "', CodeType = '" + B.GetCodeType() + "', Author = '" + B.GetAuthor() + "', OriginQuantity = " + s2 + ", RemainQuantity = " + s4 + "WHERE CodeBook = '" + CodeBook + '\'';
	char* Query = new char[s.length()];
	for (size_t i = 0; i <= s.length(); i++)
	{
		*(Query + i) = s[i];
	}
	if (SQL_SUCCESS != SQLExecDirectA(sqlStmtHandle, (SQLCHAR*)Query, SQL_NTS)) {
		cout << "Error querying SQL Server";
		return 0;
	}
	else {

		cout << "Update successfully";
		return 1;
	}
}
bool DATABASE::Delete_DBBook(string CodeBook)
{
	string s = "DELETE FROM BOOK WHERE CodeBook = '" + CodeBook + "'";
	char* Query = new char[s.length()];
	for (size_t i = 0; i <= s.length(); i++)
	{
		*(Query + i) = s[i];
	}
	if (SQL_SUCCESS != SQLExecDirectA(sqlStmtHandle, (SQLCHAR*)Query, SQL_NTS)) {
		cout << "Error querying SQL Server";
		return 0;
	}
	else {

		cout << "Delete successfully!";
		return 1;
	}
}
void DATABASE::Sync_DBBook(DoubleLinkList<Book>& LBook)
{
	if (SQL_SUCCESS != SQLExecDirectA(sqlStmtHandle, (SQLCHAR*)"DELETE FROM BOOK", SQL_NTS))
	{
		cout << "\n";
		cout << "Error querying SQL Server";
		cout << "\n";
		close();
	}
	else
	{
		cout << "DELETE SUCCESS";
	}

	Node<Book>* tmp = LBook.getpHead()->getpNext();
	while (tmp != NULL)
	{
		Insert_DBBook(tmp->getData());
		tmp = tmp->getpNext();
	}
	cout << "Sync SUCCESS";
}
// TypeBook
void DATABASE::Select_GetTypeBookList(DoubleLinkList<TypeBook>& LBook)
{

	if (SQL_SUCCESS != SQLExecDirectA(sqlStmtHandle, (SQLCHAR*)"select * from TYPEBOOK", SQL_NTS)) {
		cout << "\n";
		for (size_t i = 0; i < MAXcon; i++)
			cout << " ";
		cout << "Error querying SQL Server!";
		cout << "\n";
		close();
	}
	else {
		//declare output variable and pointer
		SQLLEN ptrSqlVersion;
		char* CodeType = new char[15];
		char* NameType = new char[31];

		while (SQLFetch(sqlStmtHandle) == SQL_SUCCESS) {
			SQLGetData(sqlStmtHandle, 1, SQL_C_CHAR, CodeType, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 2, SQL_C_CHAR, NameType, SQL_RESULT_LEN, &ptrSqlVersion);
			Format(CodeType);
			Format(NameType);
			TypeBook T(CodeType, NameType);
			LBook.InsertLast(T);
		}
	}
	cout << "\n";
	for (size_t i = 0; i < MAXcon; i++)
		cout << " ";
	cout << "Get data TypeBook from database successfully!";
	SQLCancel(sqlStmtHandle);
}
void DATABASE::Select_UpdateTypeBookList(DoubleLinkList<TypeBook>& LBook)
{
	Node<TypeBook>* tmp = LBook.getpHead()->getpNext();
	if (SQL_SUCCESS != SQLExecDirectA(sqlStmtHandle, (SQLCHAR*)"select * from TYPEBOOK", SQL_NTS)) {
		cout << "Error querying SQL Server";
	}
	else {
		//declare output variable and pointer
		SQLLEN ptrSqlVersion;
		char* CodeType = new char[15];
		char* NameType = new char[31];

		while (SQLFetch(sqlStmtHandle) == SQL_SUCCESS) {

			SQLGetData(sqlStmtHandle, 1, SQL_C_CHAR, CodeType, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 2, SQL_C_CHAR, NameType, SQL_RESULT_LEN, &ptrSqlVersion);
			Format(CodeType);
			Format(NameType);
			TypeBook T(CodeType, NameType);
			tmp->setData(T);
			tmp = tmp->getpNext();
		}
	}
	SQLCancel(sqlStmtHandle);
}
bool DATABASE::Insert_DBTypeBook(TypeBook B)
{
	string s = "INSERT INTO TypeBook VALUES('";
	s = s + B.GetCodeType() + "','" + B.GetNameType() + "')";
	char* Query = new char[s.length()];
	for (size_t i = 0; i <= s.length(); i++)
	{
		*(Query + i) = s[i];
	}
	if (SQL_SUCCESS != SQLExecDirectA(sqlStmtHandle, (SQLCHAR*)Query, SQL_NTS)) {
		cout << "Error querying SQL Server";
		return 0;
	}
	else {

		cout << "Insert successfully";
		return 1;
	}
}
bool DATABASE::Update_DBTypeBook(TypeBook B, string CodeType)
{
	string s = "UPDATE TYPEBOOK SET ";

	s = s + "CodeType = '" + B.GetCodeType() + "', NameType = '" + B.GetNameType() + "' WHERE CodeType = '" + CodeType + '\'';
	char* Query = new char[s.length()];
	for (size_t i = 0; i <= s.length(); i++)
	{
		*(Query + i) = s[i];
	}
	if (SQL_SUCCESS != SQLExecDirectA(sqlStmtHandle, (SQLCHAR*)Query, SQL_NTS)) {
		cout << "Error querying SQL Server";
		return 0;
	}
	else {

		cout << "Update successfully";
		return 1;
	}
}
bool DATABASE::Delete_DBTypeBook(string CodeType)
{
	string s = "DELETE FROM TYPEBOOK WHERE CodeType = '" + CodeType + "'";
	char* Query = new char[s.length()];
	for (size_t i = 0; i <= s.length(); i++)
	{
		*(Query + i) = s[i];
	}
	if (SQL_SUCCESS != SQLExecDirectA(sqlStmtHandle, (SQLCHAR*)Query, SQL_NTS)) {
		cout << "Error querying SQL Server";
		return 0;
	}
	else {

		cout << "Delete successfully";
		return 1;
	}
}
void DATABASE::Sync_DBTypeBook(DoubleLinkList<TypeBook>& LTypeBook)
{
	if (SQL_SUCCESS != SQLExecDirectA(sqlStmtHandle, (SQLCHAR*)"DELETE FROM TYPEBOOK", SQL_NTS))
	{
		cout << "\n";
		cout << "Error querying SQL Server";
		cout << "\n";
		close();
	}
	else
	{
		cout << "DELETE SUCCESS";
	}

	Node<TypeBook>* tmp = LTypeBook.getpHead()->getpNext();
	while (tmp != NULL)
	{
		Insert_DBTypeBook(tmp->getData());
		tmp = tmp->getpNext();
	}
	cout << "Sync SUCCESS";
}
// BorrowReturn
void DATABASE::Select_GetBorrowReturnList(DoubleLinkList<BorrowReturn>& LBr)
{

	if (SQL_SUCCESS != SQLExecDirectA(sqlStmtHandle, (SQLCHAR*)"select * from BORROWRETURN", SQL_NTS)) {
		cout << "\n";
		for (size_t i = 0; i < MAXcon; i++)
			cout << " ";
		cout << "Error querying SQL Server!";
		cout << "\n";
		close();
	}
	else {
		//declare output variable and pointer
		SQLLEN ptrSqlVersion;
		char* Order = new char[10];
		char* CodeStudent = new char[10];
		char* CodeBook = new char[12];
		char* DateBorrow = new char[11];
		char* DateReturn = new char[11];
		char* Status = new char[16];

		//SELECT* FROM EMPLOYEE WHERE HIREDATE = { d '2004-03-29' }

		while (SQLFetch(sqlStmtHandle) == SQL_SUCCESS) {
			SQLGetData(sqlStmtHandle, 1, SQL_C_CHAR, Order, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 2, SQL_C_CHAR, CodeStudent, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 3, SQL_C_CHAR, CodeBook, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 4, SQL_C_CHAR, DateBorrow, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 5, SQL_C_CHAR, DateReturn, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 6, SQL_C_CHAR, Status, SQL_RESULT_LEN, &ptrSqlVersion);

			Dates DateBor;
			Dates DateRet;
			char Year[4];
			char Month[2];
			char Day[2];
			// Chuyển từ ngày mượn (char) sang int
			for (size_t i = 0, j = 0; i < 4; i++)
			{
				Year[j++] = DateBorrow[i];
			}
			DateBor.setYear(atoi(Year));
			for (size_t i = 5, j = 0; i < 7; i++)
			{
				Month[j++] = DateBorrow[i];
			}
			DateBor.setMonth(atoi(Month));
			for (size_t i = 8, j = 0; i < 10; i++)
			{
				Day[j++] = DateBorrow[i];
			}
			DateBor.setDay(atoi(Day));
			// Chuyển từ ngày trả (char) sang int
			for (size_t i = 0, j = 0; i < 4; i++)
			{
				Year[j++] = DateReturn[i];
			}
			DateRet.setYear(atoi(Year));
			for (size_t i = 5, j = 0; i < 7; i++)
			{
				Month[j++] = DateReturn[i];
			}
			DateRet.setMonth(atoi(Month));
			for (size_t i = 8, j = 0; i < 10; i++)
			{
				Day[j++] = DateReturn[i];
			}
			DateRet.setDay(atoi(Day));

			Format(Order);
			Format(CodeStudent);
			Format(CodeBook);
			Format(Status);

			BorrowReturn BR(Order, CodeStudent, CodeBook, DateBor, DateRet, Status);
			LBr.InsertLast(BR);
		}
	}
	cout << "\n";
	for (size_t i = 0; i < MAXcon; i++)
		cout << " ";
	cout << "Get data BorrowReturn from database successfully!";
	SQLCancel(sqlStmtHandle);
}
void DATABASE::Select_UpdateBorrowReturnList(DoubleLinkList<BorrowReturn>& LBr)
{
	Node<BorrowReturn>* tmp = LBr.getpHead()->getpNext();
	if (SQL_SUCCESS != SQLExecDirectA(sqlStmtHandle, (SQLCHAR*)"select * from BORROWRETURN", SQL_NTS)) {
		cout << "Error querying SQL Server";
	}
	else {
		//declare output variable and pointer
		SQLLEN ptrSqlVersion;
		char* Order = new char[10];
		char* CodeStudent = new char[10];
		char* CodeBook = new char[12];
		char* DateBorrow = new char[11];
		char* DateReturn = new char[11];
		char* Status = new char[16];

		//SELECT* FROM EMPLOYEE WHERE HIREDATE = { d '2004-03-29' }

		while (SQLFetch(sqlStmtHandle) == SQL_SUCCESS) {
			SQLGetData(sqlStmtHandle, 1, SQL_C_CHAR, Order, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 2, SQL_C_CHAR, CodeStudent, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 3, SQL_C_CHAR, CodeBook, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 4, SQL_C_CHAR, DateBorrow, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 5, SQL_C_CHAR, DateReturn, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 6, SQL_C_CHAR, Status, SQL_RESULT_LEN, &ptrSqlVersion);

			Dates DateBor;
			Dates DateRet;
			char Year[4];
			char Month[2];
			char Day[2];
			// Chuyển từ ngày mượn (char) sang int
			for (size_t i = 0, j = 0; i < 4; i++)
			{
				Year[j++] = DateBorrow[i];
			}
			DateBor.setYear(atoi(Year));
			for (size_t i = 5, j = 0; i < 7; i++)
			{
				Month[j++] = DateBorrow[i];
			}
			DateBor.setMonth(atoi(Month));
			for (size_t i = 8, j = 0; i < 10; i++)
			{
				Day[j++] = DateBorrow[i];
			}
			DateBor.setDay(atoi(Day));
			// Chuyển từ ngày trả (char) sang int

			for (size_t i = 0, j = 0; i < 4; i++)
			{
				Year[j++] = DateReturn[i];
			}
			DateRet.setYear(atoi(Year));

			for (size_t i = 5, j = 0; i < 7; i++)
			{
				Month[j++] = DateReturn[i];
			}
			DateRet.setMonth(atoi(Month));
			for (size_t i = 8, j = 0; i < 10; i++)
			{
				Day[j++] = DateReturn[i];
			}
			DateRet.setDay(atoi(Day));
			Format(Order);
			Format(CodeStudent);
			Format(CodeBook);
			Format(Status);
			BorrowReturn BR(Order, CodeStudent, CodeBook, DateBor, DateRet, Status);
			tmp->setData(BR);
			tmp = tmp->getpNext();
		}
	}
	SQLCancel(sqlStmtHandle);
}
bool DATABASE::Insert_DBBorrowReturn(BorrowReturn Br)
{
	string Str;
	char s1[5] = { '\0' };
	char s2[3] = { '\0' };
	char s3[3] = { '\0' };
	char x1[5] = { '\0' };
	char x2[3] = { '\0' };
	char x3[3] = { '\0' };
	string s4, s5, s6, s7, s8, s9;
	_itoa_s(Br.GetDateBorrow().GetYear(), s1, 10);
	s4 = (char*)s1;

	_itoa_s(Br.GetDateBorrow().GetMonth(), s2, 10);
	if (Br.GetDateBorrow().GetMonth() < 10)
		s5 = s5 + '0' + (char*)s2;
	else
		s5 = (char*)s2;
	_itoa_s(Br.GetDateBorrow().GetDay(), s3, 10);
	if (Br.GetDateBorrow().GetDay() < 10)
		s6 = s6 + '0' + (char*)s3;
	else
		s6 = (char*)s3;

	Str += "'" + s4 + s5 + s6 + "','";

	if (Br.GetDateReturn().GetYear() != 0)
	{
		_itoa_s(Br.GetDateReturn().GetYear(), x1, 10);
		_itoa_s(Br.GetDateReturn().GetMonth(), x2, 10);
		_itoa_s(Br.GetDateReturn().GetDay(), x3, 10);
		s7 = (char*)x1;
		if (Br.GetDateBorrow().GetMonth() < 10)
			s8 = s8 + '0' + (char*)x2;
		else
			s8 = (char*)x2;
		_itoa_s(Br.GetDateBorrow().GetDay(), x3, 10);
		if (Br.GetDateBorrow().GetDay() < 10)
			s9 = s9 + '0' + (char*)x3;
		else
			s9 = (char*)x3;
		Str += s7 + s8 + s9 + '\'';
	}
	else
	{
		Str += '\'';
	}
	string s = "INSERT INTO BORROWRETURN VALUES('";
	s = s + Br.GetOrder() + "','" + Br.GetCodeStudent() + "','" + Br.GetCodeBook() + "'," + Str + ",'" + Br.GetStatus() + "')";
	//out << s;
	char* Query = new char[s.length()];
	for (size_t i = 0; i <= s.length(); i++)
	{
		*(Query + i) = s[i];
	}
	if (SQL_SUCCESS != SQLExecDirectA(sqlStmtHandle, (SQLCHAR*)Query, SQL_NTS)) {
		cout << "Error querying SQL Server";
		return 0;
	}
	else {
		cout << "Insert successfully\n";
		return 1;
	}
}
bool DATABASE::Update_DBBorrowReturn(BorrowReturn Br, string Order)
{
	string Str = "DateBorrow = ";
	char s1[5] = { '\0' };
	char s2[3] = { '\0' };
	char s3[3] = { '\0' };
	char x1[5] = { '\0' };
	char x2[3] = { '\0' };
	char x3[3] = { '\0' };
	string s4, s5, s6, s7, s8, s9;
	_itoa_s(Br.GetDateBorrow().GetYear(), s1, 10);
	s4 = (char*)s1;

	_itoa_s(Br.GetDateBorrow().GetMonth(), s2, 10);
	if (Br.GetDateBorrow().GetMonth() < 10)
		s5 = s5 + '0' + (char*)s2;
	else
		s5 = (char*)s2;
	_itoa_s(Br.GetDateBorrow().GetDay(), s3, 10);
	if (Br.GetDateBorrow().GetDay() < 10)
		s6 = s6 + '0' + (char*)s3;
	else
		s6 = (char*)s3;

	Str += "'" + s4 + s5 + s6 + "', DateReturn = '";

	if (Br.GetDateReturn().GetYear() != 0)
	{
		_itoa_s(Br.GetDateReturn().GetYear(), x1, 10);
		_itoa_s(Br.GetDateReturn().GetMonth(), x2, 10);
		_itoa_s(Br.GetDateReturn().GetDay(), x3, 10);
		s7 = (char*)x1;
		if (Br.GetDateBorrow().GetMonth() < 10)
			s8 = s8 + '0' + (char*)x2;
		else
			s8 = (char*)x2;
		_itoa_s(Br.GetDateBorrow().GetDay(), x3, 10);
		if (Br.GetDateBorrow().GetDay() < 10)
			s9 = s9 + '0' + (char*)x3;
		else
			s9 = (char*)x3;
		Str += s7 + s8 + s9 + '\'';
	}
	else
	{
		Str += '\'';
	}

	string s = "UPDATE BORROWRETURN SET ";

	s = s + "Orders = '" + Br.GetOrder() + "', CodeStudent = '" + Br.GetCodeStudent() + "',CodeBook = '" + Br.GetCodeBook() + "'," + Str + ", Status = '" + Br.GetStatus() + "' WHERE Orders ='" + Br.GetOrder() + '\'';
	char* Query = new char[s.length()];
	for (size_t i = 0; i <= s.length(); i++)
	{
		*(Query + i) = s[i];
	}
	if (SQL_SUCCESS != SQLExecDirectA(sqlStmtHandle, (SQLCHAR*)Query, SQL_NTS)) {
		cout << "Error querying SQL Server";
		return 0;
	}
	else {

		cout << "Update successfully\n";
		return 1;
	}
}
bool DATABASE::Delete_DBBorrowReturn(string Orders)
{
	string s = "DELETE FROM BORROWRETURN WHERE Orders = '" + Orders + "'";
	char* Query = new char[s.length()];
	for (size_t i = 0; i <= s.length(); i++)
	{
		*(Query + i) = s[i];
	}
	if (SQL_SUCCESS != SQLExecDirectA(sqlStmtHandle, (SQLCHAR*)Query, SQL_NTS)) {
		cout << "Error querying SQL Server";
		return 0;
	}
	else {

		cout << "Delete successfully";
		return 1;
	}
}
void DATABASE::Sync_DBBorrowReturn(DoubleLinkList<BorrowReturn>& LBR)
{
	if (SQL_SUCCESS != SQLExecDirectA(sqlStmtHandle, (SQLCHAR*)"DELETE FROM BORROWRETURN", SQL_NTS))
	{
		cout << "\n";
		cout << "Error querying SQL Server";
		cout << "\n";
		close();
	}
	else
	{
		cout << "DELETE SUCCESS";
	}

	Node<BorrowReturn>* tmp = LBR.getpHead()->getpNext();
	while (tmp != NULL)
	{
		Insert_DBBorrowReturn(tmp->getData());
		tmp = tmp->getpNext();
	}
	cout << "Sync SUCCESS";
}
//=================================
//DoubleLinkList<STUDENT> LStudent;
//DBSTUDENT DBStudent;
//DBStudent.Init();
//char a[] = "102180139";
//char b[] = "Nguyen";
//char c[] = "CNTT";
//char d[] = "18TCLC_DT1";
//char e[] = "0367140514";
//STUDENT St(a, b, c, d, e);
//DBStudent.Update_DBSTUDENT(St, "102180139");
//DBStudent.Select_GetStudentList(LStudent);
//DBStudent.Sync_DBSTUDENT(LStudent);
//DBStudent.Insert_DBSTUDENT(St);
//DBStudent.Select_GetStudentList(LStudent);
//DBStudent.Select_UpdateStudentList(LStudent);
//DBStudent.close();
//=================================
//DoubleLinkList<BOOK> LBook;
//DBBOOK DBBook;
//DBBook.Init();
//
////DBBook.Select_GetBookList(LBook);
////DBBook.Select_UpdateBookList(LBook);
//BOOK B("KH-004", "Bach khoa vu tru", "KH", "Pham Xuan Bach", 5, 5);
//DBBook.Update_DBBOOK(B, "KH-004");
////DBBook.Insert_DBBOOK(B);
//
//DBBook.close();
//=================================
//DoubleLinkList<TYPEBOOK> LTypeBook;
//DBTYPEBOOK DBTypeBook;
//DBTypeBook.Init();
//DBTypeBook.Select_GetTypeBookList(LTypeBook);
////DBTypeBook.Select_UpdateTypeBookList(LTypeBook);
////TYPEBOOK T("TD", "Truyen Dai");
////DBTypeBook.Insert_DBTYPEBOOK(T);
////DBTypeBook.Update_DBTYPEBOOK(T,"TD");
////DBTypeBook.Delete_DBTYPEBOOK("TD");
//DBTypeBook.Sync_DBTYPEBOOK(LTypeBook);
//DBTypeBook.close();
//=================================
//DoubleLinkList<BORROWRETURN> LBR;
//DBBORROWRETURN DBBR;
//DBBR.Init();
//DBBR.Select_GetBorrowReturnList(LBR);
////DBBR.Select_UpdateBorrowReturnList(LBR);
////DATES D1(05, 10, 2019);
////DATES D2(0, 0, 0);
////BORROWRETURN B("000003", "105190208", "TT-001", D1, D2, "Dang muon");
////DBBR.Insert_DBBORROWRETURN(B);
////DBBR.Update_DBBORROWRETURN(B,"000003");
////DBBORROWRETURN.Delete_DBBORROWRETURN("TD");
//DBBR.Sync_DBBORROWRETURN(LBR);
//DBBR.close();

