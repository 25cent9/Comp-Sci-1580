/*
  Programmer:  Innocent Niyibizi
  Instructor:  Sannihitha Muppidi 
  Section:     D
  Date:        10/4/16
  Description: Program to use functions and multiple files
               to get numbers and swap them
*/
 #include "functionHeader.h"
 #include <iostream>
 using namespace std;
int main()
{
  int num1, num2; //Declaring the two variables
  greet();        //Calling the greet function
  getInput(num1, num2); //Calling the function to get input
  
  //Displaying the values of each variable before swapping
  cout<<"Value of number1 before swapping: "<<num1<<endl;
  cout<<"Value of number2 before swapping: "<<num2<<endl;
  swap(num1, num2); //Calling the swap function
  
  //Displaying the values of each variable after swapping
  cout<<"Value of number1 after swapping: "<<num1<<endl;
  cout<<"Value of number2 after swapping: "<<num2<<endl;
  
  signoff();  //Calling the signoff function
  return 0;
}