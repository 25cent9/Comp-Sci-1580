/*
  Programmer:  Innocent Niyibizi
  Instructor:  Sannihitha Muppidi
  Section:     D
  Date:        11/15/16
  Description: Definition file for the box class
*/

#include <iostream>
#include "box.h"
using namespace std;

Box::Box()
{
  m_length =1;
  m_width = 1;
}

Box::Box(int l, int w)
{
  m_length = l;
  m_width = w;
}

Box& Box::operator+(const Box& rhs)
{
  m_length += rhs.m_length;
  m_width += rhs.m_width;
  return *this;
}

Box& Box::operator=(const Box& rhs)
{
  m_length = rhs.m_length;
  m_width = rhs.m_width;
  return *this;
}

Box& Box::operator-(const Box& rhs)
{
  m_length -= rhs.m_length;
  m_width -= rhs.m_width;
  return *this;
}

Box& Box::operator++()
{
  ++m_length;
  ++m_width;
  return *this;
}

void show(const Box& box)
{
  cout<<"length: "<<box.m_length<<"\nWidth: "<<box.m_width<<endl;
}
