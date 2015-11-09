#include "Calendar.h"
#include <string.h>
using namespace std;

bool add_sub_days = false;
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
	Month_Check();
}

void Calendar::set_day(int d)
{
	
	day = d;
	Day_Check();
	Day_calc();
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

std::string Calendar::Get_date()
{
	full_date = "the day is: " + month + " " + std::to_string(day) + " " + std::to_string(year) + " on a " + day_of_week +"\n";
	cout << full_date;
	return full_date;
}

/*=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
Functions
=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-*/


void Calendar::Day_Check()
{
	int days_in_month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (month == "January")
	{
		if (day < 1 || day >31)
		{
			std::cout << "not a valid day \n";
			exit(NULL);
		}
	}
	if (month == "February")
	{
		std::cout << "February \n";
		if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
		{
			days_in_month[1] = 29;//changes to 29 days for leap years
			if (day < 1 || day >28)
			{

			}
		}
		if (day < 1 || day >29)
		{

		}
		
	}
	if (month == "March")
	{
		if (day < 1 || day >31)
		{

		}
	}
	if (month == "April")
	{
		if (day < 1 || day >30)
		{

		}
	}
	if (month == "May")
	{
		if (day < 1 || day >31)
		{

		}
	}
	if (month == "June")
	{
		if (day < 1 || day >30)
		{

		}
	}
	if (month == "July")
	{
		if (day < 1 || day >31)
		{

		}
	}
	if (month == "August")
	{
		if (day < 1 || day >31)
		{

		}
	}
	if (month == "September")
	{
		if (day < 1 || day >30)
		{

		}
	}
	if (month == "October")
	{
		if (day < 1 || day >31)
		{

		}
	}
	if (month == "November")
	{
		if (day < 1 || day >30)
		{

		}
	}
	if (month == "December")
	{
		if (day < 1 || day >31)
		{

		}
	}
	
		
	
}



void Calendar::Month_Check()
{
	int days_in_month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (month == "January")
	{
		month_int = 1;
		std::cout << "January \n";
	}
	if (month == "February")
	{
		std::cout << "February \n";
		if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
			days_in_month[1] = 29;//changes to 29 days for leap years
		month_int = 2;
	}
	if (month == "March")
	{
		month_int = 3;
		std::cout << "March \n";
	}
	if (month == "April")
	{
		month_int = 4;
		cout << "April \n";
	}
	if (month == "May")
	{
		month_int = 5;
		cout << "May \n";
	}
	if (month == "June")
	{
		month_int = 6;
		cout << "June \n";
	}
	if (month == "July")
	{
		month_int = 7;
		cout << "July \n";
	}
	if (month == "August")
	{
		month_int = 8;
		cout << "August \n";
	}
	if (month == "September")
	{
		month_int = 9;
		cout << "September \n";
	}
	if (month == "October")
	{
		month_int = 10;
		cout << "October \n";
	}
	if (month == "November")
	{
		month_int = 11;
		cout << "November \n";
	}
	if (month == "December")
	{
		month_int = 12;
		cout << "December \n";
	}
	/*else
	{
		std::cout << "not a valid date! \n";
		exit(NULL);
	}*/


}

void Calendar::Day_calc()
{
	//formula is (d+m+y+(y/4)+c)mod7
	std::string days[7] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
	int d = day;
	int m = month_int;
	int y = year - 2000;
	int c = 2000;
	int foo = (d + m + y + (y / 4) + c) % 7;

	cout << "foo is: " + foo;

	if (foo == 1)
	{
		month = days[foo];
	}
	else if (foo == 2)
	{
		month = days[foo];
	}
	else if (foo==3)
	{
		month = days[foo];
	}
	else if (foo == 4)
	{
		month = days[foo];
	}
	else if (foo == 5)
	{
		month = days[foo];
	}
	else if (foo == 6)
	{
		month = days[foo];
	}
	else if (foo == 7)
	{
		month = days[foo];
	}
}


void Calendar::Cal_Code()
{
	int days_in_month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	std::string days[7] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday",	"Friday", "Saturday" };
	//std::string months[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	int months[12] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };

	if (add_sub_days == true)
	{

	}

	Month_Check();
	Day_calc();
	Day_Check();

	
	cout << "the day is: " + month + "" + std::to_string(day) + "" + std::to_string(year) + "on a " + day_of_week;
	



}