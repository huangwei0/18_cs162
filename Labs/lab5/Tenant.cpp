#include "property.h"
#include "Tenant.h"
#include <iostream>
#include <string>

using namespace std;

Tenant::Tenant(){
  agreeability = 0;
  budget = 0;
}

Tenant::~Tenant(){

}

Tenant::Tenant(const Tenant& copy){
  agreeability = copy.agreeability;
  budget = copy.budget;
}

const Tenant& Tenant::operator = (const Tenant& copy){
  agreeability = copy.agreeability;
  budget = copy.budget;
  return *this;
}

int Tenant::get_agreeability()const{
  return agreeability;
}

void Tenant::set_agreeability(int A){
  agreeability = A;
 }

 int Tenant::get_budget()const{
   return budget;
 }

 void Tenant::set_budget(int B){
   budget = B;
 }
