/******************************************************
** Program: citizen.h
** Author: Wei Huang
** Date: 5/13/2018
** Description:fcitizen
** Input:none
** Output:noen
******************************************************/
#ifndef __CITIZEN_H
#define __CITIZEN_H

#include <iostream>
#include "apartment.h"


using namespace std;

class Citizen{
	private:
		int agreeability;
		int budget;
	public:
		Citizen();
		~Citizen();
		Citizen(const Citizen& copy);
		const Citizen& operator = (const Citizen& copy);

		int get_agreeability()const;
		void set_agreeability(int A);

		int get_budget()const;
		void set_budget(int B);
};
#endif
