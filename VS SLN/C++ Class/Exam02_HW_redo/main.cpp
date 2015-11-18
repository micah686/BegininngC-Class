/************************************
Name:Micah King
Date:11-4-2015
Class:Beginning C++

Notes:




************************************/

#include <iostream>
#include <fstream>
#include <string>
#include "part01.h"



int main(int argc, char *arg[]) {

	/*
	Don't forget to comment!!
	calling shapeMaker or stringer with a filename will store the filename and use it for writing.
	*/
	shapeMaker m("exam02_shapes.txt");
	//stringer s("exam02_string.txt");
	//this line will print to the terminal so you can check your progress
	//std::cout << m.task(7, '*') << std::endl;
	//these lines will print to a file.
	//m.task(7, '*');
	m.writer(m.task(7, '*'));
	m.writer(m.task(1, '^'));

	//this line will print to the terminal so you can check your progress
	
	//std::cout << s.task("the fish was delish", "fish") << std::endl;
	//these lines will print to a file.
	//s.writer(s.task("the fish was delish", "fish"));
	//s.writer(s.task("there are six words in this sentance", "six"));

	/*
	both shapeMaker and stringer will have a default constructor.
	The default will create files named shapemaker.txt and stringer.txt respectivly.

	shapeMaker * shape = new shapeMaker();
	stringer *st = new stringer();

	shape->writer(shape->task(21, '%'));
	shape->writer(shape->task(5, 'n'));

	st->writer(st->task("No time like the present", "the"));
	st->writer(st->task("The force is strong with this one", "strong"));
	*/
	return 0;
}


