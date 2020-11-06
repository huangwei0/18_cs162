#include "game.h"
#include <iostream>
using namespace std;
int main(){
    Game g;
    int flag = 0;
     cout<<"Welcome to the Ants vs. Bees!"<<endl;
     do{
          g.action();
          flag++;
      }while(!g.check_winner()&&flag!=0);

    return 0;
}
