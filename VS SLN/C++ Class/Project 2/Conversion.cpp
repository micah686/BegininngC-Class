#include "Conversion.h"

/*=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
Constructors Destructors!
=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-*/

Convert::Convert()
{
	
	//hullNumber = assignHull();
	//Hull++;
}

Convert::~Convert()
{
	std::cout << "Calling Destructor";
}


/*=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
SETTERS
=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-*/




/////////
void Convert::setCtf(double c)
{
	ctf = c;
}

void Convert::setCtk(double k)
{
	ctk = k;
}

void Convert::setFtc(double c)
{
	ftc = c;
}
void Convert::setFtk(double k)
{
	ftk = k;
}



void Convert::setFti(double i)
{
	fti = i;
}

void Convert::setFty(double y)
{
	fty = y;
}

void Convert::setYtf(double f)
{
	ytf = f;
}

void Convert::setYti(double i)
{
	yti = i;
}



void Convert::setCtm(double m)
{
	ctm = m;
}

void Convert::setCtkm(double km)
{
	ctkm = km;
}

void Convert::setKtm(double m)
{
	ktm = m;
}

void Convert::setKtc(double c)
{
	ktc = c;
}




void Convert::setYtFI(double fi)
{
	ytFI = fi;
}
void Convert::setKtMC(double mc)
{
	ktMC = mc;
}




/*=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
Getters
=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-*/


////////
double Convert::getCtf()
{
	return (ctf*1.8) + 32;
}

double Convert::getCtk()
{
	return ctk + 293.15;
}
double Convert::getFtc()
{
	return (ftc - 32) / 1.8;
}
double Convert::getFtk()
{
	return (ftk - 32)*5/9 +273.15;
}



double Convert::getFti()
{
	return fti * 12;
}
double Convert::getFty()
{
	return fty / 3;
}
double Convert::getYtf()
{
	return ytf * 3;
}
double Convert::getYti()
{
	return yti * 36;
}



double Convert::getCtm()
{
	return ctm / 100;
}
double Convert::getCtkm()
{
	return ctkm / 100000;
}
double Convert::getKtm()
{
	return ktm * 1000;
}
double Convert::getKtc()
{
	return ktc * 100000;
}





double Convert::getYtFI()
{
	
	
	double arr[2];
	arr[0] = ytFI * 3;
	arr[1] = ytFI * 36;

	




	return arr[0];
}

double Convert::getKtMC()
{
	return 0;
}