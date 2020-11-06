#ifndef __GAME_H
#define __GAME_H
#include"ant.h"
#include "bee.h"
#include<iostream>
#include <cstdlib>
#include <vector>
#include "room.h"
using namespace std;

class Game{
  private:
    int bank;
    vector <Room> r;
  public:
    Game();
    ~Game();
    Game(const Game& copy);
    const Game& operator = (const Game& copy);

    int get_bank();
    void set_bank(int b);
    void bee_back(int t);
    void print_arr();
    void get_ant(int a);
    void choice();
    void action();
    void harvester();
    void thrower();
    void fire();
    void long_thrower();
    void short_thrower();
    void wall();
    void ninja();
    void bodyguard();
    void check_bee();
    int first_bee();
    bool check_winner();
};
#endif
