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

const float PI = 3.14159; //sets the float PI to 3.14159

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
	cin >>a ;//asks for input for number a
	cout << "\n";
	cout<<"number 2: ";
	cin  >> b; //asks for input for number b
	cout << "\n";
	cout<<a << " times "<<b<<" is "<<a*b;//prints the output of a times b
	
	
	return a * b;
}


int menu()
{
	char menucnt = 0; //menu selection counter
	;





	
		cout << "Please select an option, or press q to quit" << endl;
		cout << "\n 1) Sizes of types \n";
		cout << "\n 2) Four Fours \n";
		cout << "\n 3) Volume of a cylinder \n";
		cout << "\n 4) True or False \n";
		cout << "\n 5) Multiply \n";
		cout << "\n";
		cout << "option selected: ";
		cin >> menucnt;//takes in input
		cout << "\n";


			if (menucnt == '1')//if menucnt equals a certain number
			{
				sizes();//run sizes method
				cout << "\n\n\n";//print a few newlines
				menu();//run menu method again
			}
			else if (menucnt == '2')
			{
				fourfours();//run fourfours method
				cout << "\n\n\n";
				menu();
			}
			else if (menucnt == '3')
			{
				cout << "the volume of a cylinder is: " << volCyl(2, 5) << endl;//run volCyl with arguments 2,5 for radius and height
				cout << "\n\n\n";
				menu();
			}
			else if (menucnt == '4')
			{
				TrueFalse();//run truefalse method
				cout << "\n\n\n";
				menu();
			}
			else if (menucnt == '5')
			{
				multi();//run multi method
				cout << "\n\n\n";
				menu();
			}

			else if (menucnt == 'q')//if menucnt equals the q character
			{
				cout << "quitting..." << endl;
				
			}
					
			else//if q or a valid number isn't entered
			{
			cout << "You didn't enter a valid number";
			cout << "\n\n\n";
			menu();//restart menu method
			}
}


int main() {
	
	
	
	//Try implementing a menu here...
	menu();//run the menu code
	return 0;
}