/*
  Programmer:  Innocent Niyibizi
  Instructor:  Sannihitha Muppidi 
  Section:     D
  Date:        10/11/16
  Description: Creating the templates
*/
#ifndef TEMPLATES_H
#define TEMPLATES_H
#include <ctime>
#include <cstdlib>

//Template for the random number generator
template<typename T> 
T randomNumber(const T from, const T to)
{
  static bool first = true;
  if(first)
  {
    srand(time(NULL));
    first = false;
  }
  return rand()%(to-from+1)+from;
}


#endif