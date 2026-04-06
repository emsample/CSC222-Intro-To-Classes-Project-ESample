#include "Date.h"
#include <iostream>

Date::Date(int m = 1, int d = 1, int y = 1900)
{

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