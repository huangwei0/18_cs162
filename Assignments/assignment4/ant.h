#ifndef __ANT_H
#define __ANT_H

#include <iostream>
using namespace std;

class Ant{
  protected:
    int food_cost;
    int position;
    int number;
    string name;
    int Armor;
  public:
    Ant();
    ~Ant();
    Ant(const Ant& copy);
    const Ant& operator = (const Ant& copy);

    int get_food_cost();
    void set_food_cost(int cost);

    int get_position();
    void set_position(int p);

    int get_Armor();
    void set_Armor(int A);

    int get_number();
    void set_number(int n);

    virtual string get_name();
    void set_name(string N);

};

class Harvester:public Ant{
  public:
    Harvester();
    ~Harvester();
    string get_name();
};
class Thrower:public Ant{
  public:
    Thrower();
    ~Thrower();
    string get_name();
};
class Fire:public Ant{
  public:
    Fire();
    ~Fire();
    string get_name();
};
class long_Thrower:public Ant{
  public:
    long_Thrower();
    ~long_Thrower();
    string get_name();
};
class Short_Thrower: public Ant{
  public:
    Short_Thrower();
    ~Short_Thrower();
    string get_name();
};
class Wall: public Ant{
  public:
    Wall();
    ~Wall();
    string get_name();
};
class Ninja:public Ant{
  public:
    Ninja();
    ~Ninja();
    string get_name();
};
class Bodyguard:public Ant{
  public:
    Bodyguard();
    ~Bodyguard();
    string get_name();

};
#endif
