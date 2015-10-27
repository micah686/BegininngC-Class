#pragma once
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <string>




class Convert
{
private:
	//Static members
	//static unsigned long int Hull;




	//my data members
	//temps
	double ctf;
	double ctk;
	double ftc;
	double ftk;
	//imperial length
	double fti;
	double fty;
	double ytf;
	double yti;
	//metric length
	double ctm;
	double ctkm;
	double ktm;
	double ktc;

	double ytFI;
	double ktMC;

public:



	//my setters
	void setCtf(double);
	void setCtk(double);
	void setFtc(double);
	void setFtk(double);

	void setFti(double);
	void setFty(double);
	void setYtf(double);
	void setYti(double);

	void setCtm(double);
	void setCtkm(double);
	void setKtm(double);
	void setKtc(double);

	void setYtFI(double);
	void setKtMC(double);
	


	//my getters
	double getCtf();
	double getCtk();
	double getFtc();
	double getFtk();

	double getFti();
	double getFty();
	double getYtf();
	double getYti();

	double getCtm();
	double getCtkm();
	double getKtm();
	double getKtc();


	double getYtFI();
	double getKtMC();

	//constructors
	Convert();
	~Convert();
};

