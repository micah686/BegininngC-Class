#include <iostream>
#include <fstream>
#include <string>

#include "part01.h"


void shapeMaker::writer(std::string fn)
{

	
	std::ofstream myfile;
	myfile.open(filen, std::ofstream::app);
	myfile << linen << "\n";
	myfile.close();
	//std::cin.get();
}

std::string shapeMaker::task(int count, char var)
{
	std::string line_string = std::to_string(var);//var is being pulled from memory, I need to fix this
	for (int i = 0; i < count; i++)
	{
		linen += line_string;
		shapeMaker::writer("");
	}


	return linen;
}




///////////////stringer///////////////////

stringer::stringer(std::string filename)
{
	filen = filename;
	std::ofstream myfile2;
	myfile2.open(filen, std::ofstream::app);
	myfile2.close();


}

std::string stringer::task(std::string line, std::string word)
{
	std::ofstream myfile;
	myfile.open(filen, std::ofstream::app);




	std::string text = line;
	std::string sub = word;

	std::string::size_type i = text.find(sub);

	if (i != std::string::npos)
	{
		text.erase(i, sub.length());
	}
	myfile << text << "\n" << std::endl;
	myfile.close();
	
	

	return text;
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


