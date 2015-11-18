#pragma once
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <string>
#include <fstream>


class shapeMaker
{
protected:
	std::string filen;
	std::string linen;

public:

	shapeMaker();

	explicit shapeMaker(std::string);

	void writer(std::string);

	std::string task(int count, char var);


};
inline shapeMaker::shapeMaker()
{
	std::cout << "default";
}

inline shapeMaker::shapeMaker(std::string filename)
{
	filen = filename;
	std::cout << "custome";
	writer(filen);

}


/////////////stringer//////////////////


class stringer
{
protected:
	std::string filen;
	std::string linen;

public:
	stringer();
	stringer(std::string);
	std::string task(std::string line, std::string word);

	stringer(std::string, std::string);

};

inline stringer::stringer()
{

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

