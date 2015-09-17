/*
	Name: Micah King
	Date:9/2/2015
	Assignment: modulus, randbetween, average


*/
#include <stdio.h>
#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;	
	

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



	int randBetween() 
	{		
		int low =0;
		int high=0;		
		cout<<"high: ";
	    cin >>high ;
	    cout << "\n";
	    cout<<"low: ";
	    cin  >> low;
	    cout << "\n";
		
		if(low > high) 
		{
			int swap = low;
			low = high;
			high = swap;
		}		 
		cout<<rand() % (high - low + 1) + low<<endl; 
		return 0;
	}


	float average()
	{
		int counter = 0;
		float grade;
		float total = 0;
		
		while (1) {
			printf("Enter a grade, or a negative number to quit: ");
			cin >> grade;
			if (grade < 0) {
				break;
			}
			counter++;
			total += grade; //append grade to total
			printf("\nEntered: %2.2f, Average:: %2.2f\n", grade, total/counter);// print grade and average
		}
		
		if (counter == 0) {
			printf(" No number was entered \n");
			return 0;
		} else {
			printf("average grade: %2.2f \n", total/counter);//print average
		}
		
		
		
        return 0;
	}
	
	
	
	void menu()
	{
		char menucnt =0;
		cout << "Please select an option, or press q to quit" << endl;
		cout << "\n 1) Month \n";
		cout << "\n 2) Rand Between \n";
		cout << "\n 3) Average Grade \n";
		cout << "\n";
		cout << "option selected: ";
		cin >> menucnt;//takes in input
		cout << "\n";
		
		while(menucnt != 'q')
		{
			if (menucnt == '1')//if menucnt equals a certain number
			{
				month();
				cout << "\n\n\n";//print a few newlines
				menu();//run menu method again
			}
			else if (menucnt == '2')
			{
				randBetween();
				cout << "\n\n\n";
				menu();
			}
			else if (menucnt == '3')
			{
				average();
			}
		}
		
		
	}
	

	int main()
	{

	   menu();//run menu code
	   
        return 0;
	}


