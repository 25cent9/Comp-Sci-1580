/*
  Programmer:  Innocent Niyibizi
  Instructor:  Sannihitha Muppidi 
  Date:        9/13/16
  Description: Create a program to practice loops and branching     
*/

#include <iostream>
using namespace std;
int main()
{
  int userNum = 1;
  
  cout<<"Welcome to the number program! \n";
  if (userNum > 0)
  {
    while(userNum > 0)
    {
      //Getting input from user
      cout<<"Please enter a number: (0 to exit) ";
      cin>>userNum;
      
      //Checking the value of the number and printing accordingly
      if(userNum == 1)
      {
        cout<<"One"<<endl;
      }
      else if(userNum == 2)
      {
        cout<<"Two"<<endl;
      }
      else if(userNum == 3)
      {
        cout<<"Three"<<endl;
      }
      else if(userNum == 4)
      {
        cout<<"Four"<<endl;
      }
      else if(userNum == 5)
      {
        cout<<"Five"<<endl;
      }
      else if(userNum == 6)
      {
        cout<<"Six"<<endl;
      }
      else if(userNum == 7)
      {
        cout<<"Seven"<<endl;
      }  
      else if(userNum == 8)
      {
        cout<<"Eight"<<endl;
        
      }
      else if(userNum == 9)
      {
        cout<<"Nine"<<endl;
      }
      else if(userNum > 9)
      {
        if(userNum % 2 == 0)
        {
          cout<<"Even"<<endl;
        }
        else
        {
          cout<<"Odd"<<endl;
        }
      }
    }
  }
  if(userNum <= 0)
  {
    cout<<"Invalid Input"<<endl;
  }  
  return 0;
}
