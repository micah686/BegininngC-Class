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
string playername ="";




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
	randomn = rand() % (high - low + 1) + low;//gets a random number between 00000000 and 99999999
	return randomn;
}

int randmix()//does a few operations to make the random number seed a bit more random
{
	int rndval = randBetween();
	int seedval = time(NULL)*rndval;//multiplies time by random number
	int rand2 = randBetween();
	seedval = (seedval*time(NULL)) + rand2;//then adds the random number again
	return seedval;
}

void endgame()
{
	string quit;
	cout << "Do you want to display your final score?: ";
	cin >> quit;
	if (quit == "y" || quit == "yes")
	{
		printf("%s , your final score is: \n", playername.c_str());
		printf("Rounds played: %d \t Victories: %d \t Defeats: %d \t Ties: %d \n", arr[0], arr[1], arr[2], arr[3]);
	}
	
	cout << "please try again sometime" << endl;
	Sleep(800);//pauses for 800 milliseconds so you can read the text
	exit(0);//exits the program
}

void RPS()
{
	Sleep(1000);
	int seedval = randmix();//gets the psuedo-random seed
	string playerchoice;
	srand(seedval);//sets the seed to the psuedo-random value
	int compchoice = rand() % 10 +1;
	string compchoicestr = "";
	///begin computer choice code
	if ( compchoice == 0)
	{
		RPS();
	}
	
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
				cout << "this is what happens when an unstoppable force meets an immovable object(tie) \n" << endl;
				arr[0]++;//adds to round count
				arr[3]++;//adds to tie count
				printf("%s , your current score is: \n", playername.c_str());
				printf("Rounds played: %d \t Victories: %d \t Defeats: %d \t Ties: %d \n", arr[0], arr[1], arr[2],arr[3]);
				RPS();
			}
			else
			{
				if (playerchoice == "rock" && compchoicestr == "scissors")
				{
					cout << "an enemies' sword is no match for the stone giant(win)" << endl;
					arr[0]++;
					arr[1]++;//adds to win count
					printf("%s , your current score is: \n", playername.c_str());
					printf("Rounds played: %d \t Victories: %d \t Defeats: %d \t Ties: %d \n", arr[0], arr[1], arr[2], arr[3]);
					RPS();
				}
				else if (playerchoice == "rock" && compchoicestr == "paper")
				{
					cout << "you were blinded by a sheet and was unable to continue(loss)" << endl;
					arr[0]++;
					arr[2]++;//adds to lose count
					printf("%s , your current score is: \n", playername.c_str());
					printf("Rounds played: %d \t Victories: %d \t Defeats: %d \t Ties: %d \n", arr[0], arr[1], arr[2], arr[3]);
					RPS();
				}

				else if (playerchoice == "scissors" && compchoicestr == "rock")
				{
					cout << "your metal sword was no match for the stone giant(loss)" << endl;
					arr[0]++;
					arr[2]++;
					printf("%s , your current score is: \n", playername.c_str());
					printf("Rounds played: %d \t Victories: %d \t Defeats: %d \t Ties: %d \n", arr[0], arr[1], arr[2], arr[3]);
					RPS();
				}
				else if (playerchoice == "scissors" && compchoicestr == "paper")
				{
					cout << "your trusty blade slashed through the sheet and led your way onto victory(win)" << endl;
					arr[0]++;
					arr[1]++;
					printf("%s , your current score is: \n", playername.c_str());
					printf("Rounds played: %d \t Victories: %d \t Defeats: %d \t Ties: %d \n", arr[0], arr[1], arr[2], arr[3]);
					RPS();
				}

				else if (playerchoice == "paper" && compchoicestr == "rock")
				{
					cout << "your large sheet disoriented the stone giant and led you to victory(win)" << endl;
					arr[0]++;
					arr[1]++;
					printf("%s , your current score is: \n", playername.c_str());
					printf("Rounds played: %d \t Victories: %d \t Defeats: %d \t Ties: %d \n", arr[0], arr[1], arr[2], arr[3]);
					RPS();
				}
				else if (playerchoice == "paper" && compchoicestr == "scissors")
				{
					cout << "the enemies swords were too strong against the large sheet, which brought about your downfall(loss)" << endl;
					arr[0]++;
					arr[2]++;
					printf("%s , your current score is: \n", playername.c_str());
					printf("Rounds played: %d \t Victories: %d \t Defeats: %d \t Ties: %d \n", arr[0], arr[1], arr[2], arr[3]);
					RPS();
				}

			}
		}

		else if (playerchoice == "q" || playerchoice == "quit")//break out of loop
		{
			endgame();//quit the program
		}


		else
		{
			cout << "please enter rock, paper or scissors" << endl;
			RPS();
		}
	}
	endgame();
	

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
		else if (menucnt == "cheat_on")//set cheat flag on
		{
			arr[5] = 1;
			cout << "cheats have been enabled" << endl;
			menu();
		}
		else if (menucnt == "cheat_off")//sets cheat flag off
		{
			arr[5] = 0;
			cout << "cheats have been disabled" << endl;
			menu();
		}
		else
		{
			cout << "not a valid option selected \n" << endl;
			menu();
		}
	}


}
void setup()//ask for name once, so it doesn't ask again on menu call
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


