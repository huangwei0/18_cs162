/******************************************************
** Program: pizza.h
** Author: Wei Huang
** Date: 05/1/2018
** Description:prorote of pizza
** Input:file name
** Output: none
******************************************************/
#ifndef __PIZZA_H
#define __PIZZA_H
#include <stdio.h>
#include <fstream>
#include <cstring>
#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <string>

using namespace std;
class Pizza{
	private:
		string name;
		string small_cost;
		string medium_cost;
		string large_cost;
		int num_ingredients;
		string * ingredients;
	public:

		Pizza();

    ~Pizza();

		Pizza(const Pizza& copy);
		int count_line_P(string filename);
		 Pizza& operator=(const Pizza & copy);
    string get_name()const;
		string get_small_cost()const;
		string get_medium_cost()const;
		string get_large_cost()const;
		int get_num_ingredients()const;
    string *get_ingredients()const;
		void print()const;
    void set_name(string);
    void set_small_cost(string);
   	void set_medium_cost(string);
		void set_large_cost(string);
		void set_ingredients(string *);
		void set_num_ingredients(int);
		void load_date(fstream &infile);
		void print_zuoliao();
		int check_indre(string *x,int numbers);
		int exclu_check(string x);
};
#endif
