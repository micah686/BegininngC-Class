/*=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
*Author:Micah King
*Date: 11/11/2015
*Description: Boxcar Inheritance
*
=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=*/

#pragma once
#include <iostream>
#include <stdlib.h>
#include <string>

#pragma region

#pragma endregion old_header

class Boxcar
{
public:
	void setWidth(int);
	int getWidth();
	void setLength(int);
	int getLength();
	void setHeight(int);
	int getHeight();
	static int getSerialNumber();
	static int getBoxcars();


	Boxcar();
	Boxcar(int, int, int);
	
	
	
protected:
	static int boxcars;
	static int SerialNumber;
	int width;
	int length;
	int height;
};




class Tank_car: public Boxcar
{
public:
	double getVolume();
	void TanksetLength(int);
	void setRadius(double);

private:
	double radius;



};




//Boxcar::Boxcar()
//{
//}

