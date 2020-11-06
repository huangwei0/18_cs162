/******************************************************
** Program: main.cpp
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function of main
** Input:file name
** Output: the txt information
******************************************************/
#include <iostream>
#include <fstream>
#include "employee.h"
#include "restaurant.h"
#include "pizza.h"
#include "menu.h"
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
	srand(time(NULL));
	Restaurant Re;

	Re.welcome();

	return 0;
}
