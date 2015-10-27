#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include "Conversion.h"

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










int main(int argc, char *arg[]){

	//read_numbers_from_file();
	Convert * test = new Convert();
	//test->setCtf(50);
	//cout << "celcius to farenheight is: " << test->getCtf()<<endl;
	//test->setCtk(-50);
	//cout << "kelvin is: " << test->getCtk() << endl;
	test->setFtk(50);
	cout << "kelvin is: " << test->getFtk() << endl;



	return 0;
}

