/*
  Programmer:  Innocent Niyibizi
  Instructor:  Sannihitha Muppidi
  Section:     D
  Date:        10/11/16
  Description: Header file to hold the template  
*/
#ifndef ARRAY_H
#define ARRAY_H

/*
  Description: Template to find smallest value of an array
  Pre:         Size is greater than 0
  Post:        The smallest number is returned
*/
template<typename T>
T minArray(T array[], const int size)
{
  //Variable to hold the first value of the array
  T min= array[0];
  //Loop to go through the entire array
  for(int i=1; i<size; i++)
  {
    //If the value of min is greater than the current array element
    //The current array element is placed into min
    if(array[i] < min)
    {
      min = array[i];
    }
  }
  return min; //Returning min
}

#endif
