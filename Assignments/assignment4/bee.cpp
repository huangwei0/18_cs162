#include "bee.h"
#include <iostream>
using namespace std;

/******************************************************
** Program: Game()
** Author: Wei Huang
** Date: 5/28/2018
** Description:constructor
** Input:noe
** Output:noen
******************************************************/
Bee::Bee(){
    Armor = 3;
    position = 0;
}
/******************************************************
** Program: ~Bee(); Bee(const Bee& copy) const Bee& Bee::operator = (const Bee& copy)
** Author: Wei Huang
** Date: 5/28/2018
** Description:big 3
** Input:noe
** Output:noen
******************************************************/
Bee::~Bee(){

}
Bee::Bee(const Bee& copy){
  Armor = copy.Armor;
  position = copy.position;
  num = 1;
}

const Bee& Bee::operator = (const Bee& copy){
  Armor = copy.Armor;
  position = copy.position;
    return *this;
}
/******************************************************
** Program:get_Armor() set_Armor(int A)
** Author: Wei Huang
** Date: 5/28/2018
** Description:get and set armor
** Input:noe
** Output:noen
******************************************************/
int Bee::get_Armor(){
  return Armor;
}

void Bee::set_Armor(int A){

  Armor = A;
}
/******************************************************
** Program:get_position() set_position(int p)
** Author: Wei Huang
** Date: 5/28/2018
** Description:get and set position
** Input:noe
** Output:noen
******************************************************/
int Bee::get_position(){
  return position;
}

void Bee::set_position(int p){
  position = p;
}

int Bee::get_num(){
  return num;
}

void Bee::set_num(int n){
  num = n;
}
