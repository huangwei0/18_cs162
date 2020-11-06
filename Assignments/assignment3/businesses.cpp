#include "businesses.h"
#include "business.h"
#include <iostream>

using namespace std;

Businesses::Businesses(){
	agreeability = (rand()%5)+1;
	budget = (rand()%8000)+2000;
}

Businesses::~Businesses(){

}

Businesses::Businesses(const Businesses& copy){
	agreeability = copy.agreeability;
	budget = copy.budget;
}

const Businesses&Businesses :: operator = (const Businesses& copy){
	agreeability = copy.agreeability;
	budget = copy.budget;
	return *this;
}

int Businesses::get_agreeability()const{
	return agreeability;
}

void Businesses::set_agreeability(int A){
	agreeability = A;
}

int Businesses::get_budget()const{
	return budget;
}

void Businesses::set_budget(int B){
	budget = B;
}
