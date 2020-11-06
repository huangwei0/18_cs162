/******************************************************
** Program: state_facts.cpp
** Author: Wei Huang
** Date: 04/016/2018
** Description: all function headers on the Program
** Input: none
** Output:none
******************************************************/



#include <iostream>
#include <fstream>
#include <cstdlib>
#include <math.h>
#include <string.h>
#include <string>

using namespace std;

struct county{
	string name;
	string *city;
	int cities;
	int population;
	float avg_income;
	float avg_house;
};

struct state{
	string name;
	struct county *c;
	int counties;
	int population;
};
bool AllisNum(string str);
int is_valid (int argc, char *argv[]);
state* creat_state (int n);
county* creat_county(int n);
void get_county_date(county* c, int n, ifstream &states1);
void get_state_date (state* s, int n, ifstream &states1);
bool is_option(string num);
void print_info(state* s, int n, ofstream &output);
void largest_state_pop (state *s, int n, ofstream &output);
void largest_county_pop(state *s, int n,ofstream &output);
void counties_income (state *s, int n,ofstream &output);
void change(state &a, state &b);
void exchange(county &a, county &b);
void state_by_name(state *s, int n, ifstream &states1,ofstream &output);
void state_by_pop(state *s, int n,ofstream &output);
void county_by_name(state *s, int n,ofstream &output);
void county_by_pop(state *s, int n,ofstream &output);
void average_household(state *s, int n,ifstream &states1,ofstream &output);
void delete_info(state** s, int n);
int get_option();
