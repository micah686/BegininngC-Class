/*
	Name: Micah King
	Date:8 /27/2015
	Assignment: Create a menu
	Description:	Create a menu to call the various functions.
					Add comments for the functions...

*/
#include <iostream>
#include <string>
#include <cmath>


using namespace std;

const float PI = 3.14159;

void sizes()
{
   cout << "Size of char :      " << sizeof(char) << endl;
   cout << "Size of int :       " << sizeof(int) << endl;
   cout << "Size of short int : " << sizeof(short int) << endl;
   cout << "Size of long int :  " << sizeof(long int) << endl;
   cout << "Size of float :     " << sizeof(float) << endl;
   cout << "Size of double :    " << sizeof(double) << endl;
   cout << "Size of wchar_t :   " << sizeof(wchar_t) << endl;
}

void fourfours() {
	cout << "44-44 =             			   " << 44-44 << endl;//0
	cout << "44/44 =             			   " << 44/44 << endl; //1
	cout << "4/4 +4/4 =          			   " << 4 / 4 + 4 / 4 << endl;//2
	cout << "(sqrt(4) + sqrt(4)) - 4 / 4 =     " << (sqrt(4) + sqrt(4)) - 4 / 4 << endl;//3
	cout << "4-4 +(sqrt(4)+sqrt(4)) =          " << 4-4 +(sqrt(4)+sqrt(4)) << endl;//4
	cout << "(sqrt(4) + sqrt(4)) + 4 / 4 =     " << (sqrt(4) + sqrt(4)) + 4 / 4 << endl;//5
	cout << "(4*4)/4 +sqrt(4) =  			   " << (4*4)/4 +sqrt(4) << endl;//6
	cout << "4+4 -4/4 =          			   " << 4 + 4 - 4 / 4 << endl;//7
	cout << "sqrt(4)+sqrt(4)+sqrt(4)+sqrt(4) = " << sqrt(4)+sqrt(4)+sqrt(4)+sqrt(4) << endl;//8
	cout << "4+4 +4/4 =          			   " << 4 + 4 + 4 / 4 << endl;//9
	cout << "4 + 4 + (4 / sqrt(4)) =           " << 4 + 4 + (4 / sqrt(4)) << endl;//10
}
int multiplier(float x, float y) {
	
	return x*y;
}

float sqr(float x) {
	return x*x;
}

float volCyl(float radius, float height) {

	return PI * sqr(radius) * height;
}


void TrueFalse()
{
	const bool T = 1;
	const bool F = 0;

	if (T) {
		cout << " it's true!" << endl;
	}
	else
	{
		cout << "this is not true" << endl;
	}
}


int multi() 
{    
    int a=0;
	int b=0;
	cout<<"number 1: ";
	cin >>a ;
	cout << "\n";
	cout<<"number 2: ";
	cin  >> b;
	cout << "\n";
	cout<<a << " times "<<b<<" is "<<a*b;
	
	
	return a * b;
}


int menu()
{
	char menucnt = 0;
	int quit = 0;





	
		cout << "Please select an option, or press q to quit" << endl;
		cout << "\n 1) Sizes of types \n";
		cout << "\n 2) Four Fours \n";
		cout << "\n 3) Volume of a cylinder \n";
		cout << "\n 4) True or False \n";
		cout << "\n 5) Multiply \n";
		cout << "\n";
		cout << "option selected: ";
		cin >> menucnt;
		cout << "\n";


			if (menucnt == '1')
			{
				sizes();
				cout << "\n\n\n";
				menu();
			}
			else if (menucnt == '2')
			{
				fourfours();
				cout << "\n\n\n";
				menu();
			}
			else if (menucnt == '3')
			{
				cout << "the volume of a cylinder is: " << volCyl(2, 5) << endl;
				cout << "\n\n\n";
				menu();
			}
			else if (menucnt == '4')
			{
				TrueFalse();
				cout << "\n\n\n";
				menu();
			}
			else if (menucnt == '5')
			{
				multi();
				cout << "\n\n\n";
				menu();
			}

			else if (menucnt == 'q')
			{
				cout << "quitting..." << endl;
				quit = 1;
			}
					
			else
			{
			cout << "You didn't enter a valid number";
			cout << "\n\n\n";
			menu();
			}
}


int main() {
	
	
	
	//Try implementing a menu here...
	menu();
	return 0;
}