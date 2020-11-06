/******************************************************
** Program: game.h
** Author: Wei Huang
** Date: 5/13/2018
** Description:run function
** Input:none
** Output:noen
******************************************************/
#ifndef __GAME_H
#define __GAME_H
#include "property.h"
#include "business.h"
#include "apartment.h"
#include "house.h"

#include <iostream>

using namespace std;

class Game {
  private:
    int bank_count;
    Business *p1;
    Apartment *p2;
    House *p3;

  public:
    Game();
    ~Game();
    Game(const Game& copy);
    const Game& operator = (const Game& copy);

    int get_bank_count();
    void set_bank_count(int b);

    int get_rent();
    void set_rent(int R);

    Business* get_p1();
    void set_p1(Business* p);

    Apartment* get_p2();
    void set_p2(Apartment* pp);

    House* get_p3();
    void set_p3(House* ppp);

    void property_type();
    void had_property();
    int rent_set();
    void choice_building();
    void  set_mort();
    void pro_rent();
    void sell_building();
    int recive_rent();
    int mortage_count();
    void sum_bank_count();
    void occurs(string location, double f);
    void hurricane();
    void earthquake();
    void wildfire();
    void stock_market_crash();
    void gentrification();
    void rand_event();
    void game_menu();
    void tornado();
    void remove_p();
    void che();
    void get_tax_year();
    void increase_business();
};
#endif
