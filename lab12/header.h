/*
  Programmer:  Innocent Niyibizi
  Instructor:  Sannihitha Muppidi
  Section:     D
  Date:        11/8/16
  Description: Header file for the class
*/
#ifndef HEADER_H
#define HEADER_H
const int MAX_LENGTH = 80;
class Family
{
public:
  /*
    Description: Function to greet the user
    Pre:         None
    Post:        Greeting is displayed
  */

  void greeting();
  /*
    Description: Function to promt the user for input
    Pre:         None
    Post:        Input is gatherd and variables are changed
  */
  void prompt();

  /*
    Description: Function to print the family details
    Pre:         None
    Post:        Details of the family are displayed
  */
  void print();

  /*
    Description: Function to signoff
    Pre:         None
    Post:        Signoff message is displayed
  */
  void signoff();

  /*
    Description: Function to make changes of the member's family count
    Pre:         None
    Post:        Count is changed
  */
  void mistake();
private:
  //Member variables
  char m_name[80];
  char m_relation[80];
  short m_numMembers;
};


#endif
