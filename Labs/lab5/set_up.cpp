#include "property.h"
#include "Tenant.h"
#include <iostream>
#include <string>

using namespace std;

Property::Property(){
	property_value = 0;
	Location = "";
	Mortgage = 0;
	property_tax = 0;
}

Property::~Property(){

}

Property::Property(const Property& copy){
	property_value = copy.property_value;
	Mortgage = copy.Mortgage;
	Location = copy.Location;
	property_tax = copy.property_tax;

}

const Property& Property::operator = (const Property& copy){
	property_value = copy.property_value;
	Mortgage = copy.Mortgage;
	Location = copy.Location;
	property_tax = copy.property_tax;
	return *this;
}

int Property::get_property_value()const{
	return property_value;
}

void Property::set_property_value(int p){
	property_value = p;
}

string Property::get_Location()const{
	return Location;
}

void Property::set_Location(string L){
	Location = L;
}

int Property::get_Mortgage()const{
	return Mortgage;
}

void Property::set_Mortgage(int M){
	Mortgage = M;
}

int Property::get_property_tax()const{
	return property_tax;
}

void Property::set_proerty_tax(int p){
		property_tax = p;
}
