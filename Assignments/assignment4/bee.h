#ifndef __BEE_H
#define __BEE_H

#include <iostream>
using namespace std;

class Bee{
  private:
    int num;
    int Armor;
    int position;
  public:
    Bee();
    ~Bee();
    Bee(const Bee& copy);
    const Bee& operator = (const Bee& copy);

    int get_Armor();
    void set_Armor(int A);
    int get_position();
    void set_position(int p);
    int get_num();
    void set_num(int n);
};

#endif
