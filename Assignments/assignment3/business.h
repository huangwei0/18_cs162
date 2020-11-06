/******************************************************
** Program: businness.h
** Author: Wei Huang
** Date: 5/13/2018
** Description:father class
** Input:none
** Output:noen
******************************************************/
#ifndef __BUSINESS_H
#define __BUSINESS_H

#include <iostream>
#include "businesses.h"
#include "property.h"

using namespace std;

class Business : public Property
{
  private:
    class Businesses *p;
    int mortgage;
    int room_number;
    string size;
    int *bu;
    int *satify;
  public:
    Business();
    ~Business();
    Business(const Business& copy);
    const Business& operator = (const Business& copy);

    Businesses* get_p()const;
    void set_p(Businesses *a);

    int get_room_number()const;
    void set_room_number(int n);

    int get_mortgage()const;
    void set_mortgage(int m);

    string get_size()const;
    void set_size(int s);
    string print_business();
    void Tenant();
    void Tenant_budget();
    int bu_get(int b);
    void Tenant_agree();
    int get_single_agr(int t);
    void set_sin_p(int q);
    void dele_p(int t,int a,Businesses *b);
};
#endif
