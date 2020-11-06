#ifndef pizza_h
#define pizza_h
#include <stdio.h>
#include <fstream>
#include <cstring>
#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <string>

using namespace std;
class pizza{
	private:
		string name;
		int small_cost;
		int medium_cost;
		int large_cost;
		int num_ingredients;
		string * ingredients;
	public:
		pizza();
		pizza(string, int, int, int, int);
		string get_name();
		void set_name(string);
		int get_small_cost();
		void set_small_cost(int);
		int get_medium_cost();
		void set_medium_cost(int);
		int get_large_cost();
		void set_large_cost(int);
		int get_num_ingredients();
		void set_num_ingredients(int);
		string get_ingredients();
		void set_ingredients(string *);
		void print();
		void set_pizza(fstream &);
		~pizza();
		pizza(const pizza&);
		pizza& operator= (const pizza&);
};
int get_line(char *name);

#endif
