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


void test()
{
	ofstream myfile;
	myfile.open("blerg.txt");
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

	
	Calendar * bleh = new Calendar();
	bleh->set_month("Marcfh");


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

