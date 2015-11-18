#pragma once
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <string>
#include <fstream>


class shapeMaker
{
protected:
	std::string sm;

public:

	shapeMaker();

	explicit shapeMaker(std::string);

	void writer(std::string);


};
inline shapeMaker::shapeMaker()
{
	std::cout << "default";
}

inline shapeMaker::shapeMaker(std::string filename)
{
	sm = filename;
	std::cout << "custome";
	writer(sm);

}

//inline void shapeMaker::writer(std::string)
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

