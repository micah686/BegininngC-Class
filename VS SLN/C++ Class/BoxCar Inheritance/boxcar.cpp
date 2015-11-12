/*=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
*Name:Micah King
*Date:
*Description:Boxcar Inheritance
*
=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=*/

#include "Boxcar.h"
#include <time.h>
#include <math.h>
#define PI (3.141592653589793)




int Boxcar::boxcars = 0;
int Boxcar::SerialNumber = 0;

void Boxcar::setHeight(int h)
{
	height = h;
}
int Boxcar::getHeight()
{
	return height;
}

void Boxcar::setWidth(int w)
{
	width = w;
}
int Boxcar::getWidth()
{
	return width;
}

void Boxcar::setLength(int l)
{
	length = l;
}
int Boxcar::getLength()
{
	return length;
}

int Boxcar::getSerialNumber()
{
	return SerialNumber;
}

/////tank functions

void Tank_car::setRadius(double r)
{
	radius = r;
}

void Tank_car::TanksetLength(int l)
{
	length = l;
}

double Tank_car::getVolume()
{
	double test = PI*length*(radius * 2);
	
	return PI*length*(radius * 2);
}






Boxcar::Boxcar(int h, int w, int l)
{
	srand(time(NULL));
	SerialNumber = rand();
	height = h;
	width = w;
	length = l;
	boxcars++;

}

Boxcar::Boxcar()
{
	std::cout << "Calling the destructor on " << boxcars << std::endl;
	boxcars--;
}
//
//int Book::getBookCount() {
//	return bookCount;
//}
//
//void Book::bookDesc()
//{
//	std::cout << "A book is a collection of pages" << std::endl;
//}
//
////define setters and getters for pages
//void Book::setPages(int p) {
//	pages = p;
//}
//
//int Book::getPages() {
//	//Compelte this getter
//	return pages;
//}
//
//
//void Book::setTitle(std::string t) {
//	title = t;
//}
//std::string Book::getTitle() {
//	return title;
//}

////constructors
//Book::Book(int p, int v, std::string a, std::string t) {
//	
//	pages = p;
//	version = v;
//	author = a;
//	title = t;
//	bookCount++;
//}
//Book::Book(int p, int v, std::string a) {
//	Book(p, v, a, "");
//}
//Book::Book(int p, int v) {
//	Book(p, v, "", "");
//}
//Book::Book(int p) {
//	Book(p, 0, "", "");
//}
//Book::Book() {
//
//	Book(0, 0, "", "");
//}
////destructor
//Book::~Book() {
//	
//	std::cout << "Calling the destructor on " << title << std::endl;
//	bookCount--;
//}


