/*
  Programmer:  Innocent Niyibizi
  Instructor:  Sannihitha Muppidi
  Section:     D
  Date:        11/1/16
  Description: Header file for the function
*/
#ifndef FUNCTIONHEADER_H
#define FUNCTIONHEADER_H

#include <fstream>
using namespace std;

/*
  Description: Function to get data from input file
  Pre:         File must be open
  Post:        Data is gathered and placed in respective variables
*/
void getData(char[], char[], int&, fstream&);

/*
  Description: Function to print names and relations to output file
  Pre:         File must be open
  Post:        Data is printed to output file
*/
void printIvite(char[], char[], ofstream&);

/*
  Description: Function to print number of guests and turkeys to file
  Pre:         File must be open
  Post:        Data is printed to output file
*/
void printNumGuest(int, ofstream&);

#endif
