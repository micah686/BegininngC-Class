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
#include <windows.h>

using namespace std;

int arr[5];//0=rounds played, 1= victories, 2=defeats, 3=ties, 4=cheats active
string playername;




int randBetween()
{
	int randomn;
	int low = 00000000;
	int high = 99999999;
	if (low > high)
	{
		int swap = low;
		low = high;
		high = swap;
	}
	//cout<<rand() % (high - low + 1) + low<<endl; //random mod high-low +1	
	randomn = rand() % (high - low + 1) + low;
	return randomn;
}

int randmix()
{
	int rndval = randBetween();
	//cout<<"test is: "<<rndval<<endl;
	//cout<<"time is: "<<time(NULL)<<endl;
	int seedval = time(NULL)*rndval;
	//cout<<"combined is: "<<seedval<<endl;
	seedval = (seedval*time(NULL)) + rndval;
	//cout<<seedval<<endl;
	return seedval;
}



void RPS()
{
	Sleep(1000);
	int seedval = randmix();
	string playerchoice;
	srand(seedval);
	int compchoice = rand() % 13;
	string compchoicestr = "";
	///begin computer choice code
	if (compchoice == 1 || compchoice == -1 || compchoice == 4 || compchoice == -4 || compchoice == 7 || compchoice == -7 || compchoice == 0)
	{
		//cout << "1,4,7,0 choice:" << compchoice << endl;
		compchoicestr = "rock";
	}
	else if (compchoice == 2 || compchoice == -2 || compchoice == 5 || compchoice == -5 || compchoice == 8 || compchoice == -8)
	{
		//cout << "2,5,8 choice:" << compchoice << endl;
		compchoicestr = "scissors";
	}
	else if (compchoice == 3 || compchoice == -3 || compchoice == 6 || compchoice == -6 || compchoice == 9 || compchoice == -9)
	{
		//cout << "3,6,9 choice:" << compchoice << endl;
		compchoicestr = "paper";
	}
	//end computer choice code
	if (arr[5] == 1)
	{		
		cout << "The computer's choice is: " << compchoicestr << endl;
	}

	
	while (1)
	{
		cout << "Please enter rock, paper, or scissors: ";
		cin >> playerchoice;
		cout << "\n" << endl;

		if (playerchoice == "rock" || playerchoice == "scissors" || playerchoice == "paper")
		{
			if (playerchoice == compchoicestr)
			{
				cout << "this was a tie \n" << endl;
				arr[0]++;
				arr[3]++;
				cout << "rounds played: " << arr[0] << "\t" << "Victories: " << arr[1] << "\t" << "Defeats: " << arr[2] << "\t" << "Ties: " << arr[3] <<"\n\n" <<endl;
				RPS();
			}
			else
			{
				if (playerchoice == "rock" && compchoicestr == "scissors")
				{
					cout << "you win" << endl;
					arr[0]++;
					arr[1]++;
					cout << "rounds played: " << arr[0] << "\t" << "Victories: " << arr[1] << "\t" << "Defeats: " << arr[2] << "\t" << "Ties: " << arr[3] << "\n\n" << endl;
					RPS();
				}
				else if (playerchoice == "rock" && compchoicestr == "paper")
				{
					cout << "you lose" << endl;
					arr[0]++;
					arr[2]++;
					cout << "rounds played: " << arr[0] << "\t" << "Victories: " << arr[1] << "\t" << "Defeats: " << arr[2] << "\t" << "Ties: " << arr[3] << "\n\n" << endl;
					RPS();
				}

				else if (playerchoice == "scissors" && compchoicestr == "rock")
				{
					cout << "you lose" << endl;
					arr[0]++;
					arr[2]++;
					cout << "rounds played: " << arr[0] << "\t" << "Victories: " << arr[1] << "\t" << "Defeats: " << arr[2] << "\t" << "Ties: " << arr[3] << "\n\n" << endl;
					RPS();
				}
				else if (playerchoice == "scissors" && compchoicestr == "paper")
				{
					cout << "you win" << endl;
					arr[0]++;
					arr[1]++;
					cout << "rounds played: " << arr[0] << "\t" << "Victories: " << arr[1] << "\t" << "Defeats: " << arr[2] << "\t" << "Ties: " << arr[3] << "\n\n" << endl;
					RPS();
				}

				else if (playerchoice == "paper" && compchoicestr == "rock")
				{
					cout << "you win" << endl;
					arr[0]++;
					arr[1]++;
					cout << "rounds played: " << arr[0] << "\t" << "Victories: " << arr[1] << "\t" << "Defeats: " << arr[2] << "\t" << "Ties: " << arr[3] << "\n\n" << endl;
					RPS();
				}
				else if (playerchoice == "paper" && compchoicestr == "scissors")
				{
					cout << "you lose" << endl;
					arr[0]++;
					arr[2]++;
					cout << "rounds played: " << arr[0] << "\t" << "Victories: " << arr[1] << "\t" << "Defeats: " << arr[2] << "\t" << "Ties: " << arr[3] << "\n\n" << endl;
					RPS();
				}

			}
		}

		else if (playerchoice == "q" || playerchoice == "quit")
		{
			break;
		}


		else
		{
			cout << "please enter rock, paper or scissors" << endl;
			RPS();
		}
	}
	
	


}







void menu()
{
	string menucnt = "";

	cout << "type start to begin, or quit to exit: ";
	cin >> menucnt;//takes in input
	cout << "\n";

	while (menucnt != "quit")
	{
		if (menucnt == "start")//if menucnt equals a certain number			
		{
			RPS();
			menu();//run menu method again
		}
		else if (menucnt == "quit")
		{
			break;
		}
		else if (menucnt == "cheat_on")
		{
			arr[5] = 1;
			cout << "cheats have been enabled" << endl;
			menu();
		}
		else if (menucnt == "cheat_off")
		{
			arr[5] = 0;
			cout << "cheats have been disabled" << endl;
			menu();
		}
		else
		{
			cout << "not a valid option selected" << endl;
			menu();
		}
	}


}
void setup()
{
	

	cout << "You may press q to quit at anytime" << endl;
	cout << "\n 1) Please enter your name: ";
	cin >> playername;
	menu();
}
int main()
{
	arr[0, 1, 2, 3, 4, 5] = 0;
	setup();//run menu code

	return 0;
}


