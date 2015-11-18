#pragma once
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <string>
#include <fstream>


class shapeMaker
{
protected:
	void writer();
public:
	std::string sm;

	shapeMaker();
	shapeMaker(std::string);
	/*~shapeMaker();*/

	//void writer(std::string);

private:

};

shapeMaker::shapeMaker()//default constructor
{
}

shapeMaker::shapeMaker(std::string)//parametrized constructor
{
	void writer(std::string);
}


//shapeMaker::~shapeMaker()//default destructor
//{
//}






//class shapeMaker
//{
//private:
// 	
//
//protected:	
//	
//
//
//public:
//	 std::string sm;
//	//constructors
//	shapeMaker(std::string)
//	{
//		
//	};
//
//	shapeMaker()
//	{
//	 void writer(std::string);
//	}
//
//
//	//functions
//	
//
//	std::string writer(std::string);
//
//	std::string task(int, char);
//
//};

