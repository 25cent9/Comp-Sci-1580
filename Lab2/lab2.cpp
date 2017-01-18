/*
Programmer: Innocent Niyibizi
Instructor: Sannihitha Muppidi
Section:    D
Date:       8/30/16
Purpose:    Create a program that will help with calculating the total purchase at a bakery
*/

#include <iostream>
using namespace std;

int main()
{
  int numOfMuffins = 0, numOfCinnamonRolls = 0;  //Declaring integer variables for the number of muffins and cinnamon rolls
  float muffinCost = 0.0, cinnamonRollCost = 0.0,  totalCost = 0.0; //Declaring float variables for the cost of the muffins, cinnamon rolls, and the total cost 
  
  //Gathering inputs for the muffins
  cout<<"Please enter the amount of muffins that you would like to purchase: ";
  cin>>numOfMuffins;
  cout<<"Please enter the cost of the muffins: $ ";
  cin>>muffinCost;
  
  //Gathering input for the cinnamon rolls  
  cout<<"Please enter the amount of cinnamon rolls that you would like to purchase: ";
  cin>>numOfCinnamonRolls;
  cout<<"Please enter the cost of the cinnamon rolls: $ ";
  cin>>cinnamonRollCost;
  
  //Calculations
  muffinCost = numOfMuffins*muffinCost; //Calculating the cost of muffins
  cinnamonRollCost = numOfCinnamonRolls*cinnamonRollCost; //Calculating the cost of cinnamon rolls
  totalCost = muffinCost+cinnamonRollCost;
  
  //Displaying the totals
  cout<<"Toatl Cost: $"<<totalCost<<endl;
  
  return 0;
}
