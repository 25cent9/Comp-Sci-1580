/*
  Programmer:  Innocent Niyibizi
  Instructor:  Sannihitha Muppidi
  Section:     D
  Date:        12/6/16
  Description: Count to 100 and back using recursion
*/

#include <iostream>

using namespace std;

int main()
{
  int n = 0;
  cout<<"Please enter the value of N: ";
  cin>>n;
  for(int i=1; i<n; i++)
  {
    if(i%3==0 && i%5==0)
    {
      cout<<"FizzBuzz"<<endl;
    }
    else if(i%3==0)
    {
      cout<<"Fizz"<<endl;
    }
    else if(i%5==0)
    {
      cout<<"Buzz"<<endl;
    }
    else
    {
      cout<<i<<endl;
    }
  }
  return 0;
}
