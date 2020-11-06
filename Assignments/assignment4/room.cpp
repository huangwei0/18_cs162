#include <iostream>
#include "room.h"
/******************************************************
** Program:Room()
** Author: Wei Huang
** Date: 5/28/2018
** Description:constructor
** Input:noe
** Output:noen
******************************************************/
Room::Room(){
  a = NULL;
  b = NULL;
  check =0;
  ant_num =0;
  bee_num = 0;
}
/******************************************************
** Program: ~Room(); Room(const Room& copy) const Room& Room::operator = (const Room& copy)
** Author: Wei Huang
** Date: 5/28/2018
** Description:big 3
** Input:noe
** Output:noen
******************************************************/
Room::~Room(){
  if(a!= NULL){
    delete a;
  }
  if(b != NULL){
    delete b;
  }
}

Room::Room(const Room& copy){
  a = copy.a;
  b = copy.b;
  check = copy.check;
}

const Room& Room::operator = (const Room& copy){
  a = copy.a;
  b = copy.b;
  check = copy.check;
  return *this;
}

/******************************************************
** Program:get_a() get_a()
** Author: Wei Huang
** Date: 5/28/2018
** Description:get and set armor
** Input:noe
** Output:noen
******************************************************/
Ant* Room::get_a(){
  return a;
}
void Room::set_a(int t){
  if(t == 1){
  a = new Harvester;

  }
  if(t==2){
    a = new Thrower;

  }
  if(t==3){
    a = new Fire;

  }
  if(t==4){
    a = new long_Thrower;

  }
  if(t==5){
    a = new Short_Thrower;

  }
  if(t==6){
    a = new Wall;

  }
  if(t==7){
    a = new Ninja;

  }
  if(t==8){
    a = new Bodyguard;

  }
}
/******************************************************
** Program:get_b() get_b()
** Author: Wei Huang
** Date: 5/28/2018
** Description:get and set armor
** Input:noe
** Output:noen
******************************************************/
Bee* Room::get_b(){
  return b;
}
void Room::set_b(){
  b = new Bee;
}

/******************************************************
** Program:get_p() get_p()
** Author: Wei Huang
** Date: 5/28/2018
** Description:get and set armor
** Input:noe
** Output:noen
******************************************************/
int Room::get_p(){
  return p;
}

void Room::set_p(int q){
  p = q;
}
/******************************************************
** Program:get_check() get_check()
** Author: Wei Huang
** Date: 5/28/2018
** Description:get and set armor
** Input:noe
** Output:noen
******************************************************/
int Room::get_check(){
  return check;
}
void Room::set_check(int w){
  check = w;
}

int Room::get_ant_num(){
  return ant_num;
}

void Room::set_ant_num(int a_n){
  ant_num = a_n;
}

int Room::get_bee_num(){
  return bee_num;
}
void Room::set_bee_num(int b_n){
  bee_num = b_n;
}

void Room::dele_a(){
  if(a->get_Armor()==0){
    check =0;
    ant_num--;

  }
}
void Room::dele_b(){
  if(b->get_Armor()==0){
    check =0;
    bee_num--;

  }
}
