#pragma once
#include<iostream>
#include<string>
using namespace std;
class Dates
{
private:
	int Day;
	int Month;
	int Year;
public:
	Dates();
	Dates(const Dates&);
	Dates(int, int, int);
	~Dates();
	friend ostream& operator<< (ostream&, const Dates&);
	friend istream& operator>> (istream&, Dates&);
	friend bool  operator>= (const Dates&, const Dates&);
	friend bool  operator> (const Dates&, const Dates&);
	friend bool  operator<= (const Dates&, const Dates&);
	friend bool  operator< (const Dates&, const Dates&);
	friend bool  operator== (const Dates&, const Dates&);
	friend bool  operator!= (const Dates&, const Dates&);
	Dates& operator=(const Dates&);
	bool  LeapYear(Dates&);
	bool  IsDay(Dates&);
	int  DistanceOfDay(Dates&, Dates&);
	int  CountDay(Dates&);
	friend int Check_Exception_Dates(Dates& d);

	int GetDay();
	int GetMonth();
	int GetYear();
	Dates GetDates();

	void setDay(int);
	void setMonth(int);
	void setYear(int);
	void setDates(Dates);
	void setDates(int dd, int mm, int yy);
};

Dates::Dates() :Day(0), Month(0), Year(0) {}
Dates::Dates(const Dates& d) : Day(d.Day), Month(d.Month), Year(d.Year) {}
Dates::Dates(int d, int m, int y) : Day(d), Month(m), Year(y) {}
Dates::~Dates() {}

inline bool  operator>=(const Dates& d1, const Dates& d2)
{
	if (d1.Year > d2.Year) return 1;
	if (d1.Year < d2.Year) return 0;
	if (d1.Year == d2.Year)
	{
		if (d1.Month > d2.Month) return 1;
		if (d1.Month < d2.Month) return 0;
		if (d1.Month == d2.Month)
		{
			if (d1.Day > d2.Day) return 1;
			if (d1.Day < d2.Day) return 0;
			return 1;
		}
	}
	return 0;
}
inline bool  operator>(const Dates& d1, const Dates& d2)
{
	if (d1.Year > d2.Year) return 1;
	if (d1.Year < d2.Year) return 0;
	if (d1.Year == d2.Year)
	{
		if (d1.Month > d2.Month) return 1;
		if (d1.Month < d2.Month) return 0;
		if (d1.Month == d2.Month)
		{
			if (d1.Day > d2.Day) return 1;
			if (d1.Day < d2.Day) return 0;
			return 0;
		}
	}
	return 0;
}
inline bool  operator<=(const Dates& d1, const Dates& d2)
{
	if (d1.Year < d2.Year) return 1;
	if (d1.Year > d2.Year) return 0;
	if (d1.Year == d2.Year)
	{
		if (d1.Month < d2.Month) return 1;
		if (d1.Month > d2.Month) return 0;
		if (d1.Month == d2.Month)
		{
			if (d1.Day < d2.Day) return 1;
			if (d1.Day > d2.Day) return 0;
			return 1;
		}
	}
}
inline bool operator<(const Dates& d1, const Dates& d2)
{
	if (d1.Year < d2.Year) return 1;
	if (d1.Year > d2.Year) return 0;
	if (d1.Year == d2.Year)
	{
		if (d1.Month < d2.Month) return 1;
		if (d1.Month > d2.Month) return 0;
		if (d1.Month == d2.Month)
		{
			if (d1.Day < d2.Day) return 1;
			if (d1.Day > d2.Day) return 0;
			return 0;
		}
	};
	return 0;
}
inline bool operator==(const Dates& d1, const Dates& d2)
{
	return (d1.Year == d2.Year && d1.Month == d2.Month && d1.Day == d2.Day);
}
inline bool operator!=(const Dates& d1, const Dates& d2)
{
	return (d1.Year != d2.Year || d1.Month != d2.Month || d1.Day != d2.Day);
}
ostream& operator<<(ostream& out, const Dates& d)
{
	out << d.Day << "/" << d.Month << "/" << d.Year;
	return out;
}
istream& operator>>(istream& in, Dates& d)
{
	int check = 0;
	do {
		std::cout << " Enter Day: "; in >> d.Day;
		std::cout << " Enter Month: "; in >> d.Month;
		std::cout << " Enter Year: "; in >> d.Year;
		try {
			check = Check_Exception_Dates(d);
		}
		catch (char const* e)
		{
			std::cout << e << endl << " Enter again!" << endl;
		};
	} while (check == 0);
	return in;
}
Dates& Dates::operator=(const Dates& D)
{
	this->Day = D.Day;
	this->Month = D.Month;
	this->Year = D.Year;
	return *this;
}
bool Dates::LeapYear(Dates& d)
{
	if ((d.Year % 4 == 0) && (d.Year % 100 != 0) || (d.Year % 400 == 0))
		return 1;
	else return 0;
}
// 0 chi Day sai // 1 dúng
bool Dates::IsDay(Dates& d)
{
	if (d.Month < 1 || d.Month > 12)
		return 0;
	if (d.Day < 1 || d.Day > 31)
		return 0;
	if (d.Month == 2)
	{
		if (LeapYear(d))
		{
			if (d.Day > 29)
				return 0;
		}
		else
		{
			if (d.Day > 28)
				return 0;
		}
	}
	if ((d.Month == 4 || d.Month == 6 || d.Month == 9 || d.Month == 11) && (d.Day > 30))
	{
		return 0;
	}
	return 1;
}
int Dates::DistanceOfDay(Dates& d1, Dates& d2)
{
	if (d1 >= d2)
		return (CountDay(d1) - CountDay(d2));
	else
		std::cout << " Day1 must be greater than Day2.\n";
	return 0;
}
int Dates::CountDay(Dates& d)
{
	if (d.Month < 3) {
		d.Year--;
		d.Month += 12;
	}
	return 365 * d.Year + d.Year / 4 - d.Year / 10 + d.Year / 400 + (153 * d.Month - 457) / 5 + d.Day - 306;
}
inline int Dates::GetDay()
{
	return Day;
}
inline int Dates::GetMonth()
{
	return Month;
}
inline int Dates::GetYear()
{
	return Year;
}
inline Dates Dates::GetDates()
{
	return *this;
}
inline void Dates::setDay(int  mDay)
{
	Day = mDay;
}
inline void Dates::setMonth(int mMonth)
{
	Month = mMonth;
}
inline void Dates::setYear(int mYear)
{
	Year = mYear;
}
inline void Dates::setDates(Dates mDates)
{
	*this = mDates;
}

inline void Dates::setDates(int dd, int mm, int yy)
{
	this->setDay(dd);
	this->setMonth(mm);
	this->setYear(yy);
}
int Check_Exception_Dates(Dates& d)
{
	std::cout << endl;
	if (d.IsDay(d) != 0)
		return 1;
	else
		throw " Invalid day.\n!";
}

