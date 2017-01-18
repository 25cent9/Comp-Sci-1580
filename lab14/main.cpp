/*
  Programmer:  Innocent Niyibizi
  Instructor:  Sannihitha Muppidi
  Section:     D
  Date:        11/29/16
  Description: Program to practice templated classes
*/

#include <iostream>
#include "calc.h"
#include <string>

using namespace std;
short getType(const short);
int main()
{
  short choice;
  calc <int> integers;
  calc <double> doubles;
  string type = "";
  //Loop to run once and then loop until a diffrent number is entered
  do
  {
    //gathering the user's choice
    cout<<"Press 1 to Add, 2 to Multiply, Anything else to exit:";
    cin>>choice;
    //Switch to determine the operation based on the user's choice
    switch (choice) {
      case 1: //Adding
        if(getType(choice) == 1)  //Addding ints
        {
          int val1, val2;
          cout<<"Please enter the value of the first number: ";
          cin>>val1;
          cout<<"Please enter the value of the second number: ";
          cin>>val2;
          integers.increaseIntCounter();  //Increasing the int count
          cout<<"Adding "<<val1<<" and "<<val2<<" you get "
          <<integers.add(val1, val2)<<endl; //Printing result
        }
        else  //Adding doubles
        {
          double val1, val2;
          cout<<"Please enter the value of the first number: ";
          cin>>val1;
          cout<<"Please enter the value of the second number: ";
          cin>>val2;
          doubles.increaseDoubleCounter();  //Increasing the double count
          cout<<"Adding "<<val1<<" and "<<val2<<" you get "
          <<doubles.add(val1, val2)<<endl;  //Printing result
        }
        break;
      case 2:
        if(getType(choice) == 1)
        {
          int val1, val2;
          cout<<"Please enter the value of the first number: ";
          cin>>val1;
          cout<<"Please enter the value of the second number: ";
          cin>>val2;
          integers.increaseIntCounter();
          cout<<"Multiplying "<<val1<<" and "<<val2<<" you get "
          <<integers.multiply(val1, val2)<<endl;  //Printing result
        }
        else
        {
          double val1, val2;
          cout<<"Please enter the value of the first number: ";
          cin>>val1;
          cout<<"Please enter the value of the second number: ";
          cin>>val2;
          doubles.increaseDoubleCounter();
          cout<<"Multiplying "<<val1<<" and "<<val2<<" you get "
          <<doubles.multiply(val1, val2)<<endl; //Printing result
        }
        break;
      default:
        //Showing the operations
        doubles.showTotalOperation(doubles.doubleCount, integers.intCount);
        break;
    }
  }while(choice ==1 || choice ==2);

  return 0;
}

//Function to get type to use
short getType(const short value)
{
  short type;
  if(value==1)
    cout<<"Pres 1 to Add Interger, press 2 to add Double: ";
  else
    cout<<"Pres 1 to multiply Interger, press 2 to multiply Double: ";

  cin>>type;
  return type;
}
