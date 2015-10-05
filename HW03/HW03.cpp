/**********************************************************
Author      :
Assignment  :
Date        :
Description :
**********************************************************/
#include <stdlib.h>
#include <iostream>
#include <string>


int fib(int x){
    
    
    std::cout << "fib called with: " << x << std::endl;
    
    if(x==0){
    //base case...
	return 0;
    }else if(x==1) {
    //other base case
	return 1;
    }else {
    //final case
	return ( fib(x-1)+fib(x-2) );
    }
    
    return x;
}


int main()
{
    int x = 0;
    std::cout << "what number for x: ";
    std::cin >> x;
    std::cout << std::endl;
    fib(x);
    return 0;
}
