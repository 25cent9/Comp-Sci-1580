/*
  Programmer:  Innocent Niyibizi
  Instructor:  Sannihitha Muppidi
  Section:     D
  Date:        11/15/16
  Description: Program to practice overloading class functions
*/

#include <iostream>
#include "box.h"
using namespace std;

int main()
{
  //Declaring the boxes
  Box box1(10,20), box2(15,30), box3(90,90);

  //Displaying the boxes
  cout<<"Box 1: "<<endl;
  show(box1);
  cout<<"Box 2: "<<endl;
  show(box2);
  cout<<"Box 3: "<<endl;
  show(box3);

  //Doing the math operations
  cout<<"After adding Box1 with Box2 and assigning it to Box1… "<<endl;
  box1 = box1+box2;
  show(box1);
  cout<<"After Incrementing the dimension of Box1 and assigning it to Box2…\n";
  box2= ++box1;
  cout<<"Box 2: "<<endl;
  show(box2);
  cout<<"Box 1: "<<endl;
  show(box1);
  cout<<"After assigning Box3 to Box1…"<<endl;
  box1=box3;
  cout<<"Box 1: "<<endl;
  cout<<"After subtracting Box2 from Box1 and assigning it to Box2"<<endl;
  box2= box1-box2;
  cout<<"Box 2: "<<endl;
  show(box2);
  return 0;
}
