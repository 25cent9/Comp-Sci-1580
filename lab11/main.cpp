/*
  Programmer:  Innocent Niyibizi
  Instructor:  Sannihitha Muppidi
  Section:     D
  Date:        11/1/16
  Description: Program to send invitations for Thanksgiving dinner
*/
#include <iostream>
#include <fstream>

#include "functionHeader.h"

using namespace std;
const int ARRSIZE = 80;
int main()
{
  //Creating streams
  fstream in;
  ofstream outInvite, outNum;
  //Opening streams
  in.open("input.txt");
  outInvite.open("output1.txt");
  outNum.open("output2.txt");
  //Declaring variables
  char relation[ARRSIZE];
  char name[ARRSIZE];
  int guestNum = 0;
  int familyCount =0;
  int guestTotal = 0;
  in>>familyCount;  //Getting number for loop control from file
  for (int i = 0; i < familyCount; i++) {
    getData(relation, name, guestNum, in);  //Getting data for line
    guestTotal+=guestNum; //Incrementing the amount of guests
    printIvite(relation, name, outInvite);  //Prinitng invite to output file
  }
  printNumGuest(guestTotal, outNum);  //Calling function to print stats in file
  //Closing streams
  in.close();
  outInvite.close();
  outNum.close();
  return 0;
}
