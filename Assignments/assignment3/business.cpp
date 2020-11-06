
#include "business.h"

#include <iostream>
#include <cstdlib>

using namespace std;
/******************************************************
** Program: Business():Property ~Business() Business(const Business& copy) Business&Business :: operator = (const Business& copy)
** Author: Wei Huang
** Date: 5/13/2018
** Description:3 big
** Input:none
** Output:noen
******************************************************/
Business::Business():Property(){
  room_number = (rand()%5)+1;
  p = new Businesses [room_number];
  const string arrayS[3] = {"small","medium","large"};
  int randsize = rand()%3;
  size = arrayS[randsize];
  satify = new int[room_number];
  bu = new int [room_number];

}

Business::~Business(){
  if(p != NULL){
    delete [] p;
  }
  if(bu != NULL){
    delete [] bu;
  }
  if(satify !=NULL){
    delete [] satify;
  }
}

Business::Business(const Business& copy){
  room_number = copy.room_number;
  size = copy.size;
  for(int i=0;i<room_number;i++){
    p[i]=copy.p[i];
  }

}

const Business&Business :: operator = (const Business& copy){
  if( p != NULL){
    delete [] p;
  }
  if(bu != NULL){
    delete [] bu;
  }
  if(satify !=NULL){
    delete [] satify;}

  room_number = copy.room_number;
  size = copy.size;
  for(int i=0;i<room_number;i++){
    p[i]=copy.p[i];
  }
  return *this;
}
/******************************************************
** Program: Business::get_p() set_p(Businesses *a)
** Author: Wei Huang
** Date: 5/13/2018
** Description:get and set
** Input:a
** Output:noen
******************************************************/
Businesses* Business::get_p()const{
  return p;
}

void Business::set_p(Businesses *a){
    p = a;

}
/******************************************************
** Program: Business::get_room_number() set_room_number(int n)
** Author: Wei Huang
** Date: 5/13/2018
** Description:get and set
** Input:n
** Output:noen
******************************************************/
int Business::get_room_number()const{
    return room_number;
}

void Business::set_room_number(int n){
  room_number = n;
}

/******************************************************
** Program: get_mortgage()c set_mortgage(int m)
** Author: Wei Huang
** Date: 5/13/2018
** Description:get and set
** Input:m
** Output:noen
******************************************************/
int Business::get_mortgage()const{
  return mortgage;

}
void Business::set_mortgage(int m){
  mortgage = m;
}
/******************************************************
** Program: get_size() set_size(int s)
** Author: Wei Huang
** Date: 5/13/2018
** Description:get and set
** Input:s
** Output:noen
******************************************************/
string Business::get_size()const{
  return size;
}

void Business::set_size(int s){
  size = s;
}
/******************************************************
** Program:print_business()
** Author: Wei Huang
** Date: 5/13/2018
** Description:prinr type
** Input:noe
** Output:noen
******************************************************/
string Business::print_business(){
  string a ="Business ";
  return a;
}

void Business::Tenant(){
  room_number = get_room_number();
  cout<<"There is "<<get_room_number()<<" tenant(s)"<<endl;
  for(int i=0;i<room_number;i++){
    cout<<"Tenant budget: "<<p[i].get_budget()<<"  Tenant agreeability: "<<p[i].get_agreeability()<<" size: "<<get_size()<<endl;
  }
}

void Business::Tenant_budget(){
  for(int i=0;i<room_number;i++){
    bu[i] = p[i].get_budget();
  }
}

int Business::bu_get(int b){
  return bu[b];
}
/******************************************************
** Program:Tenant_agree()
** Author: Wei Huang
** Date: 5/13/2018
** Description:get and set
** Input:noe
** Output:noen
******************************************************/
void Business::Tenant_agree(){
  for(int i=0;i<room_number;i++){
    satify[i]=p[i].get_agreeability();
  }
}
/******************************************************
** Program: get_single_agr(int t) set_sin_p(int q)
** Author: Wei Huang
** Date: 5/13/2018
** Description:get and set
** Input:s
** Output:noen
******************************************************/
int Business::get_single_agr(int t){
  return satify[t];
}

void Business::set_sin_p(int q){

}
/******************************************************
** Program: dele_p(int t,int a,Businesses *b)
** Author: Wei Huang
** Date: 5/13/2018
** Description:get and set
** Input:t a *b
** Output:noen
******************************************************/
void Business::dele_p(int t,int a,Businesses *b){
  if(p!=NULL){
    delete [] p;
  }
  p = new Businesses[t];
  int f = 0;
  for(int i=0;i<t;i++){
    if(i==a){
      p[i].set_agreeability(b[i+1].get_agreeability());
      p[i].set_budget(b[i+1].get_budget());
      bu[i] = p[i].get_budget();
      satify[i] = p[i].get_agreeability();
      f = 1;
    }
    else{
      if(f==1){
      p[i].set_agreeability(b[i+1].get_agreeability());
      p[i].set_budget(b[i+1].get_budget());
      bu[i] = p[i].get_budget();
      satify[i] = p[i].get_agreeability();
    }
     else{
       p[i].set_agreeability(b[i].get_agreeability());
       p[i].set_budget(b[i].get_budget());
       bu[i] = p[i].get_budget();
       satify[i] = p[i].get_agreeability();
     }
  }
}
}
