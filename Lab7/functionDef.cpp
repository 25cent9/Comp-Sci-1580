/*
  Programmer:  Innocent Niyibizi
  Instructor:  Sannihitha Muppidi 
  Section:     D
  Date:        10/4/16
  Description: Program to use functions and multiple files
               to get numbers and swap them
*/
#include "functionHeader.h" //Including the function header

using namespace std;
#include <iostream>

//Greeting the user
void greet()
{
  cout<<"Welcome!!!"<<endl;
  return;
}
//Getting input from the user
void getInput(int &num1, int &num2)
{
  cout<<"Enter the value of number1: ";
  cin>>num1;
  
  cout<<"Enter the value of number2: ";
  cin>>num2;
  return;
}
//Swapping the values of num1 and num2 using pass-by reference
void swap(int &num1, int &num2)
{
  int temp = num1;  //Temp variable to hold for swapping
  num1 = num2;
  num2 = temp;
  return;
}
//Signing off
void signoff()
{
  cout<<"Bye! Have a nice day!"<<endl;
  return;
}