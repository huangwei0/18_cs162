/******************************************************
** Program: apartemnt.h
** Author: Wei Huang
** Date: 5/13/2018
** Description:father class
** Input:none
** Output:noen
******************************************************/
#ifndef __APARTMENT_H
#define __APARTMENT_H

#include <iostream>
#include "property.h"
#include "citizen.h"
using namespace std;

class Apartment: public Property
{
  private:
    class Citizen *c;
    int *saf;
    int *bud;
    int num_of_room;
    int mortgage;
  public:
    Apartment();
    ~Apartment();
    Apartment(const Apartment& copy);
    const Apartment& operator = (const Apartment& copy);

    Citizen* get_c()const;
    void set_c(Citizen *C);

    int get_num_of_room();
    void set_num_of_room(int n);

    int get_mortgage()const;
    void set_mortgage(int m);

    string print_apartment();
    void Tenant();
    void Tenant_budget();
     int bud_get(int b);
    void Tenant_agree();
    int get_single_saf(int t);
    void set_sin_p(int q);
    void dele_p(int t,int a,Citizen *b);

};
#endif
