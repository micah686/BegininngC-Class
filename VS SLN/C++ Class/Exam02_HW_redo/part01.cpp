#include <iostream>
#include <fstream>
#include <string>

#include "part01.h"


void shapeMaker::writer(std::string fn)
{

	std::cout << sm;
	std::ofstream myfile;
	myfile.open(sm);
	std::cin.get();
}











////void shapeMaker(std::string filename)
////{
////	shapeMaker::sm = filename;
////}
////std::string shapeMaker::sm ="";
//
//
//void shapeMaker(std::string filename)
//{
//	shapeMaker::sm = "123.txt";//need to fix this
//}
//
//
//
//std::string shapeMaker::writer(std::string lineval)
//{
//	std::string filename = shapeMaker::sm;//filename set to the sm variable
//	std::ofstream myfile;
//	myfile.open(filename);//open or create the file
//	myfile << lineval;//add the line to the file
//	return "";
//}
//
//std::string shapeMaker::task(int num, char val)
//{
//	std::string filename = shapeMaker::sm;
//	std::ofstream myfile;
//	myfile.open(filename);
//	myfile<< val<<"\n";
//	std::string test_str =	std::string(1,val);//convert char to string
//	return test_str;
//	
//}


