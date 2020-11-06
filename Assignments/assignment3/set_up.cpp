#include "property.h"
#include "citizen.h"
#include <iostream>
#include <string>

using namespace std;
/******************************************************
** Program: Property() ~Property() Property(const Property& copy) Property& Property::operator = (const Property& copy)
** Author: Wei Huang
** Date: 5/13/2018
** Description:big 3
** Input:noe
** Output:noen
******************************************************/
Property::Property(){
	property_value = 0;
	Mortgage =(rand()%5000)+1;
	string arrayL[5] = {"SE","NE","Midwest","SW","NW"};
  int randindex = rand()%5;
  Location = arrayL[randindex];
	property_tax = 0;
	check_exist = 0;
	  rent = 0;
}


Property::~Property(){

}

Property::Property(const Property& copy){
	property_value = copy.property_value;
	  rent = copy.rent;
	Mortgage = copy.Mortgage;
	Location = copy.Location;
	property_tax = copy.property_tax;

}

const Property& Property::operator = (const Property& copy){
	property_value = copy.property_value;
	  rent = copy.rent;
	Mortgage = copy.Mortgage;
	Location = copy.Location;
	property_tax = copy.property_tax;
	return *this;
}
/******************************************************
** Program: get_property_value() set_property_value(int p)
** Author: Wei Huang
** Date: 5/13/2018
** Description:get and set
** Input:noe
** Output:noen
******************************************************/
int Property::get_property_value()const{
	return property_value;
}

void Property::set_property_value(int p){
	property_value = p;
}
/******************************************************
** Program:get_Location() set_Location(string L)
** Author: Wei Huang
** Date: 5/13/2018
** Description:get and set
** Input:noe
** Output:noen
******************************************************/
string Property::get_Location()const{

	return Location;
}

void Property::set_Location(string L){
	Location = L;
}
/******************************************************
** Program:get_Mortgage() set_Mortgage(int M)
** Author: Wei Huang
** Date: 5/13/2018
** Description:get and set
** Input:noe
** Output:noen
******************************************************/
int Property::get_Mortgage()const{
	return Mortgage;
}

void Property::set_Mortgage(int M){
	Mortgage = M;
}
/******************************************************
** Program:get_property_tax() set_proerty_tax(int p)
** Author: Wei Huang
** Date: 5/13/2018
** Description:get and set
** Input:noe
** Output:noen
******************************************************/
int Property::get_property_tax()const{
	return property_tax;
}

void Property::set_proerty_tax(int p){
		property_tax = p;
}
/******************************************************
** Program:exist_c() set_check(int q)
** Author: Wei Huang
** Date: 5/13/2018
** Description:get and set
** Input:noe
** Output:noen
******************************************************/
int Property::exist_c(){
	return this->check_exist;
}

void Property::set_check(int q){
	check_exist=q;
}
/******************************************************
** Program:get_rent() set_rent(int R)
** Author: Wei Huang
** Date: 5/13/2018
** Description:get and set
** Input:noe
** Output:noen
******************************************************/
int Property::get_rent(){
  return rent;
}
void Property::set_rent(int R){
  rent = R;
}
