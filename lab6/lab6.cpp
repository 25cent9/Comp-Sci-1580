/*
  Programmer:  Innocent Niyibizi
  Instructor:  Sannihitha Muppidi 
  Section:     D
  Date:        9/27/16
  Description: Program to help a customer buy Halloween costumes
*/

#include <iostream>

using namespace std;

//Prototypes
void greet();
int confirmOrder();
float calculateBill(int);
void byeBye();

const int COST_PRICE = 48;  //Costant price for the costume

int main()
{
  int numCostume = 0; //Holds number of costumes
  greet();  //Calling greeting
  numCostume = confirmOrder(); //Setting numCost equal to the retun of function
  //Calling the calculateBill function in the cout because it returns the total
  cout<<"Toatl cost of your purchase is $"<<calculateBill(numCostume)<<endl;
  byeBye(); //Calling byeBye function
  return 0;
}

//Greeting
void greet()
{
  cout<<"Hello!! Welcome to the Halloween store!"<<endl;
  cout<<"The Halloween costume is just $"<<COST_PRICE
       <<" today. Grab the offer at the earliest..!! ";
  return;
}

//Fucntion to confirm order
int confirmOrder()
{
  char input = ' '; //Input to see what the user picks
  int num = 0;  //Holds number of costumes
  
  //Loop to run until the user picks yes
  do
  {
    cout<<"How many costumes would you like to buy?: ";
    cin>>num;
    cout<<"You are attempting to purchase "<<num
        <<" costume(s). Is this correct?: (y/n)";
    cin>>input;
  }while(input != 'y' && input != 'Y');
  cout<<"Order confirmed!"<<endl;
  return num; //Returning num to the main function
}

//Calculating the total of the purchase
float calculateBill(int numCost)
{
  return numCost*COST_PRICE;  
}

//Good bye message
void byeBye()
{
  cout<<"Buhbye, Have a nice day..!! "<<endl;
  return;
}