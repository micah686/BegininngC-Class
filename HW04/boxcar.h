/*=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
*Author:
*Date:
*Description:
*
=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=*/

#pragma once
#include <iostream>
#include <stdlib.h>
#include <string>

#pragma region
//class Book {
//
//public:
//	
//	
//	void setPages(int);
//	int getPages();
//	
//	//define a prototype setter and getter for version
//	void setVersion(int);
//	int getVersion();
//
//	void setTitle(std::string);
//	std::string getTitle();
//	
//	//define a prototype setter and getter for author
//	void setAuthor(std::string);
//	std::string getAuthor();
//
//	static int getBookCount();
//	static void bookDesc();
//	~Book();
//	//Constructors
//	Book(int, int, std::string, std::string);
//	Book(int, int, std::string);
//	Book(int, int);
//	Book(int);
//	Book();
//	
//
//private:
//	static int bookCount;
//	int pages;
//	int version;
//	std::string author;
//	std::string title;
//};//remember this last little semicolon... 
#pragma endregion old_header

class Boxcar
{
public:
	void setWidth(int);
	int getWidth();
	void setLength(int);
	int getLength();
	static int getBoxcars();

	Boxcar();
	Boxcar(int, int);
	//~Boxcar();

private:
	static int boxcars;
	int width;
	int length;
};

//Boxcar::Boxcar()
//{
//}

