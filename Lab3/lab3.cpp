/*
Programmer:  Innocent Niyibizi
Instructor:  Sannihitha Muppidi 
Section:     D
Date:        09/06/16
Description: Create a program to calulate the area and circumference of a pizza
*/
#include<iostream>
#include<math.h>
using namespace std;
float const PI = 3.14;
int main()
{ 
 //Declaring the variables 
 float radius = 0.0, area = 0.0, circumference = 0.0;
 
 //Gathering the radius from the user
 cout<<"Please enter the radius of the pizza: ";
 cin>>radius;
 
 //Calculations
 area = PI*radius*radius; //Calculating the area of the pizza
 circumference = 2*PI*radius; //Calulating the circumference of the pizza
 
 //Displaying the output to the user
 cout<<"Area of the pizza: "<<static_cast<int>(area)<<endl;
 cout<<"Circumference of the pizza: "<<static_cast<int>(circumference)<<endl; 
 
 return 0;
}
