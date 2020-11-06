#ifndef __PROPERTY_H
#define __PROPERTY_H

#include <iostream>
#include <string>
#include "property.h"
#include "Tenant.h"

using namespace std;

class Property:public Tenant
{
  private:
    int property_value;
    string Location;
    int Mortgage;
    int property_tax;

  public:
    Property();
    ~Property();
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

   // string Tenants()const;
   // void set_Tenants(string T);
};
#endif
