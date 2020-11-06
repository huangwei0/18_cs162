#include "apartment.h"
#include "citizen.h"
#include <iostream>
#include <string>

using namespace std;

Citizen::Citizen(){
  agreeability =(rand()%5)+1;
  budget = (rand()%4500)+500;
}

Citizen::~Citizen(){

}

Citizen::Citizen(const Citizen& copy){
  agreeability = copy.agreeability;
  budget = copy.budget;
}

const Citizen& Citizen::operator = (const Citizen& copy){
  agreeability = copy.agreeability;
  budget = copy.budget;
  return *this;
}

int Citizen::get_agreeability()const{
  return agreeability;
}

void Citizen::set_agreeability(int A){
  agreeability = A;
 }

 int Citizen::get_budget()const{
   return budget;
 }

 void Citizen::set_budget(int B){
   budget = B;
 }
