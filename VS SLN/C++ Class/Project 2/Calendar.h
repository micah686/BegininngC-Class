//Calendar.h
#pragma once
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <string>

class Calendar
{
private:
	//Static members





	int day;
	std::string day_of_week = "";
	std::string month = "";
	int month_int;
	int year;
	std::string full_date = "";


	


public:



	//my setters
	

	void set_day(int);
	void set_month(std::string);
	void set_year(int);
	void add_days(int);







	//my getters
	
	std::string Get_date();


	
	std::string get_month();




	//////////working function
	void Cal_Code();
	void Month_Check();
	void Day_calc();
	void Day_Check();




	//constructors
	Calendar();
	~Calendar();
};



