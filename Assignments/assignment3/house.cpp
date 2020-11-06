#include <iostream>
#include "house.h"

using namespace std;
/******************************************************
** Program: House() ~House() House(const House& copy) const House& House::operator = (const House& copy)
** Author: Wei Huang
** Date: 5/13/2018
** Description:big 3
** Input:noe
** Output:noen
******************************************************/
House::House():Property(){
  c = new Citizen;
  mortgage =get_property_value();
  people_number = 1;
}

House::~House(){
if(c != NULL){
  delete c;
}
}

House::House(const House& copy){
  c = copy.c;
}

const House& House::operator = (const House& copy){
  if(c != NULL){
    delete c;
  }
  c = copy.c;
  return *this;
}
/******************************************************
** Program: get_c()  set_c(Citizen *C)
** Author: Wei Huang
** Date: 5/13/2018
** Description:get and set
** Input:noe
** Output:noen
******************************************************/
Citizen* House::get_c()const{
  return c;
}

void House::set_c(Citizen *C){
  c = C;
}
/******************************************************
** Program: set_mortgage(int n) get_mortgage()
** Author: Wei Huang
** Date: 5/13/2018
** Description:get and set
** Input:noe
** Output:noen
******************************************************/
void House::set_mortgage(int n){
  mortgage = n;
}

int House::get_mortgage()const{
  return mortgage;

}
/******************************************************
** Program: print_house()
** Author: Wei Huang
** Date: 5/13/2018
** Description:print type
** Input:noe
** Output:noen
******************************************************/
string House::print_house(){
  string a="House ";
  return a;
}
/******************************************************
** Program: Tenant()
** Author: Wei Huang
** Date: 5/13/2018
** Description:print tenant
** Input:noe
** Output:noen
******************************************************/
void House::Tenant(){
  cout<<"Tenant budget: "<<c->get_budget()<<"  Tenant agreeability: "<<c->get_agreeability()<<endl;
}
/******************************************************
** Program: get_agree() get_bud()
** Author: Wei Huang
** Date: 5/13/2018
** Description:get and set
** Input:noe
** Output:noen
******************************************************/
int House::get_agree(){
  return c->get_agreeability();
}

int House::get_bud(){
  return c->get_budget();
}
/******************************************************
** Program: dele_h()
** Author: Wei Huang
** Date: 5/13/2018
** Description:help function
** Input:noe
** Output:noen
******************************************************/
void House::dele_h(){
  people_number = 0;
  if(c != NULL){
    delete c;
  }
  c = NULL;
}

int House::get_people(){
  return people_number;
}
