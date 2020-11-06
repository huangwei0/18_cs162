#ifndef menu_h
#define menu_h
#include "pizza.h"
#include <iostream>
#include <string>

using namespace std;
class Menu{
	private:
		int num_pizzas;
		pizza* pizzas;
	public:
		Menu();
		Menu(int, pizza*);
		int get_num_pizzas();
		void set_num_pizzas(int);
		pizza* get_pizzas();
		void set_pizzas(pizza*);
		~Menu();
		Menu(const Menu &);
		Menu & operator = (const Menu &);


};
#endif
