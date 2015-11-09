#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include "Conversion.h"
#include "Calendar.h"

using namespace std;


void read_numbers_from_file()
{
	string line;
	ifstream readMyfile;

	int linenumber = 0;
	int test = 0;


	readMyfile.open("example.txt");

	if (readMyfile.is_open()) {
		while (getline(readMyfile, line)) {
			//cout << line << '\n';			

			linenumber = std::stoi(line);
			test = test + linenumber;
		}
	}
	else {
		cout << "Couldn't open the file...";
	}
}




void multiples()
{
	int sum = 0;//set initial sum to zero
	for (int i = 0; i < 1000; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)//if the multiple is 3 or 5
			sum = sum + i; //set sum equals to current sum plus multiple
	}
	cout << sum;
}










int main(int argc, char *arg[]){

	/*
	Calendar * bleh = new Calendar();
	bleh->set_month("January");
	bleh->set_year(2015);
	bleh->set_day(1);
	bleh->add_days(5);
	
	bleh->Get_date();*/




	char choice;
	cout << "Press 1 to run read from a file, 2 to run conversions,\n";
	cout << "3 to get sum of variables, 4 to get the date,\n";
	cout << "or press q to quit: \n";
	cin >> choice;

	if (choice == '1')
	{
		read_numbers_from_file();

	}
	else if (choice == '2')
	{
		Convert * test = new Convert();
		test->setCtf(50);
		cout << "celcius to farenheight is: " << test->getCtf()<<endl;
		test->setCtk(-50);
		cout << "kelvin is: " << test->getCtk() << endl;
		test->setFtk(50);
		cout << "kelvin is: " << test->getFtk() << endl;
	}
	else if (choice == '3')
	{
		multiples();
	}
	else if (choice == '4')
	{
		int day;
		std::string month = "";
		int year;
		cout << "\nPlease enter a year: ";
		cin >> year;
		cout << "\n Please enter a month, such as May: ";
		cin >> month;
		cout << "\n Please enter a day: ";
		cin >> day;

		Calendar * calender_var = new Calendar();
		calender_var->set_month(month);
		calender_var->set_year(year);
		calender_var->set_day(day);
		calender_var->Get_date();
		std::cin.get();

	}
	else if (choice == 'q')
	{

	}




	//read_numbers_from_file();
	//Convert * test = new Convert();
	//test->setCtf(50);
	//cout << "celcius to farenheight is: " << test->getCtf()<<endl;
	//test->setCtk(-50);
	//cout << "kelvin is: " << test->getCtk() << endl;
	//test->setFtk(50);
	//cout << "kelvin is: " << test->getFtk() << endl;
	//test->setYtFI(15);
	//cout << "values are: " << test->getYtFI();



	return 0;
}

