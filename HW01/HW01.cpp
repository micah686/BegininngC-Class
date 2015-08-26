/*
	Name:
	Date:
	Assignment:
	Description:	Create a menu to call the various functions.
					Add comments for the functions...

*/
#include <iostream>
#include <string>


using namespace std;

const float PI = 3.14159;

void sizes()
{
   cout << "Size of char : " << sizeof(char) << endl;
   cout << "Size of int : " << sizeof(int) << endl;
   cout << "Size of short int : " << sizeof(short int) << endl;
   cout << "Size of long int : " << sizeof(long int) << endl;
   cout << "Size of float : " << sizeof(float) << endl;
   cout << "Size of double : " << sizeof(double) << endl;
   cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
}

void fourfours() {
	cout << "44-44 = " << 44-44 << endl;
	cout << "44/44 = " << 44/44 << endl; 
}
int multiplier(float x, float y) {
	/*
		Multiplies two floating point numbers
		inputs: float x the first number to multiply
				float y the second number to multiply
		output: returns a float
	*/
	return x*y;
}

float sqr(float x) {
	return x*x;
}

float volCyl(float radius, float height) {

	return PI * sqr(radius) * height;
}

int main() {
	const bool T = 1;
	const bool F = 0;
	sizes();
	fourfours();
	if(T) {
		cout <<" it's true!" << endl;
	}
	cout << "the volume of a cylinder is: " << volCyl(2,5) << endl;
	
	//Try implementing a menu here...
	return 0;
}