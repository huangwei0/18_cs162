/******************************************************
** Program: property.h
** Author: Wei Huang
** Date: 5/13/2018
** Description:child class
** Input:none
** Output:noen
******************************************************/

#ifndef __PROPERTY_H
#define __PROPERTY_H

#include <iostream>
#include <string>
#include <cstdlib>


using namespace std;

class Property
{
  protected:
    int property_value;
    string Location;
    int Mortgage;
    int property_tax;
    int rent;
    int check_exist;

  public:
    Property();
    virtual ~Property();
    Property(const Property& copy);
    const Property& operator = (const Property& copy);

    int get_property_value()const;
    void set_property_value(int p);

    string get_Location()const;
    void set_Location(string L);

    int get_Mortgage()const;
    void set_Mortgage(int M);

    int get_property_tax()const;
    void set_proerty_tax(int P);

    int get_rent();
    void set_rent(int R);

    int exist_c();
    void set_check(int q);



  };
#endif
