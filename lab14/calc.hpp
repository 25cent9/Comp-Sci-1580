/*
  Programmer:  Innocent Niyibizi
  Instructor:  Sannihitha Muppidi
  Section:     D
  Date:        11/29/16
  Description: Hpp file for the template calc class functions
*/

//Templated functions for adding and subtracting

template <typename T>
T calc <T>::multiply(T lhs, T rhs)
{
  return lhs*rhs;
}

template <typename T>
T calc <T>::add(T lhs, T rhs)
{
  return lhs+rhs;
}
