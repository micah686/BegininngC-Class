/*=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
*Author:Micah King
*Date:
*Description: Boxcar class
*
=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=*/

#include <iostream>
#include <stdlib.h>
#include <string>
#include "Boxcar.h"

using namespace std;
#pragma region
//int main() {
//
//	//create a new book on the heap
//	Book * hp01 = new Book;
//
//	//create a new book on the stack
//	Book hp02;
//
//	hp01->setTitle("Harry Potter and the Philosopher's Stone");
//	hp02.setTitle("Harry Potter and the Chamber of Secrets");
//
//	Book hp03;
//	Book::bookDesc();
//	std::cout << "the number of books so far : " << Book::getBookCount() << std::endl;
//
//	std::cout << hp01->getTitle() << std::endl;
//	std::cout << hp03.getTitle() << std::endl;
//
//	delete hp01;
//	std::cout << "the number of books so far : " << Book::getBookCount() << std::endl;
//
//
//	return 0;
//
//}
#pragma endregion old_main
int main()
{
	Boxcar car01;

	int l, w, h;

	std::cout << "please enter a height, length, and width" << std::endl;
	cin >> h;
	cout << "\n" << endl;
	cin >> l;
	cout << "\n" << endl;
	cin >> w;
	cout << "\n" << endl;


	car01.setHeight(h);
	car01.setLength(l);
	car01.setWidth(w);

	std::cout << "height is: " << car01.getHeight() << std::endl;
	std::cout << "length is: " << car01.getLength() << std::endl;
	std::cout << "width is: " << car01.getWidth() << std::endl;
	cout << "car01 has serial number:  #" << car01.getSerialNumber() << endl;
	

	
	
}