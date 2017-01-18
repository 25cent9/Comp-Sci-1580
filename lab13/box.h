/*
  Programmer:  Innocent Niyibizi
  Instructor:  Sannihitha Muppidi
  Section:     D
  Date:        11/15/16
  Description: Header file for the box class
*/
#ifndef BOX_H
#define BOX_H

class Box {
   private:
     int m_length, m_width; //Dimensions
   public:
     Box(); //Default constructor
     Box(int len, int wid); //Overloaded constructor
     //Function to show the dimensions of the box passed through
     friend void show(const Box& objectname);

     //Overloading the operators
     Box& operator+(const Box& objectname);
     Box& operator-(const Box& objectname);
     Box& operator=(const Box& objectname);
     Box& operator++();
};

#endif
