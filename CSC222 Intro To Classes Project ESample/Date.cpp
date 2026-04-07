#include "Date.h"
#include <iostream>
#include <iomanip>
#include <sstream>

Date::Date(int m, int d, int y)
{
	setDate(m, d, y);
}
void Date::setDate(int m, int d, int y)
{
	month = m;
	day = d;
	year = y;
	if (m < 1 || m > 12 || d < 1 || d > lastDay() || y < 1 || y > 9999)
	{
		month = 1;
		day = 1;
		year = 1900; 
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
	return lastDay(month, year);
}
int Date::lastDay(int month, int year) const
{
	if (month == 2)
	{
		if (!isLeapYear())
		{
			return 28;
		}
		else
		{
			return 29;
		}
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		return 30;
	}
	else
	{
		return 31;
	}
}
bool Date::isLeapYear() const
{
	if (!isLeapYear(year))
	{
		return false;
	}
	else
	{
		return true;
	}
	;

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
string Date::dateFormat() const
{
	string monthname[12] = { "January", "February", "March", "April",
		"May", "June", "July", "August",
		"September", "October", "November", "December" };
	stringstream dateprint;
	dateprint << setw(2) << setfill('0') << month << '/' << setw(2) << setfill('0') << day << '/' << setw(4) << setfill('0') << year << endl
		<< monthname[month-1] << " " << setw(2) << setfill('0') << day << ", " << setw(4) << setfill('0') << year << endl
		<< setw(2) << setfill('0') << day << " " << monthname[month - 1] << " " << setw(4) << setfill('0') << year;
	return dateprint.str();
}