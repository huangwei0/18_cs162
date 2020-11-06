#ifndef restaurant_h
#define restaurant_h
#include "pizza.h"
#include "menu.h"
#include "employee.h"
#include "hours.h"
#include <iostream>
#include <string>

using namespace std;

class restaurant{
	private:
		Menu menu;
		employee * employees;
		hours *week;
		string name;
		string phone;
		string address;
	public:
		restaurant();
		restaurant(Menu, employee *, hours*, string, string, string);
		Menu get_menu();
		void set_menu(Menu);
		employee* get_employees();
		void set_employees(employee*);
		hours* get_week();
		void set_week(hours*);
		string get_name();
		void set_name(string);
		string get_phone();
		void set_phone(string);
		string get_address();
		void set_address(string);
		~restaurant();
		restaurant(const restaurant &);
		const restaurant & operator= (const restaurant &);
};

#endif		
