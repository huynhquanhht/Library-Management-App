#pragma once
#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
	string CodeStudent;
	string NameStudent;
	string Faculty;
	string Class;
	string PhoneNumber;
public:
	Student();
	Student(string, string, string, string, string);
	~Student();
	string GetCodeStudent();
	string GetNameStudent();
	string GetFaculty();
	string GetClass();
	string GetPhoneNumber();
	friend ostream& operator<<(ostream&, const Student&);
	friend istream& operator>>(istream& is, Student&);
	friend bool operator!=(const Student&, const Student&);
	friend bool operator==(const Student&, const Student&);
	friend bool operator<(const Student&, const Student&);
	friend bool operator>(const Student&, const Student&);
	friend bool operator<=(const Student&, const Student&);
	friend bool operator>=(const Student&, const Student&);
};
Student::Student() :CodeStudent(""), NameStudent(""), Faculty(""), Class(""), PhoneNumber("") { }
inline Student::Student(string mCodeStudent, string mNameStudent, string mFaculty, string mClass, string mPhoneNumber) : CodeStudent(mCodeStudent), NameStudent(mNameStudent), Faculty(mFaculty), Class(mClass), PhoneNumber(mPhoneNumber) { }
inline Student::~Student() {  }
string Student::GetCodeStudent() { return this->CodeStudent; }
string Student::GetNameStudent() { return this->NameStudent; }
string Student::GetFaculty() { return this->Faculty; }
string Student::GetClass() { return this->Class; }
string Student::GetPhoneNumber() { return this->PhoneNumber; }
inline ostream& operator<<(ostream& os, const Student& S)
{
	cout << "\n---------------- STUDENT IMFORMATION ----------------- ";
	os << "\nCode student: " << S.CodeStudent;
	os << "\nName: " << S.NameStudent;
	os << "\nFaculty: " << S.Faculty;
	os << "\nClass: " << S.Class;
	os << "\nPhone_Number: " << S.PhoneNumber;
	return os;
	//os << s.CodeStudent << " " << s.NameStudent << " " << s.Faculty << " " << s.Class << " " << s.PhoneNumber;
	return os;
}
inline istream& operator>>(istream& is, Student& S)
{
	if (S.CodeStudent.length() == 0) {
		cout << "\nEnter code student: ";
		getline(std::cin >> std::ws, S.CodeStudent);
	}
	cout << "Enter name: ";
	getline(std::cin >> std::ws, S.NameStudent);
	cout << "Enter Faculty: ";
	getline(std::cin >> std::ws, S.Faculty);
	cout << "Enter class: ";
	getline(std::cin >> std::ws, S.Class);
	cout << "Enter phone number: ";
	getline(std::cin >> std::ws, S.PhoneNumber);
	return is;
}
inline bool operator!=(const Student& s1, const Student& s2)
{
	return (s1.Class != s2.Class || s1.CodeStudent != s2.CodeStudent || s1.Faculty != s2.Faculty || s1.NameStudent != s2.NameStudent || s1.PhoneNumber != s2.PhoneNumber);
}
inline bool operator==(const Student& s1, const Student& s2)
{
	return (s1.Class == s2.Class && s1.CodeStudent == s2.CodeStudent && s1.Faculty == s2.Faculty && s1.NameStudent == s2.NameStudent && s1.PhoneNumber == s2.PhoneNumber);
}
inline bool operator<(const Student& s1, const Student& s2)
{
	return ((s1.CodeStudent < s2.CodeStudent) || (s1.CodeStudent == s2.CodeStudent && s1.NameStudent < s2.NameStudent) || (s1.CodeStudent == s2.CodeStudent && s1.NameStudent == s2.NameStudent && s1.Class < s2.Class) || (s1.CodeStudent == s2.CodeStudent && s1.NameStudent == s2.NameStudent && s1.Class == s2.Class && s1.Faculty < s2.Faculty) || (s1.CodeStudent == s2.CodeStudent && s1.NameStudent == s2.NameStudent && s1.Class == s2.Class && s1.Faculty == s2.Faculty && s1.PhoneNumber < s2.PhoneNumber));
}
inline bool operator>(const Student& s1, const Student& s2)
{
	return ((s1.CodeStudent > s2.CodeStudent) || (s1.CodeStudent == s2.CodeStudent && s1.NameStudent > s2.NameStudent) || (s1.CodeStudent == s2.CodeStudent && s1.NameStudent == s2.NameStudent && s1.Class > s2.Class) || (s1.CodeStudent == s2.CodeStudent && s1.NameStudent == s2.NameStudent && s1.Class == s2.Class && s1.Faculty > s2.Faculty) || (s1.CodeStudent == s2.CodeStudent && s1.NameStudent == s2.NameStudent && s1.Class == s2.Class && s1.Faculty == s2.Faculty && s1.PhoneNumber > s2.PhoneNumber));
}
inline bool operator<=(const Student& s1, const Student& s2)
{
	return ((s1.CodeStudent <= s2.CodeStudent) || (s1.CodeStudent == s2.CodeStudent && s1.NameStudent <= s2.NameStudent) || (s1.CodeStudent == s2.CodeStudent && s1.NameStudent == s2.NameStudent && s1.Class <= s2.Class) || (s1.CodeStudent == s2.CodeStudent && s1.NameStudent == s2.NameStudent && s1.Class == s2.Class && s1.Faculty <= s2.Faculty) || (s1.CodeStudent == s2.CodeStudent && s1.NameStudent == s2.NameStudent && s1.Class == s2.Class && s1.Faculty == s2.Faculty && s1.PhoneNumber <= s2.PhoneNumber));
}
inline bool operator>=(const Student& s1, const Student& s2)
{
	return ((s1.CodeStudent >= s2.CodeStudent) || (s1.CodeStudent == s2.CodeStudent && s1.NameStudent >= s2.NameStudent) || (s1.CodeStudent == s2.CodeStudent && s1.NameStudent == s2.NameStudent && s1.Class >= s2.Class) || (s1.CodeStudent == s2.CodeStudent && s1.NameStudent == s2.NameStudent && s1.Class == s2.Class && s1.Faculty >= s2.Faculty) || (s1.CodeStudent == s2.CodeStudent && s1.NameStudent == s2.NameStudent && s1.Class == s2.Class && s1.Faculty == s2.Faculty && s1.PhoneNumber >= s2.PhoneNumber));
}