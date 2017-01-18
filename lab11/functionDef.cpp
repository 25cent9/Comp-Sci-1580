/*
  Programmer:  Innocent Niyibizi
  Instructor:  Sannihitha Muppidi
  Section:     D
  Date:        11/1/16
  Description: Definition file for the function
*/
#include <fstream>
#include <math.h>
#include "functionHeader.h"
using namespace std;
const int TURK_DIVISOR = 3;
const int ARRSIZE = 80;
void getData(char relation[], char name[], int& count, fstream& in)
{
  in.ignore();
  in.getline(relation,ARRSIZE,';');
  in.getline(name,ARRSIZE,';');
  in>>count;
  return;
}

void printIvite(char relation[], char name[], ofstream& out)
{
  //Printing data to file
  out<<"################################################################\n";
  out<<"Dear "<<relation<<" "<<name<<"y, \nwe cordially invite you and your"
  " family"
  " to the Thanksgiving Dinner on November 22nd, hosted by the Niyibizi's."
  " We hope to see you soon\n";
  out<<"--------------------------------------------------------------------\n";
  return;
}

void printNumGuest(int numGuest, ofstream& out)
{
  int numTurks = 0; //Int to hold number of turkeys
  out<<"Number of guests: "<<numGuest<<"\n";
  numTurks = ceil(numGuest/TURK_DIVISOR); //Rounding the quoitent number up
  out<<"Number of turkey required for the party is: "<<numTurks<<"\n";
  return;
}
