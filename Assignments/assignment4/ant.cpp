#include "ant.h"

#include <iostream>

using namespace std;
/******************************************************
** Program:Ant()
** Author: Wei Huang
** Date: 5/28/2018
** Description:constructor
** Input:noe
** Output:noen
******************************************************/
Ant::Ant(){
  food_cost = 0;
  Armor = 0;
}
/******************************************************
** Program: const Ant& Ant::operator = (const Ant& copy) ~Ant(); Ant(const Ant& copy)
** Author: Wei Huang
** Date: 5/28/2018
** Description:big 3
** Input:noe
** Output:noen
******************************************************/
Ant::~Ant(){

}

Ant::Ant(const Ant& copy){
  food_cost = copy.food_cost;
  Armor = copy.Armor;
}

const Ant& Ant:: operator = (const Ant& copy){
  food_cost = copy.food_cost;
  Armor = copy.Armor;
  return *this;
}
/******************************************************
** Program:get_food_cost() get_food_cost()
** Author: Wei Huang
** Date: 5/28/2018
** Description:get and set armor
** Input:noe
** Output:noen
******************************************************/
int Ant::get_food_cost(){
  return food_cost;
}

void Ant::set_food_cost(int cost){
  food_cost = cost;
}
/******************************************************
** Program:get_postion() get_postion()
** Author: Wei Huang
** Date: 5/28/2018
** Description:get and set armor
** Input:noe
** Output:noen
******************************************************/
int Ant::get_position(){
  return position;
}

void Ant::set_position(int p){
    position = p;
}
/******************************************************
** Program:get_Armor() set_Armor()
** Author: Wei Huang
** Date: 5/28/2018
** Description:get and set armor
** Input:noe
** Output:noen
******************************************************/
int Ant::get_Armor(){
    return Armor;
}
void Ant::set_Armor(int A){
  Armor = A;
}
/******************************************************
** Program:get_number() set_number()
** Author: Wei Huang
** Date: 5/28/2018
** Description:get and set armor
** Input:noe
** Output:noen
******************************************************/
int Ant::get_number(){
  return number;
}
void Ant::set_number(int n){
    number = n;
}
/******************************************************
** Program:get_name() set_name()
** Author: Wei Huang
** Date: 5/28/2018
** Description:get and set armor
** Input:noe
** Output:noen
******************************************************/
string  Ant::get_name(){
  return name;
}

void Ant::set_name(string N){
  name = N;
}
/******************************************************
** Program:Harvester() ~Harvester()
** Author: Wei Huang
** Date: 5/28/2018
** Description:constructor and disstructor
** Input:noe
** Output:noen
******************************************************/
Harvester::Harvester(){
  food_cost = 2;
  position = 0;
  number = 1;
  name = "H";
  Armor = 1;
}

Harvester::~Harvester(){

}
/******************************************************
** Program:Thrower() ~Thrower()
** Author: Wei Huang
** Date: 5/28/2018
** Description:constructor and disstructor
** Input:noe
** Output:noen
******************************************************/
Thrower::Thrower(){
  food_cost = 4;
  position = 0;
  number = 2;
  name = "T";
  Armor = 1;
}

Thrower::~Thrower(){

}
/******************************************************
** Program:Fire() ~Fire()
** Author: Wei Huang
** Date: 5/28/2018
** Description:constructor and disstructor
** Input:noe
** Output:noen
******************************************************/
Fire::Fire(){
  food_cost = 4;
  position = 0;
  number = 3;
  name = "F";
  Armor = 1;
}

Fire::~Fire(){

}
/******************************************************
** Program:long_Thrower() ~long_Thrower()
** Author: Wei Huang
** Date: 5/28/2018
** Description:constructor and disstructor
** Input:noe
** Output:noen
******************************************************/
long_Thrower::long_Thrower(){
  food_cost = 3;
  position = 0;
  number = 4;
  name = "L";
  Armor = 1;
}

long_Thrower::~long_Thrower(){
}
/******************************************************
** Program:Short_Thrower() ~Short_Thrower()
** Author: Wei Huang
** Date: 5/28/2018
** Description:constructor and disstructor
** Input:noe
** Output:noen
******************************************************/
Short_Thrower::Short_Thrower(){
  food_cost = 3;
  position = 0;
  number = 5;
  name = "S";
  Armor = 1;
}

Short_Thrower::~Short_Thrower(){

}
/******************************************************
** Program:Wall() ~Wall()
** Author: Wei Huang
** Date: 5/28/2018
** Description:constructor and disstructor
** Input:noe
** Output:noen
******************************************************/
Wall::Wall(){
  food_cost = 4;
  position = 0;
  number = 6;
  name = "W";
  Armor = 4;
}
Wall::~Wall(){

}
/******************************************************
** Program:Ninja() ~Ninja()
** Author: Wei Huang
** Date: 5/28/2018
** Description:constructor and disstructor
** Input:noe
** Output:noen
******************************************************/
Ninja::Ninja(){
  food_cost = 6;
  position = 0;
  number = 7;
  name = "N";
  Armor = 1;
}

Ninja::~Ninja(){

}
/******************************************************
** Program:Bodyguard() ~Bodyguard()
** Author: Wei Huang
** Date: 5/28/2018
** Description:constructor and disstructor
** Input:noe
** Output:noen
******************************************************/
Bodyguard::Bodyguard(){
  food_cost = 4;
  position = 0;
  number = 8;
  name = "B";
  Armor = 2;
}
Bodyguard::~Bodyguard(){

}

string  Harvester::get_name(){
  return name;
}

string  Thrower::get_name(){
  return name;
}

string  Fire::get_name(){
  return name;
}
string  long_Thrower::get_name(){
  return name;
}
string  Short_Thrower::get_name(){
  return name;
}
string  Wall::get_name(){
  return name;
}
string  Ninja::get_name(){
  return name;
}
string  Bodyguard::get_name(){
  return name;
}
