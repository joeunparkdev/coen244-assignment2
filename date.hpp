//JOEUN PARK 40066406, JONAH DORANT 21313339 section W
#ifndef DATE_HPP
#define DATE_HPP
#include <iostream>

class Date
{
private:
	int day;
	int month;
	int year;

public:
	Date()
	{
		day = 21;
		month = 1;
		year = 1989;
	}
	Date(int d, int m, int y)
	{
		day = d;
		month = m;
		year = y;

		if (day > 30) {
			day = 1;
			month += 1;
		}
		if (month > 12) {
			month = 1;
			year += 1;
		}
	}

	bool equal(Date date) {
		return this->day == date.day
		&& this->month == date.month
		&& this->year == date.year;
	}
	bool isBiggerThan(Date date) {
		int left = this->day + this->month * 30 + this->year * 365;
		int right = date.day + date.month * 30 + date.year * 365;
		return left > right;
	}

	~Date()
	{
		std::cout << "Destructing Date" << std::endl;
	}

	void printDate()
	{
		std::cout << day << "-" << month << "-" << year << std::endl;
	}
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	void setDate(int d, int m, int y)
	{
		day = d;
		month = m;
		year = y;
	}
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	int getDay() const
	{
		return day;
	}
	int getMonth() const
	{
		return month;
	}
	int getYear() const
	{
		return year;
	}
};

#endif // DATE_HPP