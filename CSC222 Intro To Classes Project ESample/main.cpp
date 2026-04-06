#ifndef DATE_H
#define DATE_H

#include <string>
using namespace std; 

class Date 
{
public: 
	Date(int m = 1, int d = 1, int y = 1900);
	int getMonth() const;
	int getDay() const;
	int getYear() const;
	bool isLeapYear() const;
	bool isLeapYear(int year) const;
	int lastDay() const;
	int lastDay(int month, int year) const;
private:
	int month;
	int day;
	int year;
};
#endif