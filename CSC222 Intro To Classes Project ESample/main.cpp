#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
	Date d1;     //default state
	
	Date d2(12, 25, 2026);  //valid date   
	Date d3(8,31,1984);//valid end of month
	Date d4(2, 29, 2000); //valid leap deeper
	

	Date d5(13, 23, 1963); //invalid month
	Date d6(5, 77, 1483); // invalid day
	Date d7(3, 14, -20); //invalid year
	Date d8(2, 29, 1783); //invalid leap
	Date d9(2, 29, 1900); //invalid leap deep
	Date d10(6, 31, 2013); //invalid last day
	

	//Inpute tests
	cout << "constructor tests\n" << endl;
	cout << "Date 1 default state:\n" << d1.dateFormat() << endl << "Leap year: " << (d1.isLeapYear() ? "Yes" : "No") << "Day count of month: " << d1.lastDay() << endl << endl;
	cout << "Accessor test with our Date #1" << endl;
	cout << "Month: " << d1.getMonth() << endl;
	cout << "Day: " << d1.getDay() << endl;
	cout << "Year: " << d1.getYear() << endl << endl;
	cout << "Date 2 valid date:\n" << d2.dateFormat() << endl << "Leap year: " << (d2.isLeapYear() ? "Yes" : "No") << "Day count of month: " << d2.lastDay() << endl << endl;
	cout << "Accessor test with our Date #2" << endl;
	cout << "Month: " << d2.getMonth() << endl;
	cout << "Day: " << d2.getDay() << endl;
	cout << "Year: " << d2.getYear() << endl << endl;
	cout << "Date 3 valid date:\n" << d3.dateFormat() << endl << "Leap year: " << (d3.isLeapYear() ? "Yes" : "No") << "Day count of month: " << d3.lastDay() << endl << endl;
	cout << "Accessor test with our Date #3" << endl;
	cout << "Month: " << d3.getMonth() << endl;
	cout << "Day: " << d3.getDay() << endl;
	cout << "Year: " << d3.getYear() << endl << endl;
	cout << "Date 4 valid leap:\n" << d4.dateFormat() << endl << "Leap year: " << (d4.isLeapYear() ? "Yes" : "No") << "Day count of month: " << d4.lastDay() << endl << endl;
	cout << "Accessor test with our Date #4" << endl;
	cout << "Month: " << d4.getMonth() << endl;
	cout << "Day: " << d4.getDay() << endl;
	cout << "Year: " << d4.getYear() << endl << endl;
	cout << "Date 5 invalid month:\n" << d5.dateFormat() << endl << "Leap year: " << (d5.isLeapYear() ? "Yes" : "No") << "Day count of month: " << d5.lastDay() << endl << endl;
	cout << "Accessor test with our Date #5" << endl;
	cout << "Month: " << d5.getMonth() << endl;
	cout << "Day: " << d5.getDay() << endl;
	cout << "Year: " << d5.getYear() << endl << endl;
	cout << "Date 6 invalid day:\n" << d6.dateFormat() << endl << "Leap year: " << (d6.isLeapYear() ? "Yes" : "No") << "Day count of month: " << d6.lastDay() << endl << endl;
	cout << "Accessor test with our Date #6" << endl;
	cout << "Month: " << d6.getMonth() << endl;
	cout << "Day: " << d6.getDay() << endl;
	cout << "Year: " << d6.getYear() << endl << endl;
	cout << "Date 7 invalid year:\n" << d7.dateFormat() << endl << "Leap year: " << (d7.isLeapYear() ? "Yes" : "No") << "Day count of month: " << d7.lastDay() << endl << endl;
	cout << "Accessor test with our Date #7" << endl;
	cout << "Month: " << d7.getMonth() << endl;
	cout << "Day: " << d7.getDay() << endl;
	cout << "Year: " << d7.getYear() << endl << endl;
	cout << "Date 8 invalid leap:\n" << d8.dateFormat() << endl << "Leap year: " << (d8.isLeapYear() ? "Yes" : "No") << "Day count of month: " << d8.lastDay() << endl << endl;
	cout << "Accessor test with our Date #8" << endl;
	cout << "Month: " << d8.getMonth() << endl;
	cout << "Day: " << d8.getDay() << endl;
	cout << "Year: " << d8.getYear() << endl << endl;
	cout << "Date 9 invalid leap:\n" << d9.dateFormat() << endl << "Leap year: " << (d9.isLeapYear() ? "Yes" : "No") << "Day count of month: " << d9.lastDay() << endl << endl;
	cout << "Accessor test with our Date #9" << endl;
	cout << "Month: " << d9.getMonth() << endl;
	cout << "Day: " << d9.getDay() << endl;
	cout << "Year: " << d9.getYear() << endl << endl;
	cout << "Date 10 invalid last day:\n" << d10.dateFormat() << endl << "Leap year: " << (d10.isLeapYear() ? "Yes" : "No") << "Day count of month: " << d10.lastDay() << endl << endl;
	cout << "Accessor test with our Date #4" << endl;
	cout << "Month: " << d10.getMonth() << endl;
	cout << "Day: " << d10.getDay() << endl;
	cout << "Year: " << d10.getYear() << endl << endl;

	//set date tests

	cout << "Mutator Tests" << endl;
	cout << "Valid" << endl;
	d2.setDate(2, 28, 2028);
	cout << "Month: " << d2.getMonth() << endl;
	cout << "Day: " << d2.getMonth() << endl;
	cout << "Year: " << d2.getMonth() << endl << endl;
	cout << "Date 2 valid date:\n" << d2.dateFormat() << endl << endl;

	cout << "--------------------------------------------------------------------------------------------" << endl;
	cout << "Invalid" << endl;
	d2.setDate(2, 28, 1900);
	cout << "Month: " << d2.getMonth() << endl;
	cout << "Day: " << d2.getMonth() << endl;
	cout << "Year: " << d2.getMonth() << endl << endl;
	cout << "Date 2 valid date:\n" << d2.dateFormat() << endl << endl;

	//overload functions test
	cout << "Testing overloaded functions:\n" << endl;
	cout << "isLeapYear(2000): " << (d9.isLeapYear(2000) ? "Yes" : "No") << endl;
	cout << "isLeapYear(1900): " << (d9.isLeapYear(1900) ? "Yes" : "No") << endl;
	cout << "isLeapYear(2024): " << (d9.isLeapYear(2024) ? "Yes" : "No") << endl;
	cout << "lastDay(2, 2024): " << d9.lastDay(2, 2024) << endl;
	cout << "lastDay(2, 2023): " << d9.lastDay(2, 2023) << endl;
	cout << "lastDay(4, 2025): " << d9.lastDay(4, 2025) << endl;
	cout << "lastDay(12, 2025): " << d9.lastDay(2, 1700) << endl;
	cout << "lastDay(12, 2025): " << d9.lastDay(2, 1600) << endl;
	cout << "lastDay(12, 2025): " << d9.lastDay(12, 2025) << endl;
	
	return 0;

}