#include "./menu.h"

Menu::Menu(){
	num_pizzas = 0;
	pizzas = NULL;
}

Menu::Menu(int num_p, pizza *pz){
	num_pizzas = num_p;
	pizzas = pz;
}

int Menu::get_num_pizzas(){
	return num_pizzas;
}

void Menu::set_num_pizzas(int num_p){
	num_pizzas = num_p;
}

pizza* get_pizzas(){
}

void set_pizzas(pizza*){
//	pizzas = pizza*;
}

Menu::~Menu(){
	if(pizzas != NULL){
		delete pizzas;
	}
}

Menu::Menu(const Menu &copy){
	num_pizzas = copy.num_pizzas;
	pizzas = copy.pizzas;
}

Menu & Menu::operator=(const Menu &copy){
	num_pizzas = copy.num_pizzas;
	pizzas = copy.pizzas;
	return *this;
}
