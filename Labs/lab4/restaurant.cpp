#include "./restaurant.h"

restaurant::restaurant(){
//	menu = NULL;
	employees = NULL;
	week = NULL;
	name = " ";
	phone = " ";
	address = " ";
}

restaurant::restaurant(Menu mu, employee * emp, hours* hour, string r_name, string r_phone, string r_address){
	menu = mu;
	employees = emp;
	week = hour;
	name = r_name;
	phone = r_phone;
	address = r_address;
}

Menu restaurant::get_menu(){
	return menu;
}

void restaurant::set_menu(Menu mu){
	menu = mu;
}

employee* restaurant:: get_employees(){
	return employees;
}

void restaurant::set_employees(employee* emp){
	employees = emp;
}

hours* restaurant::get_week(){
		return week;
}

void restaurant::set_week(hours* wek){
	week = wek;
}

string restaurant::get_name(){
	return name;
}

void restaurant::set_name(string nam){
	name = nam;
}

string restaurant::get_phone(){
	return phone;
}

void restaurant::set_phone(string pho){
	phone = pho;
}

string restaurant::get_address(){
	return address;
}

void restaurant::set_address(string add){
	address = add;
}

restaurant::restaurant(const restaurant& copy){
	name = copy.name;
	phone = copy.phone;
	address = copy.address;
	menu = copy.menu;
	employees = copy.employees;
	week = copy.week;
}

const restaurant & restaurant::operator= (const restaurant& copy){
	name = copy.name;
	phone = copy.phone;
	address = copy.address;
	menu = copy.menu;
	employees = copy.employees;
	week = copy.week;
	return *this;
}

restaurant:: ~restaurant() {
	if(week != NULL){
		delete []week;
	}
	if(employees != NULL){
		delete []employees;
	}
} 





