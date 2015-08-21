//name: Micah King
//assignment: HW00
//date: 19 - Aug - 2015

// This program has two functions. 
// The first returns the product of two numbers
// the second prints a name
// 
//Your task is to complete these two functions.
//

#include <iostream>
#include <string>

int multi(int a, int b) 
{
    /*
    This function takes two arguments: int a and int b
    this tells me that both of them should be integers
    since it is preceded by the keyword int, I know it returns an integer
    */
    //add logic here
    return a * b;
}

void namer() {
    /*
        this function takes no arguments
        since the function is of type void I know it doesn't return anything either
    */
 
    //add logic here
    std::cout << "my name is Micah" << "\n";
}

int main()
{

    int x = 5;
    int y = 10;
   
    int z = multi(x,y);
    namer();
   // std::cout << x << " times " << y << " is " << z << "\n"; 
    
    std::cout << "What number for x ";
        std::cin >> x;
    std::cout << "What number for y ";
    std::cin >> y;
    std::cout << "you entered " << x << " and " << y << "\n"; 
    
    z = multi(x,y);
    std::cout << x << " times " << y << " is " << z << "\n"; 
    
    
    

}