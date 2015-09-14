/*
	Name: Micah King
	Date:9/2/2015
	Assignment: Rock Paper Scissors Project


*/
#include <stdio.h>
#include <iostream>
#include <time.h>
#include <cstdlib>
#include <string>

using namespace std;	
		
	string arr[4];//0=playername,1=rounds played, 2= victories, 3=cheatactive
	
	
	int randBetween() 
	{		
		int randomn;
		int low =00000000;
		int high=99999999;				
		if(low > high) 
		{
			int swap = low;
			low = high;
			high = swap;
		}		 
		//cout<<rand() % (high - low + 1) + low<<endl; //random mod high-low +1	
		randomn= rand() % (high - low + 1) + low;		
		return randomn;
	}
	
	int randmix()
	{
		int rndval = randBetween();
		//cout<<"test is: "<<rndval<<endl;
		//cout<<"time is: "<<time(NULL)<<endl;
		int seedval= time(NULL)*rndval;
		//cout<<"combined is: "<<seedval<<endl;
		seedval= (seedval*time(NULL))+rndval;
		//cout<<seedval<<endl;
		return seedval;
	}
	
	
	
	void RPS()
	{
		int test = randmix();
		cout << test<< endl;
	}
	

	
	
	
	
	
void menu()
	{
		string menucnt ="";
		cout << "You may press q to quit at anytime" << endl;
		cout << "\n 1) Please enter your name: ";
		cin>> arr[0];
		cout<<arr[0]<<endl;
		cout << "option selected: ";
		cin >> menucnt;//takes in input
		cout << "\n";
		
		while(menucnt != "quit")
		{
			if (menucnt == "start")//if menucnt equals a certain number			
			{
				RPS();
				menu();//run menu method again
			}
			else if (menucnt == "other")
			{
			}
			else
			{
				cout<<"not a valid option selected"<<endl;
				menu();
			}
		}
		
		
	}
	int main()
	{

	   menu();//run menu code
	   
        return 0;
	}


