#pragma once
#include"Database.h"
#include"Student.h"
#include"TypeBook.h"
#include"Book.h"
#include"BorrowReturn.h"
#include"DoubleLinkList.h"
#include"Node.h"
#include <Windows.h>
#include "Conditional.h"
#include <conio.h> 
#include <stdio.h> 
#include<string>

#define MAX 14
#define MAX1 71
#define MAX3 7
#define MAX4 40
#define SpaceStu 22
#define SpaceBoo 20
#define SpaceBor 33
#define SpaceTyp 68
#define MAXMAIN 76
#define MeShow 75
#define MAXCon 75
using namespace std;

class Menu {
public:
	void Start();
	void Info();
	void Main();
	void ShowStudent(DoubleLinkList<Student>&);
	void ShowBook(DoubleLinkList<Book>&);
	void ShowBorrowReturn(DoubleLinkList<BorrowReturn>&);
	void ShowTypeBook(DoubleLinkList<TypeBook>&);
	void MenuShow();
	void MenuSearch();
	void MenuInsert();
	void MenuDelete();
	void MenuUpdate();
	void MenuSort();
	void MenuProject(DoubleLinkList<Student>&, DoubleLinkList<Book>&, DoubleLinkList<TypeBook>&, DoubleLinkList<BorrowReturn>&, DATABASE&);
	void ShowMenuSortStudent();
	void MenuSearchAttributeStudent();
	void MenuSearchAttributeBook();
	void MenuSearchAttributeTypeBook();
	void MenuSearchAttributeBR();
	void ShowMenuSort();
	void SortStudent(DoubleLinkList<Student>&, int, CurPos);
	void ShowMenuSortBook();
	void SortBook(DoubleLinkList<Book>&, int, CurPos);
	void ShowMenuBR();
	void SortBR(DoubleLinkList<BorrowReturn>&, int, CurPos);
	void ShowMenuSortTypeBook();
	void SortTypeBook(DoubleLinkList<TypeBook>&, int, CurPos);
};

void Menu::ShowMenuSortStudent()
{
	int const mSpace = 75;
	int const _MAX3 = 3;
	int const fi1 = 5;
	string str1 = "SORT STUDENT BY";
	string str2 = "1. Sort By Code Student";
	string str3 = "2. Sort By Name Student";
	string str4 = "3. Sort By Class";
	string str5 = "4. Sort By Faculty";
	string str6 = "5. Sort By Phone Number";
	string str7 = "6. Return";
	cout << "\n\n\n";
	int cnt = 3;
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(201);
	for (size_t i = 0; i < 45; i++)
		cout << char(205);
	cout << char(187);
	//=============================
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < fi1; i++)
		cout << " ";
	cout << str1;
	for (size_t i = 0; i < 45 - str1.length() - fi1; i++)
		cout << " ";
	cout << char(186);
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(204);
	for (size_t i = 0; i < 45; i++)
		cout << char(205);
	cout << char(185);
	//=============================
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < _MAX3; i++)
		cout << " ";
	cout << str2;
	for (size_t i = 0; i < 45 - str2.length() - _MAX3; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < _MAX3; i++)
		cout << " ";
	cout << str3;
	for (size_t i = 0; i < 45 - str3.length() - _MAX3; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < _MAX3; i++)
		cout << " ";
	cout << str4;
	for (size_t i = 0; i < 45 - str4.length() - _MAX3; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < _MAX3; i++)
		cout << " ";
	cout << str5;
	for (size_t i = 0; i < 45 - str5.length() - _MAX3; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < _MAX3; i++)
		cout << " ";
	cout << str6;
	for (size_t i = 0; i < 45 - str6.length() - _MAX3; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < _MAX3; i++)
		cout << " ";
	cout << str7;
	for (size_t i = 0; i < 45 - str7.length() - _MAX3; i++)
		cout << " ";
	cout << char(186);
	//=============================

	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(200);
	for (size_t i = 0; i < 45; i++)
		cout << char(205);
	cout << char(188);
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";

}
void Menu::MenuSearchAttributeStudent()
{
	int const mSpace = 75;
	int const _MAX3 = 3;
	int const fi1 = 5;
	string str1 = "SEARCH STUDENT BY";
	string str2 = "1. Search By Code Student";
	string str3 = "2. Search By Name Student";
	string str4 = "3. Search By Class";
	string str5 = "4. Search By Faculty";
	string str6 = "5. Search By Phone Number";
	string str7 = "6. Return";
	cout << "\n\n\n";
	int cnt = 3;
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(201);
	for (size_t i = 0; i < 45; i++)
		cout << char(205);
	cout << char(187);
	//=============================
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < fi1; i++)
		cout << " ";
	cout << str1;
	for (size_t i = 0; i < 45 - str1.length() - fi1; i++)
		cout << " ";
	cout << char(186);
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(204);
	for (size_t i = 0; i < 45; i++)
		cout << char(205);
	cout << char(185);
	//=============================
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < _MAX3; i++)
		cout << " ";
	cout << str2;
	for (size_t i = 0; i < 45 - str2.length() - _MAX3; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < _MAX3; i++)
		cout << " ";
	cout << str3;
	for (size_t i = 0; i < 45 - str3.length() - _MAX3; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < _MAX3; i++)
		cout << " ";
	cout << str4;
	for (size_t i = 0; i < 45 - str4.length() - _MAX3; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < _MAX3; i++)
		cout << " ";
	cout << str5;
	for (size_t i = 0; i < 45 - str5.length() - _MAX3; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < _MAX3; i++)
		cout << " ";
	cout << str6;
	for (size_t i = 0; i < 45 - str6.length() - _MAX3; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < _MAX3; i++)
		cout << " ";
	cout << str7;
	for (size_t i = 0; i < 45 - str7.length() - _MAX3; i++)
		cout << " ";
	cout << char(186);
	//=============================

	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(200);
	for (size_t i = 0; i < 45; i++)
		cout << char(205);
	cout << char(188);
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";

}
inline void Menu::MenuSearchAttributeBook()
{
	int const mSpace = 75;
	int const _MAX3 = 3;
	int const fi1 = 5;
	string str1 = "SEARCH BOOK BY";
	string str2 = "1. Search By Code Book";
	string str3 = "2. Search By Name Book";
	string str4 = "3. Search By Code Type";
	string str5 = "4. Search By Author";
	string str6 = "5. Search By Original Quantity";
	string str7 = "6. Search By Remain Quantity";

	string str8 = "7. Return";
	cout << "\n\n\n";
	int cnt = 3;
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(201);
	for (size_t i = 0; i < 45; i++)
		cout << char(205);
	cout << char(187);
	//=============================
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < fi1; i++)
		cout << " ";
	cout << str1;
	for (size_t i = 0; i < 45 - str1.length() - fi1; i++)
		cout << " ";
	cout << char(186);
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(204);
	for (size_t i = 0; i < 45; i++)
		cout << char(205);
	cout << char(185);
	//=============================
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < _MAX3; i++)
		cout << " ";
	cout << str2;
	for (size_t i = 0; i < 45 - str2.length() - _MAX3; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < _MAX3; i++)
		cout << " ";
	cout << str3;
	for (size_t i = 0; i < 45 - str3.length() - _MAX3; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < _MAX3; i++)
		cout << " ";
	cout << str4;
	for (size_t i = 0; i < 45 - str4.length() - _MAX3; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < _MAX3; i++)
		cout << " ";
	cout << str5;
	for (size_t i = 0; i < 45 - str5.length() - _MAX3; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < _MAX3; i++)
		cout << " ";
	cout << str6;
	for (size_t i = 0; i < 45 - str6.length() - _MAX3; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < _MAX3; i++)
		cout << " ";
	cout << str7;
	for (size_t i = 0; i < 45 - str7.length() - _MAX3; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < _MAX3; i++)
		cout << " ";
	cout << str8;
	for (size_t i = 0; i < 45 - str8.length() - _MAX3; i++)
		cout << " ";
	cout << char(186);
	//=============================

	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(200);
	for (size_t i = 0; i < 45; i++)
		cout << char(205);
	cout << char(188);
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
}
inline void Menu::MenuSearchAttributeTypeBook()
{
	int const mSpace = 75;
	int const _MAX3 = 3;
	int const fi1 = 5;
	string str1 = "SEARCH TYPE BOOK BY";
	string str2 = "1. Search By Code Type Book";
	string str3 = "2. Search By Name Type Book";
	string str4 = "3. Return";
	cout << "\n\n\n";
	int cnt = 3;
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(201);
	for (size_t i = 0; i < 45; i++)
		cout << char(205);
	cout << char(187);
	//=============================
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < fi1; i++)
		cout << " ";
	cout << str1;
	for (size_t i = 0; i < 45 - str1.length() - fi1; i++)
		cout << " ";
	cout << char(186);
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(204);
	for (size_t i = 0; i < 45; i++)
		cout << char(205);
	cout << char(185);
	//=============================
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < _MAX3; i++)
		cout << " ";
	cout << str2;
	for (size_t i = 0; i < 45 - str2.length() - _MAX3; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < _MAX3; i++)
		cout << " ";
	cout << str3;
	for (size_t i = 0; i < 45 - str3.length() - _MAX3; i++)
		cout << " ";
	cout << char(186);

	//=============================
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < _MAX3; i++)
		cout << " ";
	cout << str4;
	for (size_t i = 0; i < 45 - str4.length() - _MAX3; i++)
		cout << " ";
	cout << char(186);
	//=============================

	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(200);
	for (size_t i = 0; i < 45; i++)
		cout << char(205);
	cout << char(188);
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
}
inline void Menu::MenuSearchAttributeBR()
{
	int const mSpace = 75;
	int const _MAX3 = 3;
	int const fi1 = 5;
	string str1 = "SEARCH BORROWRETURN BY";
	string str2 = "1. Search By Code Student";
	string str3 = "2. Search By Code Book";
	string str4 = "3. Search By Date Borrow";
	string str5 = "4. Search By Date Return";
	string str6 = "5. Status";
	string str7 = "6. Return";


	cout << "\n\n\n";
	int cnt = 3;
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(201);
	for (size_t i = 0; i < 45; i++)
		cout << char(205);
	cout << char(187);
	//=============================
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < fi1; i++)
		cout << " ";
	cout << str1;
	for (size_t i = 0; i < 45 - str1.length() - fi1; i++)
		cout << " ";
	cout << char(186);
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(204);
	for (size_t i = 0; i < 45; i++)
		cout << char(205);
	cout << char(185);
	//=============================
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < _MAX3; i++)
		cout << " ";
	cout << str2;
	for (size_t i = 0; i < 45 - str2.length() - _MAX3; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < _MAX3; i++)
		cout << " ";
	cout << str3;
	for (size_t i = 0; i < 45 - str3.length() - _MAX3; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < _MAX3; i++)
		cout << " ";
	cout << str4;
	for (size_t i = 0; i < 45 - str4.length() - _MAX3; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < _MAX3; i++)
		cout << " ";
	cout << str5;
	for (size_t i = 0; i < 45 - str5.length() - _MAX3; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < _MAX3; i++)
		cout << " ";
	cout << str6;
	for (size_t i = 0; i < 45 - str6.length() - _MAX3; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < _MAX3; i++)
		cout << " ";
	cout << str7;
	for (size_t i = 0; i < 45 - str7.length() - _MAX3; i++)
		cout << " ";
	cout << char(186);
	//=============================

	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(200);
	for (size_t i = 0; i < 45; i++)
		cout << char(205);
	cout << char(188);
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
}
inline void Menu::ShowMenuSort()
{
	int const mSpace = 75;
	int const _MAX3 = 3;
	int const fi1 = 5;
	string str1 = "SORT";
	string str2 = "1. Sort Student";
	string str3 = "2. Sort Book";
	string str4 = "3. Sort Borrow Return";
	string str5 = "4. Sort Type Book";
	string str6 = "5. Return";
	cout << "\n\n\n";
	int cnt = 3;
	gotoxy(mSpace, cnt++);
	cout << " ";
	cout << char(201);
	for (size_t i = 0; i < 45; i++)
		cout << char(205);
	cout << char(187);
	//=============================
	cout << "\n";
	gotoxy(mSpace, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < fi1; i++)
		cout << " ";
	cout << str1;
	for (size_t i = 0; i < 45 - str1.length() - fi1; i++)
		cout << " ";
	cout << char(186);
	cout << "\n";
	gotoxy(mSpace, cnt++);
	cout << " ";
	cout << char(204);
	for (size_t i = 0; i < 45; i++)
		cout << char(205);
	cout << char(185);
	//=============================
	cout << "\n";
	gotoxy(mSpace, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < _MAX3; i++)
		cout << " ";
	cout << str2;
	for (size_t i = 0; i < 45 - str2.length() - _MAX3; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	gotoxy(mSpace, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < _MAX3; i++)
		cout << " ";
	cout << str3;
	for (size_t i = 0; i < 45 - str3.length() - _MAX3; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	gotoxy(mSpace, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < _MAX3; i++)
		cout << " ";
	cout << str4;
	for (size_t i = 0; i < 45 - str4.length() - _MAX3; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	gotoxy(mSpace, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < _MAX3; i++)
		cout << " ";
	cout << str5;
	for (size_t i = 0; i < 45 - str5.length() - _MAX3; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	gotoxy(mSpace, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < _MAX3; i++)
		cout << " ";
	cout << str6;
	for (size_t i = 0; i < 45 - str6.length() - _MAX3; i++)
		cout << " ";
	cout << char(186);
	//=============================

	//=============================

	cout << "\n";
	gotoxy(mSpace, cnt++);
	cout << " ";
	cout << char(200);
	for (size_t i = 0; i < 45; i++)
		cout << char(205);
	cout << char(188);
	cout << "\n";
	gotoxy(mSpace, cnt++);
	cout << " ";
}
inline void Menu::SortStudent(DoubleLinkList<Student>& LStudent, int atrribute, CurPos pS)
{
	switch (atrribute)
	{
	case 1://Code
	{
		LStudent.SortBy(AscCodeStudent);
		break;
	}
	case 2://Name
	{
		LStudent.SortBy(AscNameStudent);
		break;
	}
	case 3://Class
	{
		LStudent.SortBy(AscStudentClass);
		break;
	}
	case 4://Major
	{
		LStudent.SortBy(AscStudentFaculty);
		break;

	}
	case 5://Phone
	{
		LStudent.SortBy(AscStudentPhoneNumber);
		break;

	}
	case 6://return
	{
		system("cls");
		ShowMenuSort();

		return;
		break;
	}
	}
	Menu::ShowStudent(LStudent);
}
inline void Menu::ShowMenuSortBook()
{
	int const mSpace = 75;
	int const _MAX3 = 3;
	int const fi1 = 5;
	string str1 = "SORT BOOK BY";
	string str2 = "1. Sort By Code Book";
	string str3 = "2. Sort By Name Book";
	string str4 = "3. Sort By Code Type";
	string str5 = "4. Sort By Author";
	string str6 = "5. Sort By Origin Quantity";
	string str7 = "6. Sort By Remain Quantity";
	string str8 = "7. Return";
	cout << "\n\n\n";
	int cnt = 3;
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(201);
	for (size_t i = 0; i < 45; i++)
		cout << char(205);
	cout << char(187);
	//=============================
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < fi1; i++)
		cout << " ";
	cout << str1;
	for (size_t i = 0; i < 45 - str1.length() - fi1; i++)
		cout << " ";
	cout << char(186);
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(204);
	for (size_t i = 0; i < 45; i++)
		cout << char(205);
	cout << char(185);
	//=============================
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < _MAX3; i++)
		cout << " ";
	cout << str2;
	for (size_t i = 0; i < 45 - str2.length() - _MAX3; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < _MAX3; i++)
		cout << " ";
	cout << str3;
	for (size_t i = 0; i < 45 - str3.length() - _MAX3; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < _MAX3; i++)
		cout << " ";
	cout << str4;
	for (size_t i = 0; i < 45 - str4.length() - _MAX3; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < _MAX3; i++)
		cout << " ";
	cout << str5;
	for (size_t i = 0; i < 45 - str5.length() - _MAX3; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < _MAX3; i++)
		cout << " ";
	cout << str6;
	for (size_t i = 0; i < 45 - str6.length() - _MAX3; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < _MAX3; i++)
		cout << " ";
	cout << str7;
	for (size_t i = 0; i < 45 - str7.length() - _MAX3; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < _MAX3; i++)
		cout << " ";
	cout << str8;
	for (size_t i = 0; i < 45 - str8.length() - _MAX3; i++)
		cout << " ";
	cout << char(186);
	//=============================

	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(200);
	for (size_t i = 0; i < 45; i++)
		cout << char(205);
	cout << char(188);
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";

}
inline void Menu::SortBook(DoubleLinkList<Book>& LBook, int atrribute, CurPos pS)
{
	switch (atrribute)
	{
	case 1://Code Book
	{
		LBook.SortBy(AscBookCode);
		break;
	}
	case 2://Name Book
	{
		LBook.SortBy(AscBookName);
		break;
	}
	case 3://Code Type
	{
		LBook.SortBy(AscBookCodeType);
		break;
	}
	case 4://Author
	{
		LBook.SortBy(AscBookAuthor);
		break;

	}
	case 5://Origin Quantity
	{
		LBook.SortBy(AscBookOriginQuantity);
		break;

	}
	case 6://Remain Quantity
	{
		LBook.SortBy(AscBookRemainQuantity);
		break;

	}
	case 7://return
	{
		system("cls");
		ShowMenuSort();

		return;
		break;
	}
	}
	Menu::ShowBook(LBook);
}
inline void Menu::ShowMenuBR()
{
	int const mSpace = 75;
	int const _MAX3 = 3;
	int const fi1 = 5;
	string str1 = "SORT BORROW RETURN INFO BY";
	string str2 = "1. Sort By Code Student";
	string str3 = "2. Sort By Code Book";
	string str4 = "3. Sort By Date Borrow";
	string str5 = "4. Sort By Date Return";
	string str6 = "5. Sort By Status";
	string str7 = "6. Return";
	cout << "\n\n\n";
	int cnt = 3;
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(201);
	for (size_t i = 0; i < 45; i++)
		cout << char(205);
	cout << char(187);
	//=============================
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < fi1; i++)
		cout << " ";
	cout << str1;
	for (size_t i = 0; i < 45 - str1.length() - fi1; i++)
		cout << " ";
	cout << char(186);
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(204);
	for (size_t i = 0; i < 45; i++)
		cout << char(205);
	cout << char(185);
	//=============================
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < _MAX3; i++)
		cout << " ";
	cout << str2;
	for (size_t i = 0; i < 45 - str2.length() - _MAX3; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < _MAX3; i++)
		cout << " ";
	cout << str3;
	for (size_t i = 0; i < 45 - str3.length() - _MAX3; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < _MAX3; i++)
		cout << " ";
	cout << str4;
	for (size_t i = 0; i < 45 - str4.length() - _MAX3; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < _MAX3; i++)
		cout << " ";
	cout << str5;
	for (size_t i = 0; i < 45 - str5.length() - _MAX3; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < _MAX3; i++)
		cout << " ";
	cout << str6;
	for (size_t i = 0; i < 45 - str6.length() - _MAX3; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < _MAX3; i++)
		cout << " ";
	cout << str7;
	for (size_t i = 0; i < 45 - str7.length() - _MAX3; i++)
		cout << " ";
	cout << char(186);
	//=============================

	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(200);
	for (size_t i = 0; i < 45; i++)
		cout << char(205);
	cout << char(188);
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";

}
inline void Menu::SortBR(DoubleLinkList<BorrowReturn>& LBR, int atrribute, CurPos pS)
{
	switch (atrribute)
	{
	case 1://Code Student
	{
		LBR.SortBy(AscCodeStudent);
		break;
	}
	case 2://Code Book
	{
		LBR.SortBy(AscCodeBook);
		break;
	}
	case 3://Date Borrow
	{
		LBR.SortBy(AscDateBorrow);
		break;
	}
	case 4://Date Return
	{
		LBR.SortBy(AscDateReturn);
		break;

	}
	case 5://Status
	{
		LBR.SortBy(AscStatus);
		break;

	}
	case 6://return
	{
		system("cls");
		ShowMenuSort();
		return;
		break;
	}
	}
	Menu::ShowBorrowReturn(LBR);

}
inline void Menu::ShowMenuSortTypeBook()
{
	int const mSpace = 75;
	int const _MAX3 = 3;
	int const fi1 = 5;
	string str1 = "SORT TYPE BOOK BY";
	string str2 = "1. Sort By Code Type";
	string str3 = "2. Sort By Name Type";
	string str4 = "3. Return";
	cout << "\n\n\n";
	int cnt = 3;
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(201);
	for (size_t i = 0; i < 45; i++)
		cout << char(205);
	cout << char(187);
	//=============================
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < fi1; i++)
		cout << " ";
	cout << str1;
	for (size_t i = 0; i < 45 - str1.length() - fi1; i++)
		cout << " ";
	cout << char(186);
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(204);
	for (size_t i = 0; i < 45; i++)
		cout << char(205);
	cout << char(185);
	//=============================
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < _MAX3; i++)
		cout << " ";
	cout << str2;
	for (size_t i = 0; i < 45 - str2.length() - _MAX3; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < _MAX3; i++)
		cout << " ";
	cout << str3;
	for (size_t i = 0; i < 45 - str3.length() - _MAX3; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(186);
	for (size_t i = 0; i < _MAX3; i++)
		cout << " ";
	cout << str4;
	for (size_t i = 0; i < 45 - str4.length() - _MAX3; i++)
		cout << " ";
	cout << char(186);
	//=============================

	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
	cout << char(200);
	for (size_t i = 0; i < 45; i++)
		cout << char(205);
	cout << char(188);
	cout << "\n";
	gotoxy(mSpace + 50, cnt++);
	cout << " ";
}
inline void Menu::SortTypeBook(DoubleLinkList<TypeBook>& LBT, int atrribute, CurPos pS)
{
	switch (atrribute)
	{
	case 1://Code Book
	{
		LBT.SortBy(AscCodeType);
		break;
	}
	case 2://Name Type
	{
		LBT.SortBy(AscNameType);
		break;
	}

	case 3://return
	{
		system("cls");
		ShowMenuSort();

		return;
		break;
	}
	}
	Menu::ShowTypeBook(LBT);
}
void Menu::Start()
{
	cout << "\n\n\n";
	for (size_t i = 0; i < MAX; i++) cout << " ";
	cout << "$$\\       $$$$$$\\ $$$$$$$\\  $$$$$$$\\   $$$$$$\\  $$$$$$$\\ $$\\     $$\\       $$\\      $$\\  $$$$$$\\  $$\\   $$\\  $$$$$$\\   $$$$$$\\  $$$$$$$$\\ $$\\      $$\\ $$$$$$$$\\ $$\\   $$\\ $$$$$$$$\\ ";
	cout << "\n";
	for (size_t i = 0; i < MAX; i++) cout << " ";
	cout << "$$ |      \\_$$  _|$$  __$$\\ $$  __$$\\ $$  __$$\\ $$  __$$\\\\$$\\   $$  |      $$$\\    $$$ |$$  __$$\\ $$$\\  $$ |$$  __$$\\ $$  __$$\\ $$  _____|$$$\\    $$$ |$$  _____|$$$\\  $$ |\\__$$  __|";
	cout << "\n";
	for (size_t i = 0; i < MAX; i++) cout << " ";
	cout << "$$ |        $$ |  $$ |  $$ |$$ |  $$ |$$ /  $$ |$$ |  $$ |\\$$\\ $$  /       $$$$\\  $$$$ |$$ /  $$ |$$$$\\ $$ |$$ /  $$ |$$ /  \\__|$$ |      $$$$\\  $$$$ |$$ |      $$$$\\ $$ |   $$ |   ";
	cout << "\n";
	for (size_t i = 0; i < MAX; i++) cout << " ";
	cout << "$$ |        $$ |  $$$$$$$\\ |$$$$$$$  |$$$$$$$$ |$$$$$$$  | \\$$$$  /        $$\\$$\\$$ $$ |$$$$$$$$ |$$ $$\\$$ |$$$$$$$$ |$$ |$$$$\\ $$$$$\\    $$\\$$\\$$ $$ |$$$$$\\    $$ $$\\$$ |   $$ |   ";
	cout << "\n";
	for (size_t i = 0; i < MAX; i++) cout << " ";
	cout << "$$ |        $$ |  $$  __$$\\ $$  __$$< $$  __$$ |$$  __$$<   \\$$  /         $$ \\$$$  $$ |$$  __$$ |$$ \\$$$$ |$$  __$$ |$$ |\\_$$ |$$  __|   $$ \\$$$  $$ |$$  __|   $$ \\$$$$ |   $$ |   ";
	cout << "\n";
	for (size_t i = 0; i < MAX; i++) cout << " ";
	cout << "$$ |        $$ |  $$ |  $$ |$$ |  $$ |$$ |  $$ |$$ |  $$ |   $$ |          $$ |\\$  /$$ |$$ |  $$ |$$ |\\$$$ |$$ |  $$ |$$ |  $$ |$$ |      $$ |\\$  /$$ |$$ |      $$ |\\$$$ |   $$ |   ";
	cout << "\n";
	for (size_t i = 0; i < MAX; i++) cout << " ";
	cout << "$$$$$$$$\\ $$$$$$\\ $$$$$$$  |$$ |  $$ |$$ |  $$ |$$ |  $$ |   $$ |          $$ | \\_/ $$ |$$ |  $$ |$$ | \\$$ |$$ |  $$ |\\$$$$$$  |$$$$$$$$\\ $$ | \\_/ $$ |$$$$$$$$\\ $$ | \\$$ |   $$ |   ";
	cout << "\n";
	for (size_t i = 0; i < MAX; i++) cout << " ";
	cout << "\\________|\\______|\\_______/ \\__|  \\__|\\__|  \\__|\\__|  \\__|   \\__|          \\__|     \\__|\\__|  \\__|\\__|  \\__|\\__|  \\__| \\______/ \\________|\\__|     \\__|\\________|\\__|  \\__|   \\__|   ";
}
void Menu::Info()
{
	cout << "\n\n\n\n\n";
	for (size_t i = 0; i < MAX1; i++)
		cout << " ";
	cout << char(201);
	for (size_t i = 0; i < 60; i++)
		cout << char(205);
	cout << char(187);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAX1; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < 23; i++)
		cout << " ";
	cout << "INFORMATION TEAM";
	for (size_t i = 0; i < 21; i++)
		cout << " ";
	cout << char(186);
	cout << "\n";
	for (size_t i = 0; i < MAX1; i++)
		cout << " ";
	cout << char(204);
	for (size_t i = 0; i < 60; i++)
		cout << char(205);
	cout << char(185);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAX1; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < 18; i++)
		cout << " ";
	cout << "Topic: Library Management";
	for (size_t i = 0; i < 17; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAX1; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < 18; i++)
		cout << " ";
	cout << "Code Project: DA_18";
	for (size_t i = 0; i < 23; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAX1; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < 18; i++)
		cout << " ";
	cout << "Student 1: Huynh Van Quan";
	for (size_t i = 0; i < 17; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAX1; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < 18; i++)
		cout << " ";
	cout << "Code Student: 102180137";
	for (size_t i = 0; i < 19; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAX1; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < 18; i++)
		cout << " ";
	cout << "Student 2: Trinh Xuan Phuc";
	for (size_t i = 0; i < 16; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAX1; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < 18; i++)
		cout << " ";
	cout << "Code Student: 102180136";
	for (size_t i = 0; i < 19; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAX1; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < 18; i++)
		cout << " ";
	cout << "Student 3: Nguyen Quan Truong";
	for (size_t i = 0; i < 13; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAX1; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < 18; i++)
		cout << " ";
	cout << "Code Student: 102180147";
	for (size_t i = 0; i < 19; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAX1; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < 18; i++)
		cout << " ";
	cout << "Student 4: Nguyen Van Linh";
	for (size_t i = 0; i < 16; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAX1; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < 18; i++)
		cout << " ";
	cout << "Code Student: 102180128";
	for (size_t i = 0; i < 19; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAX1; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < 18; i++)
		cout << " ";
	cout << "Class: 18TCLC_DT1";
	for (size_t i = 0; i < 25; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAX1; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < 18; i++)
		cout << " ";
	cout << "Faculty: Information Technology";
	for (size_t i = 0; i < 11; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAX1; i++)
		cout << " ";
	cout << char(200);
	for (size_t i = 0; i < 60; i++)
		cout << char(205);
	cout << char(188);

}
void Menu::Main()
{
	cout << "\n\n\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(201);
	for (size_t i = 0; i < 76; i++)
		cout << char(205);
	cout << char(187);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < 28; i++)
		cout << " ";
	cout << "Menu LIBRARY MANAGEMENT";
	for (size_t i = 0; i < 25; i++)
		cout << " ";
	cout << char(186);
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(204);
	for (size_t i = 0; i < 76; i++)
		cout << char(205);
	cout << char(185);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < MAX3; i++)
		cout << " ";
	cout << "1. Show information   (Student, Book, TypeBook, BorrowReturn)";
	for (size_t i = 0; i < 8; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < MAX3; i++)
		cout << " ";
	cout << "2. Search information (Student, Book, TypeBook, BorrowReturn)";
	for (size_t i = 0; i < 8; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < MAX3; i++)
		cout << " ";
	cout << "3. Insert information (Student, Book, TypeBook, BorrowReturn)";
	for (size_t i = 0; i < 8; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < MAX3; i++)
		cout << " ";
	cout << "4. Delete information (Student, Book, TypeBook, BorrowReturn)";
	for (size_t i = 0; i < 8; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < MAX3; i++)
		cout << " ";
	cout << "5. Update information (Student, Book, TypeBook, BorrowReturn)";
	for (size_t i = 0; i < 8; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < MAX3; i++)
		cout << " ";
	cout << "6. Sort information   (Student, Book, TypeBook, BorrowReturn)";
	for (size_t i = 0; i < 8; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < MAX3; i++)
		cout << " ";
	cout << "7. Borrow book";
	for (size_t i = 0; i < 55; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < MAX3; i++)
		cout << " ";
	cout << "8. Return book";
	for (size_t i = 0; i < 55; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < MAX3; i++)
		cout << " ";
	cout << "9. Clear screen";
	for (size_t i = 0; i < 54; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < MAX3; i++)
		cout << " ";
	cout << "10. Exit";
	for (size_t i = 0; i < 61; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(200);
	for (size_t i = 0; i < 76; i++)
		cout << char(205);
	cout << char(188);

	cout << "\n";
	for (size_t i = 0; i < MAX1 + 5; i++)
		cout << " ";
	cout << "Please enter choices above, type number to select and <enter>";
}
void Menu::ShowStudent(DoubleLinkList<Student>& LStudent)
{
	Node<Student>* tmp = LStudent.getpHead()->getpNext();
	if (tmp == NULL)
	{
		cout << "\nDon't have data!";
	}
	else
	{
		cout << "\n";
		for (size_t i = 0; i < SpaceStu + 53; i++) cout << " ";
		cout << "  ___   _ _____ _     ___ _____ _   _ ___  ___ _  _ _____";
		cout << "\n";
		for (size_t i = 0; i < SpaceStu + 53; i++) cout << " ";
		cout << " |   \\ /_\\_   _/_\\   / __|_   _| | | |   \\| __| \\| |_   _|";
		cout << "\n";
		for (size_t i = 0; i < SpaceStu + 53; i++) cout << " ";
		cout << " | |) / _ \\| |/ _ \\  \\__ \\ | | | |_| | |) | _|| .` | | |  ";
		cout << "\n";
		for (size_t i = 0; i < SpaceStu + 53; i++) cout << " ";
		cout << " |___/_/ \\_\\_/_/ \\_\\ |___/ |_|  \\___/|___/|___|_|\\_| |_|  ";
		string s0, s1, s2, s3, s4, s5;
		char s[10];
		int Count = 0;
		cout << "\n\n";
		for (size_t i = 0; i < SpaceStu; i++) cout << " ";
		cout << char(218);
		for (size_t i = 0; i < 10; i++)
			cout << char(196);
		cout << char(194);
		for (size_t i = 0; i < 22; i++)
			cout << char(196);
		cout << char(194);
		for (size_t i = 0; i < 42; i++)
			cout << char(196);
		cout << char(194);
		for (size_t i = 0; i < 37; i++)
			cout << char(196);
		cout << char(194);
		for (size_t i = 0; i < 21; i++)
			cout << char(196);
		cout << char(194);
		for (size_t i = 0; i < 26; i++)
			cout << char(196);
		cout << char(191);

		//------------------------------------
		cout << "\n";
		for (size_t i = 0; i < SpaceStu; i++) cout << " ";
		cout << char(179);
		s0 = "  Order   ";
		cout << s0;
		cout << char(179);
		s1 = "     Code Student     ";
		cout << s1;
		cout << char(179);
		s2 = "               Name Student               ";
		cout << s2;
		cout << char(179);
		s3 = "               Faculty               ";
		cout << s3;
		cout << char(179);
		s4 = "        Class        ";
		cout << s4;
		cout << char(179);
		s5 = "       Phone Number       ";
		cout << s5;
		cout << char(179);

		while (tmp != NULL)
		{
			cout << "\n";

			for (size_t i = 0; i < SpaceStu; i++) cout << " ";
			cout << char(195);
			for (size_t i = 0; i < 10; i++)
				cout << char(196);
			cout << char(197);
			for (size_t i = 0; i < 22; i++)
				cout << char(196);
			cout << char(197);
			for (size_t i = 0; i < 42; i++)
				cout << char(196);
			cout << char(197);
			for (size_t i = 0; i < 37; i++)
				cout << char(196);
			cout << char(197);
			for (size_t i = 0; i < 21; i++)
				cout << char(196);
			cout << char(197);
			for (size_t i = 0; i < 26; i++)
				cout << char(196);
			cout << char(180);
			//----
			++Count;
			_itoa_s(Count, s, 10);
			cout << "\n";

			for (size_t i = 0; i < SpaceStu; i++) cout << " ";
			cout << char(179);
			cout << s;
			for (size_t i = 0; i < s0.length() - strlen(s); i++)
				cout << " ";
			cout << char(179);

			cout << tmp->getData().GetCodeStudent();
			for (size_t i = 0; i < s1.length() - tmp->getData().GetCodeStudent().length(); i++)
				cout << " ";
			cout << char(179);
			cout << tmp->getData().GetNameStudent();
			for (size_t i = 0; i < (s2.length() - tmp->getData().GetNameStudent().length()); i++)
				cout << " ";
			cout << char(179);
			cout << tmp->getData().GetFaculty();
			for (size_t i = 0; i < s3.length() - tmp->getData().GetFaculty().length(); i++)
				cout << " ";
			cout << char(179);

			cout << tmp->getData().GetClass();
			for (size_t i = 0; i < s4.length() - tmp->getData().GetClass().length(); i++)
				cout << " ";
			cout << char(179);
			cout << tmp->getData().GetPhoneNumber();
			for (size_t i = 0; i < s5.length() - tmp->getData().GetPhoneNumber().length(); i++)
				cout << " ";
			cout << char(179);
			tmp = tmp->getpNext();
		}
		// In khung duoi
		cout << "\n";
		for (size_t i = 0; i < SpaceStu; i++) cout << " ";
		cout << char(192);
		for (size_t i = 0; i < 10; i++)
			cout << char(196);
		cout << char(193);
		for (size_t i = 0; i < 22; i++)
			cout << char(196);
		cout << char(193);
		for (size_t i = 0; i < 42; i++)
			cout << char(196);
		cout << char(193);
		for (size_t i = 0; i < 37; i++)
			cout << char(196);
		cout << char(193);
		for (size_t i = 0; i < 21; i++)
			cout << char(196);
		cout << char(193);
		for (size_t i = 0; i < 26; i++)
			cout << char(196);
		cout << char(217);
	}
}
void Menu::ShowBook(DoubleLinkList<Book>& LBook)
{
	Node<Book>* tmp = LBook.getpHead()->getpNext();
	if (tmp == NULL)
	{
		cout << "\nDon't have data!";
	}
	else
	{
		cout << "\n";
		for (size_t i = 0; i < SpaceBoo + 58; i++) cout << " ";
		cout << "  ___   _ _____ _     ___  ___   ___  _  __";
		cout << "\n";
		for (size_t i = 0; i < SpaceBoo + 58; i++) cout << " ";
		cout << " |   \\ /_\\_   _/_\\   | _ )/ _ \\ / _ \\| |/ /";
		cout << "\n";
		for (size_t i = 0; i < SpaceBoo + 58; i++) cout << " ";
		cout << " | |) / _ \\| |/ _ \\  | _ \\ (_) | (_) | ' < ";
		cout << "\n";
		for (size_t i = 0; i < SpaceBoo + 58; i++) cout << " ";
		cout << " |___/_/ \\_\\_/_/ \\_\\ |___/\\___/ \\___/|_|\\_\\";

		string s0, s1, s2, s3, s4, s5, s6;
		char s[10], Trans1[21], Trans2[21];
		int Count = 0;

		cout << "\n\n";
		for (size_t i = 0; i < SpaceBoo; i++) cout << " ";
		cout << char(218);
		for (size_t i = 0; i < 10; i++)
			cout << char(196);
		cout << char(194);
		for (size_t i = 0; i < 13; i++)
			cout << char(196);
		cout << char(194);
		for (size_t i = 0; i < 43; i++)
			cout << char(196);
		cout << char(194);
		for (size_t i = 0; i < 17; i++)
			cout << char(196);
		cout << char(194);
		for (size_t i = 0; i < 32; i++)
			cout << char(196);
		cout << char(194);
		for (size_t i = 0; i < 21; i++)
			cout << char(196);
		cout << char(194);
		for (size_t i = 0; i < 23; i++)
			cout << char(196);
		cout << char(191);


		cout << "\n";
		for (size_t i = 0; i < SpaceBoo; i++) cout << " ";
		cout << char(179);
		s0 = "  Order   ";
		cout << s0;
		cout << char(179);
		s1 = "  Code Book  ";
		cout << s1;
		cout << char(179);
		s2 = "                 Name Book                 ";
		cout << s2;
		cout << char(179);
		s3 = "    Code Type    ";
		cout << s3;
		cout << char(179);
		s4 = "             Author             ";
		cout << s4;
		cout << char(179);
		s5 = "   Origin Quantity   ";
		cout << s5;
		cout << char(179);
		s6 = "    Remain Quantity    ";
		cout << s6;
		cout << char(179);

		while (tmp != NULL)
		{
			cout << "\n";
			for (size_t i = 0; i < SpaceBoo; i++) cout << " ";
			cout << char(195);
			for (size_t i = 0; i < 10; i++)
				cout << char(196);
			cout << char(197);
			for (size_t i = 0; i < 13; i++)
				cout << char(196);
			cout << char(197);
			for (size_t i = 0; i < 43; i++)
				cout << char(196);
			cout << char(197);
			for (size_t i = 0; i < 17; i++)
				cout << char(196);
			cout << char(197);
			for (size_t i = 0; i < 32; i++)
				cout << char(196);
			cout << char(197);
			for (size_t i = 0; i < 21; i++)
				cout << char(196);
			cout << char(197);
			for (size_t i = 0; i < 23; i++)
				cout << char(196);
			cout << char(180);
			//----
			cout << "\n";
			++Count;
			_itoa_s(Count, s, 10);


			for (size_t i = 0; i < SpaceBoo; i++) cout << " ";
			cout << char(179);
			cout << s;
			for (size_t i = 0; i < s0.length() - strlen(s); i++)
				cout << " ";
			cout << char(179);
			cout << tmp->getData().GetCodeBook();
			for (size_t i = 0; i < s1.length() - tmp->getData().GetCodeBook().length(); i++)
				cout << " ";
			cout << char(179);
			cout << tmp->getData().GetNameBook();
			for (size_t i = 0; i < (s2.length() - tmp->getData().GetNameBook().length()); i++)
				cout << " ";
			cout << char(179);
			cout << tmp->getData().GetCodeType();
			for (size_t i = 0; i < s3.length() - tmp->getData().GetCodeType().length(); i++)
				cout << " ";
			cout << char(179);

			cout << tmp->getData().GetAuthor();
			for (size_t i = 0; i < s4.length() - tmp->getData().GetAuthor().length(); i++)
				cout << " ";
			cout << char(179);

			_itoa_s(tmp->getData().GetOriQua(), Trans1, 10);
			cout << Trans1;
			for (size_t i = 0; i < s5.length() - strlen(Trans1); i++)
				cout << " ";
			cout << char(179);
			_itoa_s(tmp->getData().GetOriQua(), Trans2, 10);
			cout << Trans2;
			for (size_t i = 0; i < s6.length() - strlen(Trans2); i++)
				cout << " ";
			cout << char(179);
			tmp = tmp->getpNext();
		}
		// In khung duoi
		cout << "\n";
		for (size_t i = 0; i < SpaceBoo; i++) cout << " ";
		cout << char(192);
		for (size_t i = 0; i < 10; i++)
			cout << char(196);
		cout << char(193);
		for (size_t i = 0; i < 13; i++)
			cout << char(196);
		cout << char(193);
		for (size_t i = 0; i < 43; i++)
			cout << char(196);
		cout << char(193);
		for (size_t i = 0; i < 17; i++)
			cout << char(196);
		cout << char(193);
		for (size_t i = 0; i < 32; i++)
			cout << char(196);
		cout << char(193);
		for (size_t i = 0; i < 21; i++)
			cout << char(196);
		cout << char(193);
		for (size_t i = 0; i < 23; i++)
			cout << char(196);
		cout << char(217);
	}
}
void Menu::ShowBorrowReturn(DoubleLinkList<BorrowReturn>& LBR)
{

	//DB.Select_GetBorrowReturnList(LBR);
	Node<BorrowReturn>* tmp = LBR.getpHead()->getpNext();
	if (tmp == NULL)
	{
		cout << "\nDon't have data!";
	}
	else
	{
		cout << "\n";
		for (size_t i = 0; i < MAX4 + 21; i++) cout << " ";
		cout << "  ___   _ _____ _     ___  ___  ___ ___  _____      _____ ___ _____ _   _ ___ _  _ ";
		cout << "\n";
		for (size_t i = 0; i < MAX4 + 21; i++) cout << " ";
		cout << " |   \\ /_\\_   _/_\\   | _ )/ _ \\| _ \\ _ \\/ _ \\ \\    / / _ \\ __|_   _| | | | _ \\ \\| |";
		cout << "\n";
		for (size_t i = 0; i < MAX4 + 21; i++) cout << " ";
		cout << " | |) / _ \\| |/ _ \\  | _ \\ (_) |   /   / (_) \\ \\/\\/ /|   / _|  | | | |_| |   / .` |";
		cout << "\n";
		for (size_t i = 0; i < MAX4 + 21; i++) cout << " ";
		cout << " |___/_/ \\_\\_/_/ \\_\\ |___/\\___/|_|_\\_|_\\\\___/ \\_/\\_/ |_|_\\___| |_|  \\___/|_|_\\_|\\_|";
		string s1, s2, s3, s4, s5, s6;
		cout << "\n\n";
		for (size_t i = 0; i < MAX4; i++) cout << " ";
		cout << char(218);

		//150
		for (size_t i = 0; i < 13; i++)
			cout << char(196);
		cout << char(194);
		for (size_t i = 0; i < 24; i++)
			cout << char(196);
		cout << char(194);
		for (size_t i = 0; i < 21; i++)
			cout << char(196);
		cout << char(194);
		for (size_t i = 0; i < 21; i++)
			cout << char(196);
		cout << char(194);
		for (size_t i = 0; i < 21; i++)
			cout << char(196);
		cout << char(194);
		for (size_t i = 0; i < 21; i++)
			cout << char(196);
		cout << char(191);

		//------------------------------------
		cout << "\n";
		for (size_t i = 0; i < MAX4; i++) cout << " ";
		cout << char(179);
		s1 = "    Order    ";
		cout << s1;
		cout << char(179);
		s2 = "      Code Student      "; // Do dai 25 => có 24 _
		cout << s2;
		cout << char(179);
		s3 = "      Code Book      ";
		cout << s3;
		cout << char(179);
		s4 = "     Date Borrow     ";
		cout << s4;
		cout << char(179);
		s5 = "     Date Return     ";
		cout << s5;
		cout << char(179);
		s6 = "       Status        ";
		cout << s6;
		cout << char(179);
		while (tmp != NULL)
		{
			cout << "\n";
			for (size_t i = 0; i < MAX4; i++) cout << " ";
			cout << char(195);
			for (size_t i = 0; i < 13; i++)
				cout << char(196);
			cout << char(197);
			for (size_t i = 0; i < 24; i++)
				cout << char(196);
			cout << char(197);
			for (size_t i = 0; i < 21; i++)
				cout << char(196);
			cout << char(197);
			for (size_t i = 0; i < 21; i++)
				cout << char(196);
			cout << char(197);
			for (size_t i = 0; i < 21; i++)
				cout << char(196);
			cout << char(197);
			for (size_t i = 0; i < 21; i++)
				cout << char(196);
			cout << char(180);


			cout << "\n";
			for (size_t i = 0; i < 40; i++) cout << " ";
			cout << char(179);

			cout << tmp->getData().GetOrder();
			for (size_t i = 0; i < s1.length() - tmp->getData().GetOrder().length(); i++)
				cout << " ";
			cout << char(179);
			cout << tmp->getData().GetCodeStudent();
			for (size_t i = 0; i < (s2.length() - tmp->getData().GetCodeStudent().length()); i++)
				cout << " ";
			cout << char(179);
			cout << tmp->getData().GetCodeBook();
			for (size_t i = 0; i < s3.length() - tmp->getData().GetCodeBook().length(); i++)
				cout << " ";
			cout << char(179);
			if (tmp->getData().GetDateBorrow().GetDay() < 10)
			{
				cout << "0" << tmp->getData().GetDateBorrow().GetDay() << "/";
			}
			else
			{
				cout << tmp->getData().GetDateBorrow().GetDay() << "/";
			}
			if (tmp->getData().GetDateBorrow().GetMonth() < 10)
			{
				cout << "0" << tmp->getData().GetDateBorrow().GetMonth() << "/";
			}
			else
			{
				cout << tmp->getData().GetDateBorrow().GetMonth() << "/";
			}
			cout << tmp->getData().GetDateBorrow().GetYear();
			for (size_t i = 0; i < s4.length() - 10; i++)
				cout << " ";
			cout << char(179);
			if (tmp->getData().GetDateReturn().GetDay() < 10)
			{
				cout << "0" << tmp->getData().GetDateReturn().GetDay() << "/";
			}
			else
			{
				cout << tmp->getData().GetDateReturn().GetDay() << "/";
			}
			if (tmp->getData().GetDateReturn().GetMonth() < 10)
			{
				cout << "0" << tmp->getData().GetDateReturn().GetMonth() << "/";
			}
			else
			{
				cout << tmp->getData().GetDateReturn().GetMonth() << "/";
			}
			if (tmp->getData().GetDateReturn().GetYear() == 0)
			{
				cout << "0000";
			}
			else
			{
				cout << tmp->getData().GetDateReturn().GetYear();
			}
			for (size_t i = 0; i < s5.length() - 10; i++)
				cout << " ";
			cout << char(179);
			cout << tmp->getData().GetStatus();
			for (size_t i = 0; i < s5.length() - tmp->getData().GetStatus().length(); i++)
				cout << " ";
			cout << char(179);
			tmp = tmp->getpNext();
		}
		// In khung duoi
		cout << "\n";
		for (size_t i = 0; i < MAX4; i++) cout << " ";
		cout << char(192);
		for (size_t i = 0; i < 13; i++)
			cout << char(196);
		cout << char(193);
		for (size_t i = 0; i < 24; i++)
			cout << char(196);
		cout << char(193);
		for (size_t i = 0; i < 21; i++)
			cout << char(196);
		cout << char(193);
		for (size_t i = 0; i < 21; i++)
			cout << char(196);
		cout << char(193);
		for (size_t i = 0; i < 21; i++)
			cout << char(196);
		cout << char(193);
		for (size_t i = 0; i < 21; i++)
			cout << char(196);
		cout << char(217);
	}
}
void Menu::ShowTypeBook(DoubleLinkList<TypeBook>& LTypeBook)
{

	Node<TypeBook>* tmp = LTypeBook.getpHead()->getpNext();
	if (tmp == NULL)
	{
		cout << "\nDon't have data!";
	}
	else
	{
		cout << "\n";
		for (size_t i = 0; i < SpaceTyp - 3; i++) cout << " ";
		cout << "  ___   _ _____ _     _______   _____ ___ ___  ___   ___  _  __";
		cout << "\n";
		for (size_t i = 0; i < SpaceTyp - 3; i++) cout << " ";
		cout << " |   \\ /_\\_   _/_\\   |_   _\\ \\ / / _ \\ __| _ )/ _ \\ / _ \\| |/ /";
		cout << "\n";
		for (size_t i = 0; i < SpaceTyp - 3; i++) cout << " ";
		cout << " | |) / _ \\| |/ _ \\    | |  \\ V /|  _/ _|| _ \\ (_) | (_) | ' < ";
		cout << "\n";
		for (size_t i = 0; i < SpaceTyp - 3; i++) cout << " ";
		cout << " |___/_/ \\_\\_/_/ \\_\\   |_|   |_| |_| |___|___/\\___/ \\___/|_|\\_\\";
		string s0, s1, s2;
		char s[10];
		int Count = 0;
		cout << "\n\n";
		for (size_t i = 0; i < SpaceTyp; i++) cout << " ";
		cout << char(218);
		for (size_t i = 0; i < 10; i++)
			cout << char(196);
		cout << char(194);
		for (size_t i = 0; i < 15; i++)
			cout << char(196);
		cout << char(194);
		for (size_t i = 0; i < 32; i++)
			cout << char(196);
		cout << char(191);

		cout << "\n";
		for (size_t i = 0; i < SpaceTyp; i++) cout << " ";
		cout << char(179);
		s0 = "  Order   ";
		cout << s0;
		cout << char(179);
		s1 = "   Code Type   ";
		cout << s1;
		cout << char(179);
		s2 = "           Name Type            ";
		cout << s2;
		cout << char(179);

		while (tmp != NULL)
		{
			cout << "\n";
			for (size_t i = 0; i < SpaceTyp; i++) cout << " ";
			cout << char(195);
			for (size_t i = 0; i < 10; i++)
				cout << char(196);
			cout << char(197);
			for (size_t i = 0; i < 15; i++)
				cout << char(196);
			cout << char(197);
			for (size_t i = 0; i < 32; i++)
				cout << char(196);
			cout << char(180);

			++Count;
			_itoa_s(Count, s, 10);
			cout << "\n";

			for (size_t i = 0; i < SpaceTyp; i++) cout << " ";
			cout << char(179);
			cout << s;
			for (size_t i = 0; i < s0.length() - strlen(s); i++)
				cout << " ";
			cout << char(179);
			cout << tmp->getData().GetCodeType();
			for (size_t i = 0; i < s1.length() - tmp->getData().GetCodeType().length(); i++)
				cout << " ";
			cout << char(179);
			cout << tmp->getData().GetNameType();
			for (size_t i = 0; i < (s2.length() - tmp->getData().GetNameType().length()); i++)
				cout << " ";
			cout << char(179);
			tmp = tmp->getpNext();
		}
		// In khung duoi
		cout << "\n";
		for (size_t i = 0; i < SpaceTyp; i++) cout << " ";
		cout << char(192);
		for (size_t i = 0; i < 10; i++)
			cout << char(196);
		cout << char(193);
		for (size_t i = 0; i < 15; i++)
			cout << char(196);
		cout << char(193);
		for (size_t i = 0; i < 32; i++)
			cout << char(196);
		cout << char(217);
	}
}
void Menu::MenuShow()
{
	cout << "\n\n\n";
	for (size_t i = 0; i < MeShow; i++)
		cout << " ";
	cout << char(201);
	for (size_t i = 0; i < 45; i++)
		cout << char(205);
	cout << char(187);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MeShow; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < 12; i++)
		cout << " ";
	cout << "MENU SHOW INFORMATION";
	for (size_t i = 0; i < 12; i++)
		cout << " ";
	cout << char(186);
	cout << "\n";
	for (size_t i = 0; i < MeShow; i++)
		cout << " ";
	cout << char(204);
	for (size_t i = 0; i < 45; i++)
		cout << char(205);
	cout << char(185);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MeShow; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < MAX3; i++)
		cout << " ";
	cout << "1. Show information student";
	for (size_t i = 0; i < 11; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MeShow; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < MAX3; i++)
		cout << " ";
	cout << "2. Show information book";
	for (size_t i = 0; i < 14; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MeShow; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < MAX3; i++)
		cout << " ";
	cout << "3. Show information type book";
	for (size_t i = 0; i < 9; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MeShow; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < MAX3; i++)
		cout << " ";
	cout << "4. Show information borrow return";
	for (size_t i = 0; i < 5; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MeShow; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < MAX3; i++)
		cout << " ";
	cout << "5. Clear screen";
	for (size_t i = 0; i < 23; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MeShow; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < MAX3; i++)
		cout << " ";
	cout << "6. Return";
	for (size_t i = 0; i < 29; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MeShow; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < MAX3; i++)
		cout << " ";
	cout << "7. Exit";
	for (size_t i = 0; i < 31; i++)
		cout << " ";
	cout << char(186);
	//=============================

	cout << "\n";
	for (size_t i = 0; i < MeShow; i++)
		cout << " ";
	cout << char(200);
	for (size_t i = 0; i < 45; i++)
		cout << char(205);
	cout << char(188);
	cout << "\n";
	for (size_t i = 0; i < MeShow; i++)
		cout << " ";
	cout << "Please enter choices above, type number to select and <enter>";
}
void Menu::MenuSearch()
{
	cout << "\n\n\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(201);
	for (size_t i = 0; i < 45; i++)
		cout << char(205);
	cout << char(187);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < 12; i++)
		cout << " ";
	cout << "MENU SEARCH INFORMATION";
	for (size_t i = 0; i < 10; i++)
		cout << " ";
	cout << char(186);
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(204);
	for (size_t i = 0; i < 45; i++)
		cout << char(205);
	cout << char(185);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < MAX3; i++)
		cout << " ";
	cout << "1. Search information student";
	for (size_t i = 0; i < 9; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < MAX3; i++)
		cout << " ";
	cout << "2. Search information book";
	for (size_t i = 0; i < 12; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < MAX3; i++)
		cout << " ";
	cout << "3. Search information type book";
	for (size_t i = 0; i < 7; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < MAX3; i++)
		cout << " ";
	cout << "4. Search information borrow return";
	for (size_t i = 0; i < 3; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < MAX3; i++)
		cout << " ";
	cout << "5. Clear screen";
	for (size_t i = 0; i < 23; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < MAX3; i++)
		cout << " ";
	cout << "6. Return";
	for (size_t i = 0; i < 29; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < MAX3; i++)
		cout << " ";
	cout << "7. Exit";
	for (size_t i = 0; i < 31; i++)
		cout << " ";
	cout << char(186);
	//=============================

	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(200);
	for (size_t i = 0; i < 45; i++)
		cout << char(205);
	cout << char(188);
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";

	cout << "Please enter choices above, type number to select and <enter>";
}
void Menu::MenuInsert()
{
	cout << "\n\n\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(201);
	for (size_t i = 0; i < 45; i++)
		cout << char(205);
	cout << char(187);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < 12; i++)
		cout << " ";
	cout << "MENU INSERT INFORMATION";
	for (size_t i = 0; i < 10; i++)
		cout << " ";
	cout << char(186);
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(204);
	for (size_t i = 0; i < 45; i++)
		cout << char(205);
	cout << char(185);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < MAX3; i++)
		cout << " ";
	cout << "1. Insert information student";
	for (size_t i = 0; i < 9; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < MAX3; i++)
		cout << " ";
	cout << "2. Insert information book";
	for (size_t i = 0; i < 12; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < MAX3; i++)
		cout << " ";
	cout << "3. Insert information type book";
	for (size_t i = 0; i < 7; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < MAX3; i++)
		cout << " ";
	cout << "4. Insert information borrow return";
	for (size_t i = 0; i < 3; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < MAX3; i++)
		cout << " ";
	cout << "5. Clear screen";
	for (size_t i = 0; i < 23; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < MAX3; i++)
		cout << " ";
	cout << "6. Return";
	for (size_t i = 0; i < 29; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < MAX3; i++)
		cout << " ";
	cout << "7. Exit";
	for (size_t i = 0; i < 31; i++)
		cout << " ";
	cout << char(186);
	//=============================

	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(200);
	for (size_t i = 0; i < 45; i++)
		cout << char(205);
	cout << char(188);

	cout << "\n";
	for (size_t i = 0; i < MAX1 + 2; i++)
		cout << " ";
}
void Menu::MenuDelete()
{
	cout << "\n\n\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(201);
	for (size_t i = 0; i < 45; i++)
		cout << char(205);
	cout << char(187);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < 12; i++)
		cout << " ";
	cout << "MENU DELETE INFORMATION";
	for (size_t i = 0; i < 10; i++)
		cout << " ";
	cout << char(186);
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(204);
	for (size_t i = 0; i < 45; i++)
		cout << char(205);
	cout << char(185);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < MAX3; i++)
		cout << " ";
	cout << "1. Delete information student";
	for (size_t i = 0; i < 9; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < MAX3; i++)
		cout << " ";
	cout << "2. Delete information book";
	for (size_t i = 0; i < 12; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < MAX3; i++)
		cout << " ";
	cout << "3. Delete information type book";
	for (size_t i = 0; i < 7; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < MAX3; i++)
		cout << " ";
	cout << "4. Delete information borrow return";
	for (size_t i = 0; i < 3; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < MAX3; i++)
		cout << " ";
	cout << "5. Clear screen";
	for (size_t i = 0; i < 23; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < MAX3; i++)
		cout << " ";
	cout << "6. Return";
	for (size_t i = 0; i < 29; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < MAX3; i++)
		cout << " ";
	cout << "7. Exit";
	for (size_t i = 0; i < 31; i++)
		cout << " ";
	cout << char(186);
	//=============================

	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(200);
	for (size_t i = 0; i < 45; i++)
		cout << char(205);
	cout << char(188);

	cout << "\n";
	for (size_t i = 0; i < MAX1 + 2; i++)
		cout << " ";
}
void Menu::MenuUpdate()
{
	cout << "\n\n\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(201);
	for (size_t i = 0; i < 45; i++)
		cout << char(205);
	cout << char(187);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < 12; i++)
		cout << " ";
	cout << "MENU UPDATE INFORMATION";
	for (size_t i = 0; i < 10; i++)
		cout << " ";
	cout << char(186);
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(204);
	for (size_t i = 0; i < 45; i++)
		cout << char(205);
	cout << char(185);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < MAX3; i++)
		cout << " ";
	cout << "1. Update information student";
	for (size_t i = 0; i < 9; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < MAX3; i++)
		cout << " ";
	cout << "2. Update information book";
	for (size_t i = 0; i < 12; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < MAX3; i++)
		cout << " ";
	cout << "3. Update information type book";
	for (size_t i = 0; i < 7; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < MAX3; i++)
		cout << " ";
	cout << "4. Update information borrow return";
	for (size_t i = 0; i < 3; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < MAX3; i++)
		cout << " ";
	cout << "5. Clear screen";
	for (size_t i = 0; i < 23; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < MAX3; i++)
		cout << " ";
	cout << "6. Return";
	for (size_t i = 0; i < 29; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < MAX3; i++)
		cout << " ";
	cout << "7. Exit";
	for (size_t i = 0; i < 31; i++)
		cout << " ";
	cout << char(186);
	//=============================

	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(200);
	for (size_t i = 0; i < 45; i++)
		cout << char(205);
	cout << char(188);

	cout << "\n";
	for (size_t i = 0; i < MAX1 + 2; i++)
		cout << " ";
}
void Menu::MenuSort()
{
	cout << "\n\n\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(201);
	for (size_t i = 0; i < 45; i++)
		cout << char(205);
	cout << char(187);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < 12; i++)
		cout << " ";
	cout << "MENU SORT INFORMATION";
	for (size_t i = 0; i < 12; i++)
		cout << " ";
	cout << char(186);
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(204);
	for (size_t i = 0; i < 45; i++)
		cout << char(205);
	cout << char(185);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < MAX3; i++)
		cout << " ";
	cout << "1. Sort information student";
	for (size_t i = 0; i < 11; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < MAX3; i++)
		cout << " ";
	cout << "2. Sort information book";
	for (size_t i = 0; i < 14; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < MAX3; i++)
		cout << " ";
	cout << "3. Sort information type book";
	for (size_t i = 0; i < 9; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < MAX3; i++)
		cout << " ";
	cout << "4. Sort information borrow return";
	for (size_t i = 0; i < 5; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < MAX3; i++)
		cout << " ";
	cout << "5. Clear screen";
	for (size_t i = 0; i < 23; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < MAX3; i++)
		cout << " ";
	cout << "6. Return";
	for (size_t i = 0; i < 29; i++)
		cout << " ";
	cout << char(186);
	//=============================
	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(186);
	for (size_t i = 0; i < MAX3; i++)
		cout << " ";
	cout << "7. Exit";
	for (size_t i = 0; i < 31; i++)
		cout << " ";
	cout << char(186);
	//=============================

	cout << "\n";
	for (size_t i = 0; i < MAXMAIN; i++)
		cout << " ";
	cout << char(200);
	for (size_t i = 0; i < 45; i++)
		cout << char(205);
	cout << char(188);

	cout << "\n";
	for (size_t i = 0; i < MAX1 + 2; i++)
		cout << " ";
}
void Menu::MenuProject(DoubleLinkList<Student>& LStudent, DoubleLinkList<Book>& LBook, DoubleLinkList<TypeBook>& LTB, DoubleLinkList<BorrowReturn>& LBR, DATABASE& DB)
{
	// Declare
	int Choice;

	// Interface Start
	Menu::Start();
	Menu::Info();
	cin.ignore(); cin.get();
	// Connect to Database
	cout << "\n";
	for (size_t i = 0; i < MAXCon; i++)
		cout << " ";
	cout << "Attempting connection to SQL Server...";
	cout << "\n";
	for (size_t i = 0; i < MAXCon; i++)
		cout << " ";
	DB.Init();
	DB.Select_GetStudentList(LStudent);
	DB.Select_GetBookList(LBook);
	DB.Select_GetBorrowReturnList(LBR);
	DB.Select_GetTypeBookList(LTB);
	cin.ignore(); cin.get();
X:
	system("cls");
	Menu::Main();
	do
	{
		cout << "\n";
		for (size_t i = 0; i < MAX1 + 5; i++)
			cout << " ";
		CurPos pS = _getCursorPos();

		cout << "Please choose your task and press enter: ";
		fflush(stdin);
		Choice = getInput(1, 10, pS);
		system("cls");
		switch (Choice)
		{
		case 1:
		{
			Menu::MenuShow();
			int Select;
			do
			{
				gotoxy(0, 0);
				Menu::MenuShow();
				cout << "\n";
				gotoxy(0, 15);
				for (size_t i = 0; i < MeShow; i++)
					cout << " ";
				CurPos pS = _getCursorPos();
				cout << "Select your choice and press enter: ";
				fflush(stdin);
				Select = getInput(1, 7, pS);
				system("cls");
				gotoxy(MeShow, 15);
				cout << "   ";
				switch (Select)
				{
				case 1:
					DB.Select_UpdateStudentList(LStudent);
					Menu::ShowStudent(LStudent);
					break;
				case 2:
					DB.Select_UpdateBookList(LBook);
					Menu::ShowBook(LBook);
					break;
				case 3:
					DB.Select_UpdateTypeBookList(LTB);
					Menu::ShowTypeBook(LTB);
					break;
				case 4:
					Menu::ShowBorrowReturn(LBR);
					DB.Select_UpdateBorrowReturnList(LBR);
					break;
				case 5:
					system("cls");
					Menu::MenuShow();
					break;
				case 6:
					goto X;
					break;
				case 7:
					showFinish();
					system("pause");
					exit(0);
				}

			} while (1);

			break;
		}
		case 2:
		{
			do
			{
				int Select;
				gotoxy(0, 0);
				system("cls");
				Menu::MenuSearch();
				cout << "\n";
				for (int i = 0; i < MeShow + 1; ++i) cout << " ";
				CurPos pS2 = _getCursorPos();
				cout << "Invite you choose task and press enter: ";
				CurPos pE = _getCursorPos();
				Select = getInput(1, 7, pS2);
				system("cls");
				Menu::MenuSearch();
				switch (Select)
				{
				case 1:
				{
					system("cls");
					MenuShow();
					MenuSearchAttributeStudent();
					gotoxy(pS2.x, pS2.y);

					bool alowShow = true;
					do
					{
						system("cls");
						earseRow(pS2.y);
						gotoxy(pS2.x - 1, pS2.y);
						cout << "Invite you choose task and press enter - Search by: ";
						int selectAttribute;
						selectAttribute = getInput(1, 7, pS2);
						DoubleLinkList<Student> mList;
						for (int i = 0; i < MeShow; ++i) cout << " ";
						CurPos pS = _getCursorPos();
						switch (selectAttribute)
						{
						case 1:
						{
							string mCodeStudent;
							cout << "\n\n";
							earseRow(pS.y);
							gotoxy(pS.x, pS.y);
							cout << "Enter code student: "; //cin >> mCodeStudent;
							getline(std::cin >> std::ws, mCodeStudent);
							LStudent.SearchAllBy<string>(EqualCodeStudent, mCodeStudent, mList);
							break;
						}

						case 2:
						{
							string mNameStudent;
							cout << "\n\n";
							earseRow(pS.y);
							gotoxy(pS.x, pS.y);
							cout << "Enter name student: ";
							getline(std::cin >> std::ws, mNameStudent);;
							LStudent.SearchAllBy<string>(EqualNameStudent, mNameStudent, mList);
							break;
						}
						case 3:
						{
							string mClass;
							cout << "\n\n";
							earseRow(pS.y);
							gotoxy(pS.x, pS.y);
							cout << "Enter class: "; fflush(stdin); getline(std::cin >> std::ws, mClass);
							LStudent.SearchAllBy<string>(EqualStudentClass, mClass, mList);
							break;
						}
						case 4:
						{
							string mFaculty;
							cout << "\n\n";
							earseRow(pS.y);
							gotoxy(pS.x, pS.y);
							cout << "Enter Faculty: "; getline(std::cin >> std::ws, mFaculty);
							LStudent.SearchAllBy<string>(EqualStudentFaculty, mFaculty, mList);
							break;
						}
						case 5:
						{
							string mPhoneNumber;
							cout << "\n\n";
							earseRow(pS.y);
							gotoxy(pS.x, pS.y);
							cout << "Enter Phone Number: "; getline(std::cin >> std::ws, mPhoneNumber);
							LStudent.SearchAllBy<string>(EqualStudentPhoneNumber, mPhoneNumber, mList);
							break;
						}
						case 6:
						{
							system("cls");
							alowShow = false;
							break;
						}
						}
						if (alowShow)
						{
							if (mList.isEmpty())
							{
								cout << "\n";
								gotoxy(pS.x, pS.y);
								cout << "This student does not exists.\n";
							}
							else
							{
								Menu::ShowStudent(mList);
							}
						}
						//earseRow(pS2.y);
						system("cls");
					} while (alowShow);
					break;
				}
				case 2:
				{
					//system("cls");
					bool alowShow = true;
					do
					{
						system("cls");
						Menu::MenuSearch();
						MenuSearchAttributeBook();
						gotoxy(pS2.x, pS2.y);

						gotoxy(0, 15);
						earseRow(pS2.y);
						gotoxy(pS2.x, pS2.y);
						cout << "Invite you choose task and press enter - Search by: ";
						int selectAttribute;
						selectAttribute = getInput(1, 7, pS2);
						DoubleLinkList<Book> mList;
						for (int i = 0; i < MAXMAIN; ++i) cout << " ";
						CurPos pS = _getCursorPos();
						switch (selectAttribute)
						{
						case 1:
						{
							string mCodeBook;
							cout << "\n";
							earseRow(pS.y);
							gotoxy(pS.x, pS.y);
							cout << "Enter code book: ";
							getline(std::cin >> std::ws, mCodeBook);
							LBook.SearchAllBy<string>(EqualBookCode, mCodeBook, mList);
							break;
						}

						case 2:
						{
							string mNameBook;
							cout << "\n";
							earseRow(pS.y);
							gotoxy(pS.x, pS.y);
							cout << "Enter name book: ";
							getline(std::cin >> std::ws, mNameBook);;
							LBook.SearchAllBy<string>(EqualBookName, mNameBook, mList);
							break;
						}
						case 3:
						{
							string mCodeType;
							cout << "\n";
							earseRow(pS.y);
							gotoxy(pS.x, pS.y);
							cout << "Enter code type: "; fflush(stdin); getline(std::cin >> std::ws, mCodeType);
							LBook.SearchAllBy<string>(EqualBookCodeType, mCodeType, mList);
							break;
						}
						case 4:
						{
							string mAuthor;
							cout << "\n";
							earseRow(pS.y);
							gotoxy(pS.x, pS.y);
							cout << "Enter Author: "; getline(std::cin >> std::ws, mAuthor);
							LBook.SearchAllBy<string>(EqualBookAuthor, mAuthor, mList);
							break;
						}
						case 5:
						{
							int mOrQuan;
							cout << "\n";
							earseRow(pS.y);
							gotoxy(pS.x, pS.y);
							CurPos pS = _getCursorPos();
							earseRow(pS.y);
							gotoxy(pS.x, pS.y);
							cout << "Enter Original Quantity: ";
							cin >> mOrQuan;
							while (std::cin.fail())
							{
								earseRow(pS.y);
								gotoxy(pS.x, pS.y);
								cout << "Enter Original Quantity: ";
								std::cin.clear();
								std::cin.ignore(256, '\n');
								std::cin >> mOrQuan;
							}
							LBook.SearchAllBy<int>(EqualBookOriginQuantity, mOrQuan, mList);
							break;
						}
						case 6:
						{
							int mReQuan;
							cout << "\n";
							earseRow(pS.y);
							gotoxy(pS.x, pS.y);
							cout << "Enter Remain Quantity: ";
							cin >> mReQuan;
							while (std::cin.fail())
							{
								earseRow(pS.y);
								gotoxy(pS.x, pS.y);
								cout << "Enter Remain Quantity: ";
								std::cin.clear();
								std::cin.ignore(256, '\n');
								std::cin >> mReQuan;
							}
							LBook.SearchAllBy<int>(EqualBookRemainQuantity, mReQuan, mList);
							break;
						}
						case 7:
						{
							system("cls");
							alowShow = false;
							break;
						}
						}
						if (alowShow)
						{
							if (mList.isEmpty())
							{
								cout << "\n";
								for (int i = 0; i < MAXMAIN; ++i) cout << " ";
								cout << "This book does not exists.\n";
							}
							else
							{
								Menu::ShowBook(mList);
							}
						}
						cin.ignore();
						cin.get();

					} while (alowShow);
					break;
				}

				case 3://SearchTypyebook
				{

					bool alowShow = true;
					do
					{
						system("cls");
						MenuSearch();
						MenuSearchAttributeTypeBook();
						gotoxy(pS2.x, pS2.y);
						CurPos pS2 = _getCursorPos();

						gotoxy(0, 15);
						earseRow(pS2.y);
						gotoxy(pS2.x, pS2.y);
						cout << "Invite you choose task and press enter - Search by: ";
						int selectAttribute;
						selectAttribute = getInput(1, 3, pS2);
						DoubleLinkList<TypeBook> mList;
						for (int i = 0; i < MAXMAIN; ++i) cout << " ";
						CurPos pS = _getCursorPos();
						switch (selectAttribute)
						{
						case 1:
						{
							string mCodeTypeBook;
							cout << "\n";
							earseRow(pS.y);
							gotoxy(pS.x, pS.y);
							cout << "Enter code type book: ";
							getline(std::cin >> std::ws, mCodeTypeBook);
							LTB.SearchAllBy<string>(EqualCodeType, mCodeTypeBook, mList);
							break;
						}

						case 2:
						{
							string mNameTypeBook;
							cout << "\n";
							earseRow(pS.y);
							gotoxy(pS.x, pS.y);
							cout << "Enter name type book: ";
							getline(std::cin >> std::ws, mNameTypeBook);;
							LTB.SearchAllBy<string>(EqualNameType, mNameTypeBook, mList);
							break;
						}

						case 3:
						{
							system("cls");
							alowShow = false;
							break;
						}
						}
						if (alowShow)
						{
							if (mList.isEmpty())
							{
								cout << "\n";
								for (int i = 0; i < MAXMAIN; ++i) cout << " ";
								cout << "This type book does not exists.\n";
							}
							else
							{
								Menu::ShowTypeBook(mList);
							}
						}
						cin.ignore();
						cin.get();
						system("cls");
					} while (alowShow);
					break;
				}
				case 4://Search BR
				{
				
					bool alowShow = true;
	
					do
					{
						system("cls");
						MenuSearch();
						MenuSearchAttributeBR();
						gotoxy(pS2.x, pS2.y);
						CurPos pS2 = _getCursorPos();
						gotoxy(0, 15);
						earseRow(pS2.y);
						gotoxy(pS2.x, pS2.y);
						cout << "Invite you choose task and press enter - Search by: ";
						int selectAttribute;
						selectAttribute = getInput(1, 6, pS2);
						DoubleLinkList<BorrowReturn> mList;
						for (int i = 0; i < MAXMAIN; ++i) cout << " ";
						CurPos pS = _getCursorPos();
						switch (selectAttribute)
						{
						case 1:
						{
							string mCodeStudent;
							cout << "\n";
							earseRow(pS.y);
							gotoxy(pS.x, pS.y);
							cout << "Enter code student: ";
							getline(std::cin >> std::ws, mCodeStudent);
							LBR.SearchAllBy<string>(EqualBRCodeStudent, mCodeStudent, mList);
							break;
						}

						case 2:
						{
							string mCodeBook;
							cout << "\n";
							earseRow(pS.y);
							gotoxy(pS.x, pS.y);
							cout << "Enter code book: ";
							getline(std::cin >> std::ws, mCodeBook);;
							LBR.SearchAllBy<string>(EqualBRCodeBook, mCodeBook, mList);
							break;
						}
						case 3:
						{
							
							cout << "\n";
							earseRow(pS.y);
							gotoxy(pS.x, pS.y);
							cout << "Enter date borrow: ";
							fflush(stdin);
							int mD, mM, mY;
							cin >> mD >> mM >> mY;
							//cin >> dBR;
							Dates dBR(mD,mM,mY);
							LBR.SearchAllBy<Dates>(EqualBRDayBR, dBR, mList);
							break;
						}
						case 4:
						{
							cout << "\n";
							earseRow(pS.y);
							gotoxy(pS.x, pS.y);
							cout << "Enter date return: ";
							fflush(stdin);
							int mD, mM, mY;
							cin >> mD >> mM >> mY;
							//cin >> dBR;
							Dates dRT(mD, mM, mY);
							LBR.SearchAllBy<Dates>(EqualBRDayRT, dRT, mList);
							break;
						}
						case 5:
						{
							string state;
							cout << "\n";
							earseRow(pS.y);
							gotoxy(pS.x, pS.y);
							cout << "Enter state: ";
							getline(std::cin >> std::ws, state);
							LBR.SearchAllBy<string>(EqualBRStatus, state, mList);
							break;
						}

						case 6:
						{
							system("cls");
							alowShow = false;
							break;
						}
						}
						if (alowShow)
						{
							if (mList.isEmpty())
							{
								cout << "\n";
								for (int i = 0; i < MAXMAIN; ++i) cout << " ";
								cout << "This book does not exists.\n";
							}
							else
							{
								Menu::ShowBorrowReturn(mList);
							}

						}
						cin.ignore();
						cin.get();
						system("cls");
					} while (alowShow);
					break;
				}



				case 5:
					system("cls");
					Menu::MenuShow();
					break;
				case 6:
				{
					goto X;
					break;
				}

				case 7:
					showFinish();
					system("pause");
					exit(0);
				default:
				{
					cout << "Don't have your choice in list. Invite you enter again:";
					cin >> Select;
					break;
				}

				}
			} while (1);
		}

		case 3:
		{
			int SelectInsert;
			do
			{
				system("cls");
				gotoxy(0, 0);
				Menu::MenuInsert();
				cout << "\n";
				gotoxy(MeShow + 1, 15);
				cout << "Invite you choose task and press enter: ";
				fflush(stdin);
				cin >> SelectInsert;
				while (SelectInsert < 1 || SelectInsert > 7)
				{
					cout << "\n";
					gotoxy(MeShow + 1, 15);
					cout << "Invalid Format. Please enter again:";
					cout << "                                                                                                                   ";
					gotoxy(MeShow + 56, 15);
					cin >> SelectInsert;
				}
				switch (SelectInsert)
				{
				case 1:
				{
					string _CodeStudent;
					string _NameStudent;
					string _Faculty;
					string _Class;
					string _PhoneNumber;
					gotoxy(MeShow + 1, 16);
					cout << "Code student: ";
					getline(std::cin >> std::ws, _CodeStudent);
					Node<Student>* s = LStudent.SearchBy<string>(EqualCodeStudent, _CodeStudent);
					if (s == NULL)
					{
						gotoxy(MeShow + 1, 17);
						cout << "Name student: ";
						getline(std::cin >> std::ws, _NameStudent);
						gotoxy(MeShow + 1, 18);
						cout << "Faculty: ";
						getline(std::cin >> std::ws, _Faculty);
						gotoxy(MeShow + 1, 19);
						cout << "Class: ";
						getline(std::cin >> std::ws, _Class);
						gotoxy(MeShow + 1, 20);
						cout << "Phone number: ";
						getline(std::cin >> std::ws, _PhoneNumber);
						Student Stu(_CodeStudent, _NameStudent, _Faculty, _Class, _PhoneNumber);
						LStudent.InsertLast(Stu);
						gotoxy(MeShow + 1, 21);
						if (DB.Insert_DBStudent(Stu) == 0)
						{
							LStudent.RemoveLast();
						}
						Menu::ShowStudent(LStudent);
					}
					else
					{
						gotoxy(MeShow + 1, 17);
						cout << "Information existed!";
					}
					cin.ignore(); cin.get();
					break;
				}
				case 2:
				{
					string _CodeBook;
					string _NameBook;
					string _TypeBook;
					string _Author;
					int _OriginQuantity;
					int _RemainQuantity;
					gotoxy(MeShow + 1, 16);
					cout << "Code book: ";
					getline(std::cin >> std::ws, _CodeBook);
					Node<Book>* s = LBook.SearchBy<string>(EqualBookCode, _CodeBook);
					if (s == NULL)
					{
						gotoxy(MeShow + 1, 17);
						cout << "Name book: ";
						getline(std::cin >> std::ws, _NameBook);
						gotoxy(MeShow + 1, 18);
						cout << "Type book: ";
						getline(std::cin >> std::ws, _TypeBook);
						gotoxy(MeShow + 1, 19);
						cout << "Author: ";
						getline(std::cin >> std::ws, _Author);
						gotoxy(MeShow + 1, 20);
						cout << "Origin quantity: ";
						cin >> _OriginQuantity;
						gotoxy(MeShow + 1, 21);
						cout << "Remain quantity: ";
						cin >> _RemainQuantity;
						Book Boo(_CodeBook, _NameBook, _TypeBook, _Author, _OriginQuantity, _RemainQuantity);
						LBook.InsertLast(Boo);
						gotoxy(MeShow + 1, 22);
						if (DB.Insert_DBBook(Boo) == 0)
						{
							LBook.RemoveLast();
						}
						Menu::ShowBook(LBook);
					}
					else
					{
						gotoxy(MeShow + 1, 17);
						cout << "Information existed!";
					}

					cin.ignore(); cin.get();
					break;
				}
				case 3:
				{
					string _CodeType;
					string _NameType;
					gotoxy(MeShow + 1, 16);
					cout << "Code type: ";
					getline(std::cin >> std::ws, _CodeType);
					Node<TypeBook>* s = LTB.SearchBy<string>(EqualCodeType, _CodeType);
					if (s == NULL)
					{
						gotoxy(MeShow + 1, 17);
						cout << "Name type: ";
						getline(std::cin >> std::ws, _NameType);
						TypeBook T(_CodeType, _NameType);
						LTB.InsertLast(T);
						gotoxy(MeShow + 1, 18);
						if (DB.Insert_DBTypeBook(T) == 0)
						{
							LTB.RemoveLast();
						}
						Menu::ShowTypeBook(LTB);
					}
					else
					{
						gotoxy(MeShow + 1, 17);
						cout << "Information existed!";
					}

					cin.ignore(); cin.get();
					break;
				}
				case 4:
				{
					string _Order;
					string _CodeStudent;
					string _CodeBook;
					Dates _DateBorrow;
					Dates _DateReturn;
					string _Status;
					int day, month, year;
					gotoxy(MeShow + 1, 16);
					cout << "Order: ";
					getline(std::cin >> std::ws, _Order);
					Node<BorrowReturn>* s = LBR.SearchBy<string>(EqualOrder, _Order);
					if (s == NULL)
					{
						gotoxy(MeShow + 1, 17);
						cout << "Code student: ";
						getline(std::cin >> std::ws, _CodeStudent);
						gotoxy(MeShow + 1, 18);
						cout << "Code book: ";
						getline(std::cin >> std::ws, _CodeBook);
						gotoxy(MeShow + 1, 19);
						cout << "Date borrow: ";
						cin >> day >> month >> year;
						_DateBorrow.setDay(day);
						_DateBorrow.setMonth(month);
						_DateBorrow.setYear(year);
						gotoxy(MeShow + 1, 20);
						cout << "Date return:";
						cin >> day >> month >> year;
						_DateReturn.setDay(day);
						_DateReturn.setMonth(month);
						_DateReturn.setYear(year);

						gotoxy(MeShow + 1, 21);
						cout << "Status: ";
						getline(std::cin >> std::ws, _Status);
						BorrowReturn B(_Order, _CodeStudent, _CodeBook, _DateBorrow, _DateReturn, _Status);
						LBR.InsertLast(B);
						gotoxy(MeShow + 1, 22);
						if (DB.Insert_DBBorrowReturn(B) == 0)
						{
							LBR.RemoveLast();
						}
						Menu::ShowBorrowReturn(LBR);
					}
					else
					{
						gotoxy(MeShow + 1, 17);
						cout << "Information existed!";
					}

					cin.ignore(); cin.get();
					break;
				}
				case 5:
					/*system("cls");
					Menu::MenuShow();*/
					break;
				case 6:
					goto X;
					break;
				case 7:
					cout << "Finish!\n";
					system("pause");
					exit(0);
					break;
				}
			} while (1);
			break;
		}
		case 4:
		{
			int SelectInsert;
			do
			{
				system("cls");
				gotoxy(0, 0);
				Menu::MenuDelete();
				cout << "\n";
				gotoxy(MeShow + 1, 15);
				cout << "Invite you choose task and press enter: ";
				fflush(stdin);
				cin >> SelectInsert;
				while (SelectInsert < 1 || SelectInsert > 7)
				{
					cout << "\n";
					gotoxy(MeShow + 1, 15);
					cout << "Invalid Format. Please enter again:";
					cout << "                                                                                                                   ";
					gotoxy(MeShow + 56, 15);
					cin >> SelectInsert;
				}
				switch (SelectInsert)
				{
				case 1:
				{
					string _CodeStudent;
					gotoxy(MeShow + 1, 16);
					cout << "Code student: ";
					getline(std::cin >> std::ws, _CodeStudent);
					Node<Student>* s = LStudent.SearchBy<string>(EqualCodeStudent, _CodeStudent);
					if (s == NULL)
					{
						gotoxy(MeShow + 1, 17);
						cout << "Information is not existed!";
					}
					else
					{
						LStudent.RemoveBy<string>(EqualCodeStudent, _CodeStudent);
						gotoxy(MeShow + 1, 17);
						if (DB.Delete_DBStudent(_CodeStudent) == 0)
						{
							DB.Select_UpdateStudentList(LStudent);
						}
						Menu::ShowStudent(LStudent);
					}
					cin.ignore(); cin.get();
					break;
				}
				case 2:
				{
					string _CodeBook;
					gotoxy(MeShow + 1, 16);
					cout << "Code book: ";
					getline(std::cin >> std::ws, _CodeBook);
					Node<Book>* s = LBook.SearchBy<string>(EqualBookCode, _CodeBook);
					if (s == NULL)
					{
						gotoxy(MeShow + 1, 17);
						cout << "Information is not existed!";
					}
					else
					{
						LBook.RemoveBy<string>(EqualBookCode, _CodeBook);
						gotoxy(MeShow + 1, 17);
						if (DB.Delete_DBBook(_CodeBook) == 0)
						{
							DB.Select_UpdateBookList(LBook);
						}
						Menu::ShowBook(LBook);
					}
					cin.ignore(); cin.get();
					break;
				}
				case 3:
				{
					string _CodeType;
					gotoxy(MeShow + 1, 16);
					cout << "Code type: ";
					getline(std::cin >> std::ws, _CodeType);
					Node<TypeBook>* s = LTB.SearchBy<string>(EqualCodeType, _CodeType);
					if (s == NULL)
					{
						gotoxy(MeShow + 1, 17);
						cout << "Information is not existed!";
					}
					else
					{
						LTB.RemoveBy<string>(EqualCodeType, _CodeType);
						gotoxy(MeShow + 1, 17);
						if (DB.Delete_DBTypeBook(_CodeType) == 0)
						{
							DB.Select_UpdateTypeBookList(LTB);
						}
						Menu::ShowTypeBook(LTB);
					}
					cin.ignore(); cin.get();
					break;
				}
				case 4:
				{
					string _Order;
					gotoxy(MeShow + 1, 16);
					cout << "Order: ";
					getline(std::cin >> std::ws, _Order);
					Node<BorrowReturn>* s = LBR.SearchBy<string>(EqualOrder, _Order);
					if (s == NULL)
					{
						gotoxy(MeShow + 1, 17);
						cout << "Information is not existed!";
					}
					else
					{
						LBR.RemoveBy<string>(EqualOrder, _Order);
						gotoxy(MeShow + 1, 17);
						if (DB.Delete_DBBorrowReturn(_Order) == 0)
						{
							DB.Select_UpdateBorrowReturnList(LBR);
						}
						Menu::ShowBorrowReturn(LBR);
					}

					cin.ignore(); cin.get();
					break;
				}
				case 5:
					/*system("cls");
					Menu::MenuShow();*/
					break;
				case 6:
					goto X;
					break;
				case 7:
					cout << "Finish!\n";
					system("pause");
					exit(0);
					break;
				}
			} while (1);
			break;
		}
		case 5:
		{
			int SelectUpdate;
			do
			{
				system("cls");
				gotoxy(0, 0);
				Menu::MenuUpdate();
				cout << "\n";
				gotoxy(MeShow + 1, 15);
				cout << "Invite you choose task and press enter: ";
				fflush(stdin);
				cin >> SelectUpdate;
				while (SelectUpdate < 1 || SelectUpdate > 7)
				{
					cout << "\n";
					gotoxy(MeShow + 1, 15);
					cout << "Invalid Format. Please enter again:";
					cout << "                                                                                                                   ";
					gotoxy(MeShow + 56, 15);
					cin >> SelectUpdate;
				}
				switch (SelectUpdate)
				{
				case 1:
				{
					string _CodeStudent;
					string _NameStudent;
					string _Faculty;
					string _Class;
					string _PhoneNumber;
					gotoxy(MeShow + 1, 16);
					cout << "Code student: ";
					getline(std::cin >> std::ws, _CodeStudent);
					Node<Student>* s = LStudent.SearchBy<string>(EqualCodeStudent, _CodeStudent);

					if (s == NULL)
					{
						gotoxy(MeShow + 1, 17);
						cout << "Information is not existed!";
					}
					else
					{
						gotoxy(MeShow + 1, 17);
						cout << "Name student: ";
						getline(std::cin >> std::ws, _NameStudent);
						gotoxy(MeShow + 1, 18);
						cout << "Faculty: ";
						getline(std::cin >> std::ws, _Faculty);
						gotoxy(MeShow + 1, 19);
						cout << "Class: ";
						getline(std::cin >> std::ws, _Class);
						gotoxy(MeShow + 1, 20);
						cout << "Phone number: ";
						getline(std::cin >> std::ws, _PhoneNumber);
						Student Stu(_CodeStudent, _NameStudent, _Faculty, _Class, _PhoneNumber);
						LStudent.UpdateVal(s, Stu);
						gotoxy(MeShow + 1, 21);
						if (DB.Update_DBStudent(Stu, _CodeStudent) == 0)
						{
							DB.Select_UpdateStudentList(LStudent);
						}
						Menu::ShowStudent(LStudent);
					}
					cin.ignore(); cin.get();
					break;
				}
				case 2: //SearchBy
				{
					string _CodeBook;
					string _NameBook;
					string _TypeBook;
					string _Author;
					int _OriginQuantity;
					int _RemainQuantity;
					gotoxy(MeShow + 1, 16);
					cout << "Code book: ";
					getline(std::cin >> std::ws, _CodeBook);
					Node<Book>* s = LBook.SearchBy<string>(EqualBookCode, _CodeBook);
					if (s == NULL)
					{
						gotoxy(MeShow + 1, 17);
						cout << "Information is not existed!";
					}
					else
					{
						gotoxy(MeShow + 1, 17);
						cout << "Name book: ";
						getline(std::cin >> std::ws, _NameBook);
						gotoxy(MeShow + 1, 18);
						cout << "Type book: ";
						getline(std::cin >> std::ws, _TypeBook);
						gotoxy(MeShow + 1, 19);
						cout << "Author: ";
						getline(std::cin >> std::ws, _Author);
						gotoxy(MeShow + 1, 20);
						cout << "Origin quantity: ";
						cin >> _OriginQuantity;
						gotoxy(MeShow + 1, 21);
						cout << "Remain quantity: ";
						cin >> _RemainQuantity;
						Book Boo(_CodeBook, _NameBook, _TypeBook, _Author, _OriginQuantity, _RemainQuantity);
						LBook.UpdateVal(s, Boo);
						gotoxy(MeShow + 1, 22);
						if (DB.Update_DBBook(Boo, _CodeBook) == 0)
						{
							DB.Select_UpdateBookList(LBook);
						}
						Menu::ShowBook(LBook);
					}
					cin.ignore(); cin.get();
					break;
				}
				case 3://updateTypeBook
				{
					string _CodeType;
					string _NameType;
					gotoxy(MeShow + 1, 16);
					cout << "Code type: ";
					getline(std::cin >> std::ws, _CodeType);
					Node<TypeBook>* s = LTB.SearchBy<string>(EqualCodeType, _CodeType);
					if (s == NULL)
					{
						gotoxy(MeShow + 1, 17);
						cout << "Information is not existed!";
					}
					else
					{
						gotoxy(MeShow + 1, 17);
						cout << "Name type: ";
						getline(std::cin >> std::ws, _NameType);
						TypeBook T(_CodeType, _NameType);
						LTB.UpdateVal(s, T);
						gotoxy(MeShow + 1, 18);
						if (DB.Update_DBTypeBook(T, _CodeType) == 0)
						{
							DB.Select_UpdateTypeBookList(LTB);
						}
						Menu::ShowTypeBook(LTB);
					}
					cin.ignore(); cin.get();
					break;
				}
				case 4: //updateBR
				{
					string _Order;
					string _CodeStudent;
					string _CodeBook;
					Dates _DateBorrow;
					Dates _DateReturn;
					string _Status;
					int day, month, year;
					gotoxy(MeShow + 1, 16);
					cout << "Order: ";
					getline(std::cin >> std::ws, _Order);
					Node<BorrowReturn>* s = LBR.SearchBy<string>(EqualOrder, _Order);
					if (s == NULL)
					{
						gotoxy(MeShow + 1, 17);
						cout << "Information is not existed!";
					}
					else
					{
						gotoxy(MeShow + 1, 17);
						cout << "Code student: ";
						getline(std::cin >> std::ws, _CodeStudent);
						gotoxy(MeShow + 1, 18);
						cout << "Code book: ";
						getline(std::cin >> std::ws, _CodeBook);
						gotoxy(MeShow + 1, 19);
						cout << "Date borrow: ";
						cin >> day >> month >> year;
						_DateBorrow.setDay(day);
						_DateBorrow.setMonth(month);
						_DateBorrow.setYear(year);
						gotoxy(MeShow + 1, 20);
						cout << "Date return:";
						cin >> day >> month >> year;
						_DateReturn.setDay(day);
						_DateReturn.setMonth(month);
						_DateReturn.setYear(year);

						gotoxy(MeShow + 1, 21);
						cout << "Status: ";
						getline(std::cin >> std::ws, _Status);
						BorrowReturn B(_Order, _CodeStudent, _CodeBook, _DateBorrow, _DateReturn, _Status);
						LBR.UpdateVal(s, B);
						gotoxy(MeShow + 1, 22);
						if (DB.Update_DBBorrowReturn(B, _Order) == 0)
						{
							DB.Select_UpdateBorrowReturnList(LBR);
						}
						Menu::ShowBorrowReturn(LBR);
					}
					cin.ignore(); cin.get();
					break;
				}
				case 5:
					system("cls");
					break;
				case 6:
					goto X;
					break;
				case 7:
					cout << "Finish!\n";
					system("pause");
					exit(0);
					break;
				}
			} while (1);
			break;
		}
		case 6: //Sort
		{
			ShowMenuSort();
			CurPos pSold = _getCursorPos();
			CurPos pS = pSold;
			++pS.y;

			CurPos pE = _getCursorPos();
			do
			{
				gotoxy(pS.x, pS.y);
				cout << "Please enter your choice and press enter: ";
				int optSort = getInput(1, 5, pS);
				earseRow(pS.y);
				switch (optSort)
				{
				case 1:// Sort Student
				{
					int atrribute;
					CurPos pS = pSold;
					++pS.y;
					do
					{
						ShowMenuSortStudent();
						//earseRow(pS.y);
						gotoxy(pS.x, pS.y);
						cout << "Enter your atrribute's student to sort: ";
						atrribute = getInput(1, 6, pS);
						SortStudent(LStudent, atrribute, pS);
						earseRow(pS.y);
						gotoxy(pS.x, pS.y);
					} while (atrribute != 6);
					gotoxy(pS.x, pS.y);
					cout << "Please enter your choice and press enter: ";
					break;
				}
				case 2: //Sort Book
				{
					int atrribute;
					CurPos pS = pSold;
					pS.y += 2;
					do
					{
						Menu::ShowMenuSortBook();
						//earseRow(pS.y);
						gotoxy(pS.x, pS.y);
						cout << "Enter your atrribute's book to sort: ";
						atrribute = getInput(1, 7, pS);
						Menu::SortBook(LBook, atrribute, pS);
						earseRow(pS.y);
						gotoxy(pS.x, pS.y);
					} while (atrribute != 7);
					gotoxy(pS.x, pS.y);
					cout << "Please enter your choice and press enter: ";
					break;
				}
				case 3:// Sort Borrow Return
				{
					int atrribute;
					CurPos pS = pSold;
					pS.y += 1;
					do
					{
						Menu::ShowMenuBR();
						//earseRow(pS.y);
						gotoxy(pS.x, pS.y);
						cout << "Enter your atrribute to sort: ";
						atrribute = getInput(1, 6, pS);
						Menu::SortBR(LBR, atrribute, pS);
						earseRow(pS.y);
						gotoxy(pS.x, pS.y);
					} while (atrribute != 6);
					gotoxy(pS.x, pS.y);
					cout << "Please enter your choice and press enter: ";
					break;
				}
				case 4://Sort TypeBook
				{
					int atrribute;
					CurPos pS = pSold;
					++pS.y;
					do
					{
						Menu::ShowMenuSortTypeBook();
						//earseRow(pS.y);
						gotoxy(pS.x, pS.y);
						cout << "Enter your atrribute's type book to sort: ";
						atrribute = getInput(1, 3, pS);
						Menu::SortTypeBook(LTB, atrribute, pS);
						earseRow(pS.y);
						gotoxy(pS.x, pS.y);
					} while (atrribute != 3);
					gotoxy(pS.x, pS.y);
					cout << "Please enter your choice and press enter: ";
					break;
				}
				case 5://return
				{
					goto X;
					break;
				}
				}
			} while (true);
		}
		case 7: //Borrow Return
		{
			string StudentCode;
			CurPos pS = _getCursorPos();
			do
			{
				earseRow(pS.y);
				gotoxy(pS.x, pS.y);
				cout << "Enter student code: ";
				getline(std::cin >> std::ws, StudentCode);
				if (StudentCode.length() != 9) continue;
				bool check = true;
				for (char c : StudentCode) if (!_isDigit(c))
				{
					check = false;
					break;
				}
				if (StudentCode.length() == 9 && check) break;
			} while (true);

			bool isReg = LStudent.SearchBy<string>(EqualCodeStudent, StudentCode);
			if (!isReg)
			{
				cout << "\nYou have not registered for the library card! Do you want to reg now?\n";
				string opt;
				char cOpt;
				CurPos p = _getCursorPos();
				do
				{
					earseRow(p.y);
					gotoxy(p.x, p.y);
					cout << "Enter Y to reg - N to Cancle [Y\\N]: ";
					do
					{
						earseRow(p.y);
						gotoxy(p.x, p.y);
						cout << "Enter Y to reg - N to Cancle [Y\\N]: ";
						getline(std::cin >> std::ws, opt);
					} while (!opt.length() == 1);
					cOpt = opt[0];

				} while (!(toupper(cOpt) == 'Y' || (toupper(cOpt) == 'N')));
				if (toupper(cOpt) == 'Y')
				{
					Student mStudent(StudentCode, "", "", "", "");
					cin >> mStudent;
					bool succ = DB.Insert_DBStudent(mStudent);
					if (succ)
					{
						LStudent.InsertLast(mStudent);
					}
					else
					{
						cout << "An error has occurred. Please try again.\n";
					}
					cout << "\n";
					cin.ignore(); cin.get();

					//break;
				}
			}
			//else
			{
				string idBook;
				Dates _dates, _rdates;
				int dd, mm, yy;
				int rd = 0, rm = 0, ry = 0;
				CurPos pS1 = _getCursorPos();
				cout << "Press E to exit.\n\n";
				bool isExit = false;
				do
				{
					do
					{

						CurPos pS = _getCursorPos();
						cout << "Enter book id: ";
						getline(std::cin >> std::ws, idBook);
						if (toupper(idBook[0]) == 'E' && idBook.length() == 1) { isExit = true; break; }
						bool check = LBook.SearchBy<string>(EqualBookCode, idBook);
						if (!check)
						{
							CurPos pS1 = _getCursorPos();
							earseRow(pS.y);
						}
						else break;
					} while (true);

					if (!isExit)
					{
						getTimeNow(dd, mm, yy);
						_dates.setDay(dd);
						_dates.setMonth(mm);
						_dates.setYear(yy);

						_rdates.setDates(rd, rm, ry);

						string status = "Dang muon";
						char mOrder[80];
						_itoa_s(LBR.getLength() + 1, mOrder, 10);
						int tmp = LBR.getLength() + 1;
						int cnt = 0;
						while (tmp)
						{
							tmp /= 10;
							++cnt;
						}
						string str = "";
						for (int i = 0; i < 6 - cnt; ++i) str += '0';
						for (int i = 0; i < cnt; ++i) str += mOrder[i];
						cout << _dates << " " << _rdates << "\n";
						BorrowReturn mBR(str, StudentCode, idBook, _dates, _rdates, status);

						bool succ = DB.Insert_DBBorrowReturn(mBR);
						if (succ)
						{
							LBR.InsertLast(mBR);

						}
						else
						{
							cout << "An error has occured.\n";
						}
					}
				} while (!isExit);
				Menu::ShowBorrowReturn(LBR);
			}
			cout << "\nPress any key to continue.\n";
			cin.ignore(); cin.get();
			goto X;
			break;
		}
		case 8:
		{
			string StudentCode;
			do
			{
				CurPos pS = _getCursorPos();
				cout << "Enter student code: ";
				getline(std::cin >> std::ws, StudentCode);
				bool check = true;
				for (char c : StudentCode) if (!_isDigit(c))
				{
					check = false;
					earseRow(pS.y);
					gotoxy(pS.x, pS.y);
					break;
				}
				if (StudentCode.length() == 9 && check) break;
			} while (true);

			DoubleLinkList<BorrowReturn> tmp;
			LBR.SearchAllBy(EqualBRCodeStudentAndIsBorrowed, StudentCode, tmp);
			ShowBorrowReturn(tmp);
			cout << "\n";
			cout << "Enter the number of books you want to return: ";
			CurPos pS = _getCursorPos();
			int amount = getInput(1, tmp.getLength(), pS);
			int i = 0;
			while (i < amount)

			{
				string mOrder;
				CurPos pS = _getCursorPos();
				cout << "\nEnter order: ";
				getline(std::cin >> std::ws, mOrder);
				Node<BorrowReturn>* mBr = tmp.SearchBy(EqualOrder, mOrder);
				if (mBr)
				{
					Node<BorrowReturn>* tmpBR = LBR.SearchBy(EqualOrder, mOrder);
					BorrowReturn brrt = tmpBR->getData();
					brrt.SetDateReturn(getTimeNow());
					brrt.SetStatus("Da tra");
					bool succ = DB.Update_DBBorrowReturn(brrt, brrt.GetOrder());
					if (succ)
					{
						++i;
						bool c1 = tmp.RemoveBy<string>(EqualOrder, mOrder);
						LBR.UpdateVal(tmpBR, brrt);
					}
				}
				else
				{

					earseRow(pS.y);
					gotoxy(pS.x, pS.y);
				}
				system("cls");
				ShowBorrowReturn(tmp);
			}
			system("cls");
			ShowBorrowReturn(tmp);
			cout << "\nPress any key to continue.\n";
			cin.ignore(); cin.get();
			goto X;
			break;
		}
		case 9:
			system("cls");
			goto X;
			break;
		case 10:
			showFinish();
			exit(0);
		}
	} while (1);
}