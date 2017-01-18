/*
  Programmer:  Innocent Niyibizi
  Instructor:  Sannihitha Muppidi
  Section:     D
  Date:        11/8/16
  Description: Program to practice classes
*/
#include "header.h"
#include <iostream>
using namespace std;

int main()
{
  Family familyOne, familyTwo;  //intitializing the families
  //First family
  familyOne.greeting();
  familyOne.prompt();
  familyOne.print();
  familyOne.mistake();

  //Second family
  familyTwo.greeting();
  familyTwo.prompt();
  familyTwo.print();
  familyTwo.mistake();
  familyTwo.signoff();
  return 0;
}
