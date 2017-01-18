/*
  Programmer:  Innocent Niyibizi
  Instructor:  Sannihitha Muppidi
  Section:     D
  Date:        11/8/16
  Description: Definition file for the class functions
*/
#include "header.h"
#include <iostream>
using namespace std;

void Family::greeting()
{
  //Greeting message
  cout<<"Welcome to the list of ThanksGiving invitees."<<endl;
  return;
}

void Family::prompt()
{
  //Promting the user for input
  cout<<"Enter the name of the realtive: ";
  cin.ignore();
  cin.getline(m_name, MAX_LENGTH);
  cout<<"Enter the relation: ";
  cin.getline(m_relation, MAX_LENGTH);
  cout<<"Enter the number of family members: ";
  cin>>m_numMembers;
  cin.ignore();
  return;
}

void Family::print()
{
  //Printing the member Variables
  cout<<"***Details of the invitees***"<<endl;
  cout<<"Name:  "<<m_name<<endl;
  cout<<"Relation:  "<<m_relation<<endl;
  cout<<"Number of family members:  "<<m_numMembers<<endl;
  return;
}

void Family::mistake()
{
  //Variables to hold temporary values
  short num = 0;
  short change = 0;
  cout<<"Oops! Did you enter a wrong number?  Would you like to change the"
  " number of family members of this family? If yes, press 1: ";
  cin>>num; //Gathering input
  //Checking the user's input
  if(num == 1)
  {
    cout<<"If you would like to increase the number of members press 1,"
          " if you want to decrement press 2: ";
    cin>>num;
    switch (num) {
      case 1:
        cout<<"What is the increment value?: ";
        cin>>change;
        m_numMembers+=change; //Incrementing the family members
        break;
      case 2:
        cout<<"What is the decrement value?: ";
        cin>>change;
        m_numMembers-=change; //Decrementing the family members
        break;
    }
    cout<<"The number of members of "<<m_name<<"\'s family has changed to "
        <<m_numMembers<<endl;
  }
  return;
}

void Family::signoff() {
  cout<<"Have a great day!!"<<endl; //Signoff message
  return;
}
