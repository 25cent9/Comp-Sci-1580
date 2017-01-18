/*
  Programmer:  Innocent Niyibizi
  Instructor:  Sannihitha Muppidi 
  Section:     D
  Date:        10/4/16
  Description: Program to use functions and multiple files
               to get numbers and swap them
*/
#ifndef FUNCTIONHEADER_H
#define FUNCTIONHEADER_H

/*
  Description:  Greets the user
  Pre:          None
  Post:         Prints greeting
*/
void greet();

/*
  Description:  Gathers two numbers from the user
  Pre:          None
  Post:         Changes the values of num1 and num2 from user input
*/
void getInput(int& num1, int& num2);

/*
  Description:  Takes in the numbers from the user and swaps them
  Pre:          None
  Post:         Swaps the values of num1 and num2
*/
void swap(int& num1, int& num2);

/*
  Description:  Says goodbye to the user
  Pre:          None
  Post:         A goodbye message is displayed
*/
void signoff();


#endif