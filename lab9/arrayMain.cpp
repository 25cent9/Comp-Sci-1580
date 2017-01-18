/*
  Programmer:  Innocent Niyibizi
  Instructor:  Sannihitha Muppidi
  Section:     D
  Date:        10/18/16
  Description: Program to simulate battle ships firing at each other
*/
#include "array.hpp"
#include <iostream>

using namespace std;
const int ARRAYSIZE = 5;  //The size of the array
int main()
{
  //Declaring arrays for each data type
  int intArray[ARRAYSIZE]={0,0,0,0,0};
  float floatArray[ARRAYSIZE]={0.0,0.0,0.0,0.0,0.0};

  //Having the user input five integer values
  cout<<"Enter five integer values: "<<endl;
  for(int i = 0; i<5; i++)
  {
    cin>>intArray[i];
  }
  //Printing out the smallest integer numbers
  cout<<"Minimum integer value in the integer array: "
      <<minArray(intArray, ARRAYSIZE)<<endl;

  //Having the user input five floating numbers
  cout<<"Enter five floating values: "<<endl;
  for(int i=0; i<5; i++)
  {
    cin>>floatArray[i];
  }
  //Printing out the smallest flating number
  cout<<"Minimum floating value in the floating array: "
      <<minArray(floatArray, ARRAYSIZE)<<endl;

  return 0;
}
