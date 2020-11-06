#ifndef __ROOM_H
#define __ROOM_H
#include <iostream>
#include "bee.h"
#include "ant.h"

using namespace std;

class Room{
private:
  Ant *a;
  Bee *b;
  int check;
  int p;
  int ant_num;
  int bee_num;
public:
  Room();
  ~Room();
  Room(const Room& copy);
  const Room& operator = (const Room& copy);

  Ant* get_a();
  void set_a(int t);

  Bee* get_b();
  void set_b();

  int get_check();
  void set_check(int w);

  int get_p();
  void set_p(int q);

  int get_ant_num();
  void set_ant_num(int a_n);

  int get_bee_num();
  void set_bee_num(int b_n);

  void dele_a();
  void dele_b();
};
#endif
