#include "Date.h"
#include <iostream>

Date::Date(int m = 1, int d = 1, int y = 1900)
{
	
}
void Date::setDate(int m, int d, int y)
{
	if (m < 1 || m > 12 || d < 1 || d < lastDay(month, year) || y < 1)
	{

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