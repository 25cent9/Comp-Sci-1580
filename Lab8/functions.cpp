/*
  Programmer:  Innocent Niyibizi
  Instructor:  Sannihitha Muppidi 
  Section:     D
  Date:        10/11/16
  Description: Implementing the functions
*/
#include "functions.h"
#include "templates.hpp"
#include "constants.h"
#include <iostream>
using namespace std;

void readyTheShip(BattleShip & ship, const int shipNumber)
{
  cout<<"What is the name of ship "<<shipNumber<<" :";
  cin>>ship.name;
  ship.health = START_HEALTH;
  ship.defense = randomNumber(DEFENSE_MIN,DEFENSE_MAX);
  ship.attack = randomNumber(ATTACK_MIN,ATTACK_MAX);
  return;
}
void attack(BattleShip & attacker, BattleShip & attackee)
{
  //Gathering the attack value from attacker defense and attackee attack value
  int attack = randomNumber(attacker.defense,attackee.attack);
  attackee.health -= attack;
  cout<<attacker.name<<" dealt "<<attack<<" damage to "<<attackee.name<<endl;
  return;
}
bool attemptToFlee()
{
  //Static int to hold the value of flee
  static int flee=15;
  //Checking too see if the random number is equal to the flee value
  if(flee == randomNumber(1,100))
  {
    return true;  //Returning true
  }
  if(flee > 1)
  {
    flee--;
  }
  return false;
}

void winner()
{
  cout<<"There was a fleeing ship, no one wins!!"<<endl;
  return;
}

void winner(const string winner)
{
  cout<<winner<<" won!"<<endl;
  return;
}