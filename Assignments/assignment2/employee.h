/******************************************************
** Program: employee.h
** Author: Wei Huang
** Date: 05/1/2018
** Description:prorote of employee
** Input:file name
** Output: none
******************************************************/

#ifndef __EMPLOYEE_H
#define __EMPLOYEE_H
#include <string>

using namespace std;

struct employee {
	string id;
	string first_name;
	string last_name;
	string password;
};
struct hours{
	string day;
	string open_hour;
	string close_hour;
};

struct Order{
	string Order_Num;
	string first_name;
	string last_name;
	string Customer_CC;
	string Delivery_Address;
	string Pizza_name;
	string phone_number;
	string size;
	string quantity;
};
#endif
