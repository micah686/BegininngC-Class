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
	Day_Check();
}



/*=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
Getters
=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-*/


////////

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
			std::cin.get();
			exit(NULL);
		}
	}
	if (month == "February")
	{
		std::cout << "February \n";
		if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))//if year is every 4 years, but not the 100th year
		{
			days_in_month[1] = 29;//changes to 29 days for leap years
			if (day < 1 || day >28)
			{
				std::cout << "not a valid day \n";
				std::cin.get();
				exit(NULL);
			}
		}
		if (day < 1 || day >29)
		{
			std::cout << "not a valid day \n";
			std::cin.get();
			exit(NULL);
		}
		
	}
	if (month == "March")
	{
		if (day < 1 || day >31)
		{
			std::cout << "not a valid day \n";
			std::cin.get();
			exit(NULL);
		}
	}
	if (month == "April")
	{
		if (day < 1 || day >30)
		{
			std::cout << "not a valid day \n";
			std::cin.get();
			exit(NULL);
		}
	}
	if (month == "May")
	{
		if (day < 1 || day >31)
		{
			std::cout << "not a valid day \n";
			std::cin.get();
			exit(NULL);
		}
	}
	if (month == "June")
	{
		if (day < 1 || day >30)
		{
			std::cout << "not a valid day \n";
			std::cin.get();
			exit(NULL);
		}
	}
	if (month == "July")
	{
		if (day < 1 || day >31)
		{
			std::cout << "not a valid day \n";
			std::cin.get();
			exit(NULL);
		}
	}
	if (month == "August")
	{
		if (day < 1 || day >31)
		{
			std::cout << "not a valid day \n";
			std::cin.get();
			exit(NULL);
		}
	}
	if (month == "September")
	{
		if (day < 1 || day >30)
		{
			std::cout << "not a valid day \n";
			std::cin.get();
			exit(NULL);
		}
	}
	if (month == "October")
	{
		if (day < 1 || day >31)
		{
			std::cout << "not a valid day \n";
			std::cin.get();
			exit(NULL);
		}
	}
	if (month == "November")
	{
		if (day < 1 || day >30)
		{
			std::cout << "not a valid day \n";
			std::cin.get();
			exit(NULL);
		}
	}
	if (month == "December")
	{
		if (day < 1 || day >31)
		{
			std::cout << "not a valid day \n";
			std::cin.get();
			exit(NULL);
		}
	}
	
		
	
}



void Calendar::Month_Check()
{
	int days_in_month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (month == "January")
	{
		month_int = 1;
		
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
		
	}
	if (month == "April")
	{
		month_int = 4;
		
	}
	if (month == "May")
	{
		month_int = 5;
		
	}
	if (month == "June")
	{
		month_int = 6;
		
	}
	if (month == "July")
	{
		month_int = 7;
		
	}
	if (month == "August")
	{
		month_int = 8;
		
	}
	if (month == "September")
	{
		month_int = 9;
		
	}
	if (month == "October")
	{
		month_int = 10;
		
	}
	if (month == "November")
	{
		month_int = 11;
		
	}
	if (month == "December")
	{
		month_int = 12;
		
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
	int y = year;
	
	
	int foo = (d + y + y / 4 - y / 100 + y / 400 + (31 * m / 12)) & 7;
	//foo = foo - 1;
	/*int foo = (d + m + y + (y / 4) + c) % 7;*/

	///cout << "foo is: " + days[foo];


	if (foo == 1)
	{
		day_of_week = days[foo];
	}
	else if (foo == 2)
	{
		day_of_week = days[foo];
	}
	else if (foo==3)
	{
		day_of_week = days[foo];
	}
	else if (foo == 4)
	{
		day_of_week = days[foo];
	}
	else if (foo == 5)
	{
		day_of_week = days[foo];
	}
	else if (foo == 6)
	{
		day_of_week = days[foo];
	}
	else if (foo == 7)
	{
		day_of_week = days[foo];
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