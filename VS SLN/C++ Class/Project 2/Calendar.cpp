#include "Calendar.h"
#include <string.h>
using namespace std;
/*=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
Constructors Destructors!
=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-*/

Calendar::Calendar()
{
}

Calendar::~Calendar()
{
	std::cout << "Calling Destructor";
}


/*=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
SETTERS
=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-*/




/////////
void Calendar::setCtf(double c)
{
	ctf = c;
}





void Calendar::set_month(std::string m)
{
	month = m;
	Cal_Code;
}

void Calendar::set_day(int d)
{
	day = d;
}

void Calendar::set_year(int y)
{
	year = y;
}

void Calendar::add_days(int add)
{
	add_sub_days = true;
	day = day + add;///////////////////WORK ON THIS
}



/*=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
Getters
=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-*/


////////
double Calendar::getCtf()
{
	return (ctf*1.8) + 32;
}


/*=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
Functions
=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-*/

bool add_sub_days = false;
void Calendar::Cal_Code()
{
	int days_in_month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	std::string days[7] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday",	"Friday", "Saturday" };
	std::string months[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

	if (add_sub_days == true)
	{

	}


	/////
	//monthcheck//
	////

	if (month == "January")
	{
		std::cout << "January \n";
	}
	if (month == "February")
	{
		std::cout << "February \n";
		if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
			days_in_month[1] = 29;//changes to 29 days for leap years
	}
	if (month == "March")
	{
		std::cout << "March \n";
	}
	if (month == "April")
	{
		cout << "April \n";
	}
	if (month == "May")
	{
		cout << "May \n";
	}
	if (month == "June")
	{
		cout << "June \n";
	}
	if (month == "July")
	{
		cout << "July \n";
	}
	if (month == "August")
	{
		cout << "August \n";
	}
	if (month == "September")
	{
		cout << "September \n";
	}
	if (month == "October")
	{
		cout << "October \n";
	}
	if (month == "November")
	{
		cout << "November \n";
	}
	if (month == "December")
	{
		cout << "December \n";
	}
	else
	{
		std::cout << "not a valid date! \n";
		exit(NULL);
	}



}