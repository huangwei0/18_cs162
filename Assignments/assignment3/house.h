/******************************************************
** Program: house.h
** Author: Wei Huang
** Date: 5/13/2018
** Description:father class
** Input:none
** Output:noen
******************************************************/

#ifndef __HOUSE_H
#define __HOUSE_H

#include <iostream>
#include "property.h"
#include "citizen.h"


using namespace std;

class House: public Property{
  private:
    class Citizen *c;
    int mortgage;
    int people_number;

  public:
    House();
    ~House();
    House(const House& copy);
    const House& operator = (const House& copy);

    Citizen* get_c()const;
    void set_c(Citizen *C);

    int get_mortgage()const;
    void set_mortgage(int n);

    string print_house();
    void Tenant();
    int get_agree();
    int get_bud();
    void dele_h();
    int get_people();
};
#endif
