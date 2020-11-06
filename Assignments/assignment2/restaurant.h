/******************************************************
** Program: restaurant.h
** Author: Wei Huang
** Date: 05/1/2018
** Description:prorote of restaurant
** Input:file name
** Output: none
******************************************************/

#ifndef  __RESTAURANT_H
#define  __RESTAURANT_H

#include <iostream>
#include "employee.h"
#include <fstream>
#include <cstdlib>
#include "menu.h"
class Restaurant{
	private:
		Menu menu;
		employee* employees;
		int num_of_employees;
		hours* week;
		int lineNum;
		string name;
		string phone;
		string address;
		Order* orders;
		int num_of_orders;
		int pizza_line;
	public:
		Restaurant();
		~Restaurant();
		Restaurant(const Restaurant& copy);
		const Restaurant& operator = (const Restaurant& copy);
		Menu get_menu()const;
		void set_menu(Menu m);

		employee* get_employees() const;
		void set_employees(employee* e);

		int get_num_of_employees() const;
		void set_num_of_employees(int i);

		hours* get_week()const;
		void set_week(hours* w);

		int get_lineNum() const;
		void set_lineNum(int l);

		string get_name() const;
		void set_name (string n);

		string get_phone()const;
		void set_phone(string p);

		string get_address() const;
		void set_address(string addr);

		Order* get_orders() const;
		void set_orders(Order* o);

		int get_num_of_orders() const;
		void set_num_of_orders(int num);
	

		void view_menu();
		// void new_menu();
		void add_menu();
		// void delete_menu();

    int count_line(string file);
		void employee_data();
		void employee_login();
    bool login(string id, string password);



		void data_hour();
		bool check_hour(string day);
		void change_hour();
		void view_hour()const;

		void load_menu();
		void print_phone()const;
		void print_address()const;
		//
		void order_data();
		void order_load();
		// void view_oder()const;
		// void new_order();
		// void remove_order();

// 		void view_employee();
// 		void customer();
		void welcome();
		int customer();
		void print_cost();
		void Ingredi();
		void place_order();
		int employee_view();
		void remove_orders();
		void remove_menu();
};
#endif
