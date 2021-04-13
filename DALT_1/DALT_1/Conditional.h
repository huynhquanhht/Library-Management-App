#pragma once
#include "DoubleLinkList.h"
#include "Student.h"
#include "Book.h"
#include "BorrowReturn.h"
#include "Dates.h"

#pragma region Normal
template<class T>
bool Asc(T t1, T t2)
{
	return t1 > t2;
}
template<class T>
bool Dsc(T t1, T t2)
{
	return t1 < t2;
}
template<class T>
bool notEqual(T t1, T t2)
{
	return t1 != t2;
}
template<class T>
bool Equal(T t1, T t2)
{
	return t1 == t2;
}
#pragma endregion

#pragma region Student
bool AscCodeStudent(Student s1, Student s2)
{
	return s1.GetCodeStudent() > s2.GetCodeStudent();
}
bool AscNameStudent(Student s1, Student s2)
{
	return s1.GetNameStudent() > s2.GetNameStudent();
}
bool AscStudentClass(Student s1, Student s2)
{
	return s1.GetClass() > s2.GetClass();
}
bool AscStudentFaculty(Student s1, Student s2)
{
	return s1.GetFaculty() > s2.GetFaculty();
}
bool AscStudentPhoneNumber(Student s1, Student s2)
{
	return s1.GetPhoneNumber() > s2.GetPhoneNumber();
}

bool DscCodeStudent(Student s1, Student s2)
{
	return s1.GetCodeStudent() < s2.GetCodeStudent();
}
bool DscNameStudent(Student s1, Student s2)
{
	return s1.GetNameStudent() < s2.GetNameStudent();
}
bool DscStudentClass(Student s1, Student s2)
{
	return s1.GetClass() < s2.GetClass();
}
bool DscStudentFaculty(Student s1, Student s2)
{
	return s1.GetFaculty() < s2.GetFaculty();
}
bool DscStudentPhoneNumber(Student s1, Student s2)
{
	return s1.GetPhoneNumber() < s2.GetPhoneNumber();
}

bool EqualCodeStudent(Student s1, std::string mAtribute)
{
	return s1.GetCodeStudent() == mAtribute;
}
bool EqualNameStudent(Student s1, std::string mAtribute)
{
	return s1.GetNameStudent() == mAtribute;
}
bool EqualStudentClass(Student s1, std::string mAtribute)
{
	return s1.GetClass() == mAtribute;
}
bool EqualStudentFaculty(Student s1, std::string mAtribute)
{
	return s1.GetFaculty() == mAtribute;
}
bool EqualStudentPhoneNumber(Student s1, std::string mAtribute)
{
	return s1.GetPhoneNumber() == mAtribute;
}

bool notEqualCodeStudent(Student s1, std::string mAtribute)
{
	return s1.GetCodeStudent() != mAtribute;
}
bool notEqualNameStudent(Student s1, std::string mAtribute)
{
	return s1.GetNameStudent() != mAtribute;
}
bool notEqualStudentClass(Student s1, std::string mAtribute)
{
	return s1.GetClass() != mAtribute;
}
bool notEqualStudentFaculty(Student s1, std::string mAtribute)
{
	return s1.GetFaculty() != mAtribute;
}
bool notEqualStudentPhoneNumber(Student s1, std::string mAtribute)
{
	return s1.GetPhoneNumber() != mAtribute;
}
#pragma endregion

#pragma region Book
bool AscBookCode(Book B1, Book B2)
{
	return B1.GetCodeBook() > B2.GetCodeBook();
}
bool AscBookName(Book B1, Book B2)
{
	return B1.GetNameBook() > B2.GetNameBook();
}
bool AscBookCodeType(Book B1, Book B2)
{
	return B1.GetCodeType() > B2.GetCodeType();
}
bool AscBookAuthor(Book B1, Book B2)
{
	return B1.GetAuthor() > B2.GetAuthor();
}
bool AscBookOriginQuantity(Book B1, Book B2)
{
	return B1.GetOriQua() > B2.GetOriQua();
}
bool AscBookRemainQuantity(Book B1, Book B2)
{
	return B1.GetReQua() > B2.GetReQua();
}

bool DscBookCode(Book B1, Book B2)
{
	return B1.GetCodeBook() < B2.GetCodeBook();
}
bool DscBookName(Book B1, Book B2)
{
	return B1.GetCodeBook() < B2.GetCodeBook();
}
bool DscBookCodeType(Book B1, Book B2)
{
	return B1.GetCodeType() < B2.GetCodeType();
}
bool DscBookAuthor(Book B1, Book B2)
{
	return B1.GetAuthor() < B2.GetAuthor();
}
bool DscBookOriginQuantity(Book B1, Book B2)
{
	return B1.GetOriQua() < B2.GetOriQua();
}
bool DscBookRemainQuantity(Book B1, Book B2)
{
	return B1.GetReQua() < B2.GetReQua();
}

bool EqualBookCode(Book B1, std::string mAtribute)
{
	return B1.GetCodeBook() == mAtribute;
}
bool EqualBookName(Book B1, std::string mAtribute)
{
	return B1.GetNameBook() == mAtribute;
}
bool EqualBookCodeType(Book B1, std::string mAtribute)
{
	return B1.GetCodeType() == mAtribute;
}
bool EqualBookAuthor(Book B1, std::string mAtribute)
{
	return B1.GetAuthor() == mAtribute;
}
bool EqualBookOriginQuantity(Book B1, int mAtribute)
{
	return B1.GetOriQua() == mAtribute;
}
bool EqualBookRemainQuantity(Book B1, int mAtribute)
{
	return B1.GetReQua() == mAtribute;
}

bool notEqualBookCode(Book B1, std::string mAtribute)
{
	return B1.GetCodeBook() != mAtribute;
}
bool notEqualBookName(Book B1, std::string mAtribute)
{
	return B1.GetCodeBook() != mAtribute;
}
bool notEqualBookCodeType(Book B1, std::string mAtribute)
{
	return B1.GetCodeType() != mAtribute;
}
bool notEqualBookAuthor(Book B1, std::string mAtribute)
{
	return B1.GetAuthor() != mAtribute;
}
bool notEqualBookOriginQuantity(Book B1, int mAtribute)
{
	return B1.GetOriQua() != mAtribute;
}
bool notEqualBookRemainQuantity(Book B1, int mAtribute)
{
	return B1.GetReQua() != mAtribute;
}
#pragma endregion

#pragma region TypeBook
bool AscCodeType(TypeBook s1, TypeBook s2)
{
	return s1.GetCodeType() > s2.GetCodeType();
}
bool AscNameType(TypeBook s1, TypeBook s2)
{
	return s1.GetNameType() > s2.GetNameType();
}

bool DscCodeType(TypeBook s1, TypeBook s2)
{
	return s1.GetCodeType() < s2.GetCodeType();
}
bool DscNameType(TypeBook s1, TypeBook s2)
{
	return s1.GetNameType() < s2.GetNameType();
}

bool EqualCodeType(TypeBook s1, std::string mAtribute)
{
	return s1.GetCodeType() == mAtribute;
}
bool EqualNameType(TypeBook s1, std::string mAtribute)
{
	return s1.GetNameType() == mAtribute;
}

bool notEqualCodeType(TypeBook s1, std::string mAtribute)
{
	return s1.GetCodeType() != mAtribute;
}
bool notEqualNameType(TypeBook s1, std::string mAtribute)
{
	return s1.GetNameType() != mAtribute;
}
#pragma endregion

#pragma region BorrowReturn
bool AscOrder(BorrowReturn BR1, BorrowReturn BR2)
{
	return BR1.GetOrder() > BR2.GetOrder();
}
bool AscCodeStudent(BorrowReturn BR1, BorrowReturn BR2)
{
	return BR1.GetCodeStudent() > BR2.GetCodeStudent();
}
bool AscCodeBook(BorrowReturn BR1, BorrowReturn BR2)
{
	return BR1.GetCodeBook() > BR2.GetCodeBook();
}
bool AscDateBorrow(BorrowReturn BR1, BorrowReturn BR2)
{
	return BR1.GetDateBorrow() > BR2.GetDateBorrow();
}
bool AscDateReturn(BorrowReturn BR1, BorrowReturn BR2)
{
	return BR1.GetDateReturn() > BR2.GetDateReturn();
}
bool AscStatus(BorrowReturn BR1, BorrowReturn BR2)
{
	bool st1 = (BR1.GetStatus() == "Da muon");
	bool st2 = (BR2.GetStatus() == "Da muon");
	return st1 > st2;
}

bool DscOrder(BorrowReturn BR1, BorrowReturn BR2)
{
	return BR1.GetOrder() < BR2.GetOrder();
}
bool DscCodeStudent(BorrowReturn BR1, BorrowReturn BR2)
{
	return BR1.GetCodeStudent() < BR2.GetCodeStudent();
}
bool DscCodeBook(BorrowReturn BR1, BorrowReturn BR2)
{
	return BR1.GetCodeBook() < BR2.GetCodeBook();
}
bool DscDateBorrow(BorrowReturn BR1, BorrowReturn BR2)
{
	return BR1.GetDateBorrow() < BR2.GetDateBorrow();
}
bool DscStatus(BorrowReturn BR1, BorrowReturn BR2)
{
	return BR1.GetStatus() < BR2.GetStatus();
}

bool EqualBRCodeStudent(BorrowReturn BR1, string mAtrr)
{
	return BR1.GetCodeStudent() == mAtrr;
}
bool EqualBRCodeBook(BorrowReturn BR1, string mAtrr)
{
	return BR1.GetCodeBook() == mAtrr;
}

bool EqualBRDayBR(BorrowReturn BR1, Dates mD)
{
	return BR1.GetDateBorrow() == mD;
}

bool EqualBRDayRT(BorrowReturn BR1, Dates mD)
{
	return BR1.GetDateReturn() == mD;
}
bool EqualBRCodeStudentAndIsBorrowed(BorrowReturn BR1, string mAtrr)
{
	return (BR1.GetCodeStudent() == mAtrr && BR1.GetStatus()=="Dang muon");
}
bool EqualOrder(BorrowReturn s1, std::string mAtribute)
{
	return s1.GetOrder() == mAtribute;
}
bool EqualBRStatus(BorrowReturn BR1, string mStatus)
{
	return BR1.GetStatus() == mStatus;
}
#pragma endregion

#pragma region Dates
bool AscDates(Dates d1, Dates d2)
{
	return d1 > d2;
}
bool DscDates(Dates d1, Dates d2)
{
	return d1 < d2;
}

bool EqualDates(Dates d1, Dates d2)
{
	return (d1 == d2);
}
bool notEqualDates(Dates d1, Dates d2)
{
	return d1 != d2;
}
#pragma endregion



void FormatStr(string& str)
{
	int n = str.length();
	while (str[n] == ' ') str[n - 1] = '\0';
}
void Format(char*& str)
{
	int n = strlen(str);
	while (str[n - 1] == ' ') --n;
	str[n] = '\0';

}

class CurPos
{
public:
	CurPos() :x(-1), y(-1) {}
	int x, y;
	operator bool() const { return x >= 0 && y >= 0; }
};
CurPos _getCursorPos()
{
	CurPos pos;
	CONSOLE_SCREEN_BUFFER_INFO con;
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	if (hcon != INVALID_HANDLE_VALUE &&
		GetConsoleScreenBufferInfo(hcon, &con))
	{
		pos.x = con.dwCursorPosition.X;
		pos.y = con.dwCursorPosition.Y;
	}
	return pos;
}
void gotoxy(int x, int y)
{
	COORD c = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void earseRow(int y = 0)
{
	gotoxy(0, y);
	for (int i = 0; i <= 250; ++i) cout << " ";
	gotoxy(0, y);
}

bool _isDigit(char c)
{
	return ('0' <= c && c <= '9');
}
int getInput(int l, int r, CurPos pS)
{
	string inS;
	int num = 0;
	bool validIn = true;
	bool validRange = true;
	do
	{
		validIn = true;
		validRange = true;
		CurPos pE;
		do
		{
			cin >> inS;
			validIn = true;
			for (char c : inS)
				if (!_isDigit(c))
				{
					validIn = false;
					if (!validIn)
					{
						earseRow(pS.y);
						gotoxy(pS.x, pS.y);
						cout << "Invalid format. Please enter again: ";
					}
					break;
				}

		} while (!validIn);
		num = atoi(inS.c_str());
		validRange = (l <= num && num <= r);
		if (validIn)
		{
			if (!validRange)
			{
				earseRow(pS.y);
				gotoxy(pS.x, pS.y);
				cout << "Invalid range. Please enter again: ";
			}
		}
	} while (!(validIn && validRange));
	return num;
}

void getTimeNow(int& mDay, int& mMonth, int& mYear)
{
	time_t _nowtime = time(nullptr);
	time(&_nowtime);
	tm TIME;
	localtime_s(&TIME, &_nowtime);
	mYear = TIME.tm_year + 1900;
	mMonth = (TIME.tm_mon)%12+1;
	mDay = TIME.tm_mday;

}

Dates getTimeNow()
{
	int mDay, mMonth, mYear;
	time_t _nowtime = time(nullptr);
	time(&_nowtime);
	tm TIME;
	localtime_s(&TIME, &_nowtime);
	mYear = TIME.tm_year + 1900;
	mMonth = (TIME.tm_mon) % 12 + 1;
	mDay = TIME.tm_mday;
	Dates rs(mDay,mMonth,mYear);
	return rs;
}
void showFinish()
{
	system("cls");
	std::cout << "______  _         _       _      _ \n";
	std::cout << "|  ___|(_)       (_)     | |    | |\n";
	std::cout << "| |_    _  _ __   _  ___ | |__  | |\n";
	std::cout << "|  _|  | || \'_ \\ | |/ __|| \'_ \\ | |\n";
	std::cout << "| |    | || | | || |\\__ \\| | | ||_|\n";
	std::cout << "\\_|    |_||_| |_||_||___/|_| |_|(_)\n";

}
