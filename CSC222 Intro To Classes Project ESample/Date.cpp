#include "Date.h"
#include <iostream>

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
int lastDay(int month, int year)
{
	if (month == 2)
	{
		if (!isLeapyear())
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
	else if (month == 4 || month == 6 || month == 9 || month == 11 || )
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

}