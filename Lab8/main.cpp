/*
  Programmer:  Innocent Niyibizi
  Instructor:  Sannihitha Muppidi 
  Section:     D
  Date:        10/11/16
  Description: Program to simulate battle ships firing at each other
*/

#include <iostream>
#include "battleship.h"
#include "functions.h"
#include "templates.hpp"
#include "constants.h"
using namespace std;


int main()
{
  bool flee = false;
  BattleShip ship_1;
  BattleShip ship_2;
  readyTheShip(ship_1,SHIP_1);
  readyTheShip(ship_2,SHIP_2);
  
  //Loop to run while both ships's health is greater than 0
  //Or no one has fleed
  while(ship_1.health > 0 && ship_2.health > 0 && flee==false)
  {
    //Attacking
    attack(ship_1,ship_2);
    attack(ship_2,ship_1);
    //Checking to see if each ship can flee
    if(ship_1.health < FLEE_NUM)
    {
      flee = attemptToFlee();
    }
    else if(ship_2.health < FLEE_NUM)
    {
      flee = attemptToFlee();
    }
    
    if(flee == true)
    {
      winner();
      return 0;
    }
  } 
  if(ship_1.health>ship_2.health)
    winner(ship_1.name);
  else
    winner(ship_2.name);
  
  return 0;
}