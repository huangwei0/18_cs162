#include <iostream>
#include <cstdlib>
#include "apartment.h"


using namespace std;
/******************************************************
** Program: Apartment& Apartment :: operator = (const Apartment& copy) Apartment() ~Apartment() Apartment(const Apartment& copy)
** Author: Wei Huang
** Date: 5/13/2018
** Description:big 3
** Input:noe
** Output:noen
******************************************************/
Apartment::Apartment():Property(){
  num_of_room = (rand()%10)+1;
  c = new Citizen [num_of_room];
  saf = new int [num_of_room];
  bud = new int [num_of_room];
  mortgage =get_property_value();
}

Apartment::~Apartment(){
  if(c != NULL){
    delete [] c;
  }
  if(saf != NULL){
    delete [] saf;
  }
  if(bud != NULL){
    delete [] bud;
  }
}

Apartment::Apartment(const Apartment& copy){
  num_of_room = copy.num_of_room;
  for(int i=0;i<num_of_room;i++){
    c[i] = copy.c[i];
  }
}

const Apartment& Apartment :: operator = (const Apartment& copy){
  if(c != NULL){
    delete [] c;
  }
  if(saf != NULL){
    delete [] saf;
  }
  if(bud != NULL){
    delete [] bud;
  }
    num_of_room = copy.num_of_room;
    for(int i=0;i<num_of_room;i++){
      c[i] = copy.c[i];
    }
    return *this;
}
/******************************************************
** Program: get_c()const  set_c(Citizen *C)
** Author: Wei Huang
** Date: 5/13/2018
** Description:get and set
** Input:noe
** Output:noen
******************************************************/
Citizen* Apartment::get_c()const{
  return c;
}

void Apartment::set_c(Citizen *C){
  c = C;
}
/******************************************************
** Program: get_num_of_room() set_num_of_room(int n)
** Author: Wei Huang
** Date: 5/13/2018
** Description:get and set
** Input:noe
** Output:noen
******************************************************/
int Apartment::get_num_of_room(){
  return num_of_room;
}

void Apartment::set_num_of_room(int n){
  num_of_room = n;
}

/******************************************************
** Program: get_mortgage() set_mortgage(int m)
** Author: Wei Huang
** Date: 5/13/2018
** Description:get and set
** Input:noe
** Output:noen
******************************************************/
int Apartment::get_mortgage()const{
  return mortgage;

}
void  Apartment::set_mortgage(int m){
  mortgage = m;
}
/******************************************************
** Program: print_apartment()
** Author: Wei Huang
** Date: 5/13/2018
** Description:print type
** Input:noe
** Output:noen
******************************************************/
string Apartment::print_apartment(){
  string a ="Apartment ";
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
void Apartment::Tenant(){
  cout<<"There is "<<num_of_room<<" tenant(s)."<<endl;

  for(int i = 0;i<num_of_room;i++){
    cout<<"Tenant budget: "<<c[i].get_budget()<<" Tenant agreeability: "<<c[i].get_agreeability()<<endl;
  }
}
/******************************************************
** Program: Tenant_budget() bud_get(int b)
** Author: Wei Huang
** Date: 5/13/2018
** Description:get and set
** Input:noe
** Output:noen
******************************************************/
void Apartment::Tenant_budget(){
  for(int i=0;i<num_of_room;i++){
    bud[i] = c[i].get_budget();
  }
}

int Apartment::bud_get(int b){
  return bud[b];
}
/******************************************************
** Program: Tenant_agree() get_single_saf(int t)
** Author: Wei Huang
** Date: 5/13/2018
** Description:get and set
** Input:noe
** Output:noen
******************************************************/
void Apartment::Tenant_agree(){
  for(int i=0;i<num_of_room;i++){
    saf[i] = c[i].get_agreeability();
  }
}

int Apartment::get_single_saf(int t){
  return saf[t];
}
/******************************************************
** Program: dele_()
** Author: Wei Huang
** Date: 5/13/2018
** Description:help function
** Input:noe
** Output:noen
******************************************************/
void Apartment::dele_p(int t,int a,Citizen *b){
  if(c!=NULL){
    delete [] c;
  }
  c = new Citizen[t];
  int f = 0;
  for(int i=0;i<t;i++){
    if(i==a){
      c[i].set_agreeability(b[i+1].get_agreeability());
      c[i].set_budget(b[i+1].get_budget());
      bud[i] = c[i].get_budget();
      saf[i] = c[i].get_agreeability();
      f = 1;
    }
    else{
      if(f==1){
      c[i].set_agreeability(b[i+1].get_agreeability());
      c[i].set_budget(b[i+1].get_budget());
      bud[i] = c[i].get_budget();
      saf[i] = c[i].get_agreeability();
    }
     else{
       c[i].set_agreeability(b[i].get_agreeability());
       c[i].set_budget(b[i].get_budget());
       bud[i] = c[i].get_budget();
       saf[i] = c[i].get_agreeability();
     }
  }
}
}
