/*
  Programmer:  Innocent Niyibizi
  Instructor:  Sannihitha Muppidi 
  Section:     D
  Date:        10/11/16
  Description: Header file for the battle ships
*/
#ifndef BATTLESHIP_H
#define BATTLESHIP_H
#include <string>

using namespace std;
//Structure for the battleship
struct BattleShip
{
  string name;
  int health;
  short defense;
  short attack;
};


#endif