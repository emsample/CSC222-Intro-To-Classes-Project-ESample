#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
	Date d1;     //default state
	Date d2(12, 25, 2026);  //valid date   
	Date d3(13, 23, 1963); //invalid month
	Date d4(5, 77, 1483); // invalid day
	Date d5(3, 14, -20); //invalid year
	Date d6(2, 29, 1783); //invaliud leap
	Date d7(2, 29, 1648); //valid leap
	Date d8(2, 29, 1900); //invalid leap deep
	Date d9(2, 29, 2000); //valid leap deeper

	cout << "Date 1 default state:\n" << d1.dateFormat()
}