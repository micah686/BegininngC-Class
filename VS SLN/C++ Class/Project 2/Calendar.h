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
	int first_day_of_month;
	std::string month = "";
	int year;
	std::string full_date = "";


	double ctf;


public:



	//my setters
	void setCtf(double);

	void set_day(int);
	void set_month(std::string);
	void set_year(int);
	void add_days(int);







	//my getters
	double getCtf();


	
	std::string get_month();




	//////////working function
	void Cal_Code();





	//constructors
	Calendar();
	~Calendar();
};



