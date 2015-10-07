/*=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
*Name:Micah King
*Date:
*Description:Boxcar Project
*
=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=*/

#include "Boxcar.h"

#pragma region
//int Book::bookCount = 0;
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
#pragma endregion example_code

int Boxcar::boxcars = 0;
int Boxcar::getBoxcars()
{
	return boxcars;
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

Boxcar::Boxcar(int w, int l)
{
	width = w;
	length = l;
	boxcars++;
}
//Boxcar::Boxcar(int w, int l)
//{
//	Boxcar(w, l);
//}
//Boxcar::Boxcar()
//{
//	Boxcar(0, 0);
//}
//destructor
Boxcar::Boxcar()
{
	std::cout << "destroying..." << std::endl;
	boxcars--;
}


