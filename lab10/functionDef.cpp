/*
  Programmer:  Innocent Niyibizi
  Instructor:  Sannihitha Muppidi
  Section:     D
  Date:        10/25/16
  Description: Definition file for functions
*/
#include <iostream>
#include <string>

#include "functions.h"
using namespace std;

string encryptName(char name[])
{
  string secret = ""; //Variable to hold the scret word
  int currentInt = 0;
  //Loop to run until the null character is reached
  for(int i=0; name[i]!='\0'; i++)
  {
    //Checking to see if the character is not a space
    if(!isspace(name[i]))
    {
      if(name[i] == 'z' || name[i]=='Z' || name[i]=='x' || name[i]=='X'
            || name[i]== 'y' || name[i]=='Y')
            currentInt = name[i]-22;
      else
        currentInt = name[i];
    }

    //Determining if the currnt character is a space
    if(isspace(name[i]))
      secret+=" ";
    else
      secret+=currentInt+3; //Adding 3 to the current ascii character
  }
  return secret;  //Returning secret
}
