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
		
	string arr[4];//0=playername,1=rounds played, 2= victories
	
	
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


