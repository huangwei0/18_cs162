#include <iostream>
#include <string>
#include <cstdlib>
#include "property.h"
#include "apartment.h"
#include "businesses.h"
#include "citizen.h"
#include "Game.h"
#include "business.h"

using namespace std;

int main(){

  srand(time(NULL));
  Game g;
  g.game_menu();
}
