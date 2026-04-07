#include "Date.h"
#include <iostream>
#include <iomanip>
#include <sstream>

Date::Date(int m = 1, int d = 1, int y = 1900)
{
	setDate(m, d, y);
}
void Date::setDate(int m, int d, int y)
{
	if (month < 1 || month > 12 || day < 1 || day < lastDay(month, year) || year < 1)
	{
		month = m;
		day = d;
		year = y; 
	}

}
int Date::getMonth() const
{
	return month;
}
int Date::getDay() const
{
	return day;
}
int Date::getYear() const
{
	return year;
}
int Date::lastDay() const
{
	lastDay(month, year);
}
int Date::lastDay(int month, int year) const
{
	if (month == 2)
	{
		if (!isLeapYear(year))
		{
			return 28;
		}
		else
		{
			return 29;
		}
	}
	else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
	{
		return 31;
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		return 30;
	}
}
bool Date::isLeapYear() const
{
	isLeapYear(year);
}
bool Date::isLeapYear(int year) const
{
	if (year % 100 == 0 && year % 400 != 0)
		return false;
	else if (year % 4 == 0)
		return true;
	else
		return false;
}
string Date::dateFormat(int month, int day, int year)
{
	string monthname[12] = { "January", "February", "March", "April",
		"May", "June", "July", "August",
		"September", "October", "November", "December" };
	stringstream dateprint;
	dateprint << setw(2) << setfill('0') << month << '/' << setw(2) << setfill('0') << day << '/' << setw(2) << setfill('0') << year << endl
		<< monthname[month] << setw(2) << setfill('0') << day << ', ' << setw(2) << setfill('0') << year << endl
		<< setw(2) << setfill('0') << day << monthname[month] << setw(2) << setfill('0') << year;
	return dateprint.str();
}