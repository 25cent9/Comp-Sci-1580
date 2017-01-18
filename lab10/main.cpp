/*
  Programmer:  Innocent Niyibizi
  Instructor:  Sannihitha Muppidi
  Section:     D
  Date:        10/25/16
  Description: Program to encrypt name
*/

#include <iostream>
#include "functions.h"
#include <string>

using namespace std;
const int STRING_SIZE = 30;

int main()
{
  string secretName = " ";  //String to hold secret word
  char name[STRING_SIZE];   //Char array to hold name
  cout<<"Please enter your name: ";
  cin.getline(name, STRING_SIZE);
  secretName = encryptName(name); //Calling the encrypt function
  cout<<secretName<<endl; //Displaying the secret word
  return 0;
}
