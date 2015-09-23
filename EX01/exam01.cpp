#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;
float problem01(){
	/*
		Add your code below.
		You will need to change the final return value.
		Additionally you will need at least one (probably 2[or maybe 3!]) variables.
		You will likely need a loop too. Don't worry about error correction. Assume proper input. You may use other values to quit the function (y/n are not necessary)
	*/
	float num1;
	float num2;
	char choice;
	float total;
	int lock =0;
	while(lock ==0)
	{
		cout<<"please enter a number:";
		cin>>num1;
		cout<<"\nplease enter a number to multiply by: ";
		cin>>num2;
		cout<<"total is: "<<num1*num2<<endl;
		total = num1*num2;//multiply the numbers together
		cout<<"press y to continue, or q to quit \n";
		cin>>choice;
		 if(choice=='q' )
		{
			lock=1;//set lock to 1, breaking while loop
			
		}
	}
	
	return total;
}

int problem02(int pr2){
	/*
		You will need to use the modulus operator (%) to solve this.
		also a loop or recursion (bonus points for recursion)
		Mostly this requires IF statements.
		Remember to return a value!
	*/
	int input = pr2;
	int lock=0;
	while(lock==0)
	{
		if(input ==1)//if the ending digit is 1, print then break
		{
			cout<<input<<endl;
			lock =1;
		}
		else if(input%10==3||input%10==5||input%10==7||input%10==9||input%10==1)//checks if the ending digit is odd
		{
		input=(input*3)+1;
		cout<<input<<endl;
		}
		else if(input%10==0||input%10==2||input%10==4||input%10==6||input%10==8)//check if the ending digit is even
		{
		input = input/2;
		cout<<input<<endl;
		}
	}
	
cout<<"\n"<<endl;
	return input;
}

void problem03(int seconds)
{
	int s;
	int m;
	int h;
	int d;
	float y;
	s = seconds;//set s to seconds
	//start dividing by the proper amount
	m = s/60;
	h = m/60;
	d = h/24;
	y = d/365.24;
	printf("%d is: %f years %d days %d minutes %d seconds  \n",s,y,d,h,s);
}





int main() {
	/*
		The following code does not need to be changed.
		In fact leaving the code below will help you test 
		your solutions to problems 1-3
	*/
	// for testing problem 1
	float p01;
	p01 = problem01();
	printf("the value returned is %f\n",p01);

	// for testing problem 2
	int pr2 = 127;
	printf("\nproblem02(%d)\n",pr2);
	problem02(pr2);
	//cout<<"\n"<<problem02(pr2);

	// for testing problem 3
	int p03 = 153762;
	printf("\nproblem03(%d)\n",p03);
	problem03(p03);
	
	return 0;

}