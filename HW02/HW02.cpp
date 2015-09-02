/*
	Name: Micah King
	Date:9/2/2015
	Assignment: modulus, randbetween, average


*/
#include <stdio.h>
#include <iostream>
#include <time.h>

using namespace std;
	/*
	Write a function called month that takes a number and returns a value between 1 
	and 31.
	
	Remember to document your code!!
	
	Examples:
	month(12) Returns 12
	month(33) returns 2
	HINT: You will need an if statement to make this work properly.
	*/
	

	void month()
	{
	    int month =0;
	    cout << "option selected: ";
		cin >> month;
		
		
		if(month%31 ==0)
		{
		     printf ("%d mod 31 is %d\n",month,month);
		}
		else
		{
		    printf ("%d mod 31 is %d\n",month,month%31);   
		}
		 
		
		
	}

	/*
	Write a function called 'randBetween'
	It should take two numbers, high and low.
	Randbetween should return a random number between the two values.
	It should handle negative numbers
	The low number doesn't have to come first

	Hint: 	You will need an IF statement.
	Hint: 	You will need to figure out how to adjust the
			output of rand to handle values other than 0 or 1...

	Examples: 
	randBetween(1,6) == 1
	randBetween(1,6) == 3
	randBetween(1,6) == 2
	randBetween(-4,0) == -4
	randBetween(42,50) == 49
	randBetween(42,50) == 45
	randBetween(7,1) == 3
	*/

	void randBetween() 
{    
    int a=0;
	int b=0;
	int high=0;
	int low=0;
	cout<<"high: ";
	cin >>high ;
	cout << "\n";
	cout<<"low: ";
	cin  >> low;
	cout << "\n";
	
	
	
	
}

/*
Write a function named average.
Average will ask the user for input. 
Average will then compute the average value of that input.
Average is defined as the sum of values dived by the number of values.

You will need:
A loop, a counter, and at least one method of keeping track of the grades.


Examples:
	
	 You entered 87.87, the current average is: 87.87
Please enter a grade (-1 to quit): 42.42

 You entered 42.42, the current average is: 65.15
Please enter a grade (-1 to quit): 34

 You entered 34.00, the current average is: 54.76
Please enter a grade (-1 to quit): 99

 You entered 99.00, the current average is: 65.82
Please enter a grade (-1 to quit): 100

 You entered 100.00, the current average is: 72.66
Please enter a grade (-1 to quit): 2

 You entered 2.00, the current average is: 60.88
Please enter a grade (-1 to quit): 1

 You entered 1.00, the current average is: 52.33
Please enter a grade (-1 to quit): 0

 You entered 0.00, the current average is: 45.79
Please enter a grade (-1 to quit): -1
average grade: 45.79 

	Please enter a grade (-1 to quit): -1
 	no grades were entered...
*/
	float average(){
        return 0;
	}

	int main()
	{
	   // month();
	   randBetween();
        return 0;
	}


