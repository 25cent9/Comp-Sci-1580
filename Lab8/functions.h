/*
  Programmer:  Innocent Niyibizi
  Instructor:  Sannihitha Muppidi 
  Section:     D
  Date:        10/4/16
  Description: Header for the functions
*/
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "battleship.h"
#include <string>

using namespace std;

/*
  Description:  Ready the battleship
  Pre:          BattleShip must be declared in main
  Post:         BattleShip is created 
*/
void readyTheShip(BattleShip & , const int );

/*
  Description:  Function to simulate the attacking of battleships
  Pre:          BattleShips must have an attack value and defense value
  Post:         Attacking is simulated
*/
void attack(BattleShip & attacker, BattleShip & attackee);

/*
  Description:  Static flee value is decremented everytime the random
                number is not equal to the flee value
  Pre:          None
  Post:         Simulation of ship trying to flee
*/
bool attemptToFlee();

/*
  Description:  Name of winner is passed to user
  Pre:          None
  Post:         Winner's name is displayed
*/
void winner(const string winner);

/*
  Description:  Displays that there is no winner
  Pre:          None
  Post:         A message is displayed saying that someone fled
*/
void winner();

#endif