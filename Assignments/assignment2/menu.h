/******************************************************
** Program: menu.h
** Author: Wei Huang
** Date: 05/1/2018
** Description:prorote of menu
** Input:file name
** Output: none
******************************************************/
#ifndef __MENU_H
#define __MENU_H
#include "pizza.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;
class Menu{
	private:
		int num_pizzas;
		Pizza* pizzas;
	public:
		Menu();
    ~Menu();
		Menu(const Menu& copy);
		Menu& operator = (const Menu& copy);
		int get_num_pizzas()const;
		void set_num_pizzas(int p);
		Pizza* get_pizzas()const;
		void set_pizzas(Pizza* pi);
		void view_menu()const;
  //  void start(int num);
		//void data_add(Pizza pizza_add);
		void load_date();
    	void delet_menu();
    	int count_line_M(string filename);
    	void set_pizza(string input);
		//void set_num_pizzas(int);
		void add_pizza(Pizza &p);

		string get_p_name(int i) const;
		string get_p_small_cost(int i) const;
		string get_p_medium_cost(int i) const;
		string get_p_large_cost(int i) const;
		int get_p_num_ingredients(int i) const;
		string *get_p_ingredients(int i,int j) const;
		//void add_menu(Pizza pizza_add);
		void print_menu();
		void print_c();
		void Includ_i(string *y,int temp);
		void exclude_p(string x);
		void after_delete(int n);
};
#endif
