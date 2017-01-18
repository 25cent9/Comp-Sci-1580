/*
  Programmer:  Innocent Niyibizi
  Instructor:  Sannihitha Muppidi
  Section:     D
  Date:        12/6/16
  Description: Count to 100 and back using recursion
*/

#include <iostream>

using namespace std;

void add(int);
void subtract(int);
int main()
{
  add(0);
  subtract(100);
  cout<<endl;
  return 0;
}

void add(int n)
{
  if(n<=100)
  {
    cout<<n<<" ";
    add(n+1);
  }
  return;
}
void subtract(int n)
{
  if(n>=0)
  {
    cout<<n<<" ";
    subtract(n-1);
  }
  return;
}
