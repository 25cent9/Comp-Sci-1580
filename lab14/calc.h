/*
  Programmer:  Innocent Niyibizi
  Instructor:  Sannihitha Muppidi
  Section:     D
  Date:        11/29/16
  Description: Header file for the template calc class
*/
#ifndef CALC_H
#define CALC_H
using namespace std;

//Templated class for math operations
template <class T>
class calc
{
  public:
    int intCount, doubleCount;
    calc(){ intCount = 0; doubleCount =0;}
    void increaseIntCounter()
    {
      intCount++;
    }
    void increaseDoubleCounter()
    {
      doubleCount++;
    }
    void showTotalOperation(int dCount, int iCount)
    {
      cout<<"Total Number of Operations: "<<dCount+iCount<<endl;
    }
    T multiply(T x, T y);
    T add(T x, T y);

};
#include "calc.hpp"
#endif
