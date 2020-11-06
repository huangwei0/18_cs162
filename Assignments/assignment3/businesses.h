/******************************************************
** Program: businneses.h
** Author: Wei Huang
** Date: 5/13/2018
** Description:businesses
** Input:none
** Output:noen
******************************************************/
#ifndef __BUSINESSES_H
#define __BUSINESSES_H

#include "business.h"
#include <iostream>

using namespace std;

class Businesses {
  private:
    int agreeability;
    int budget;
  public:
    Businesses();
    ~Businesses();
    Businesses(const Businesses& copy);
    const Businesses& operator = (const Businesses& copy);

    int get_agreeability()const;
		void set_agreeability(int A);

		int get_budget()const;
		void set_budget(int B);

};
#endif
