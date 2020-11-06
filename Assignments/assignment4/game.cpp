#include "game.h"

#include <iostream>
using namespace std;
/******************************************************
** Program: Game()
** Author: Wei Huang
** Date: 5/28/2018
** Description:constructor
** Input:noe
** Output:noen
******************************************************/
Game::Game(){
  bank = 50;
  r.resize(10);
  for(int i=0;i<10;i++){
    r[i].set_p(i);
  }
}
/******************************************************
** Program: ~Game(); Game(const Game& copy) const Game& Game::operator = (const Game& copy)
** Author: Wei Huang
** Date: 5/28/2018
** Description:big 3
** Input:noen
** Output:noen
******************************************************/
Game::~Game(){
  r.clear();
}

Game::Game(const Game& copy){
  bank = copy.bank;
}

const Game& Game::operator = (const Game& copy){
  bank =  copy.bank;
  return *this;
}

/******************************************************
** Program:get_bank() set_bank(int b)
** Author: Wei Huang
** Date: 5/28/2018
** Description:get and set
** Input:noe
** Output:noen
******************************************************/
int Game::get_bank(){
  return bank;
}

void Game::set_bank(int b){
  bank = b;
}

/******************************************************
** Program:gbee_back()
** Author: Wei Huang
** Date: 5/28/2018
** Description:bee start with right
** Input:noe
** Output:noen
******************************************************/
void Game::bee_back(int t){
  int y=-1;
  if(r[t].get_check()!=9){
    if(t!=9){
    y=  r[t+1].get_b()->get_Armor();
    }
    r[t].set_check(9);
    r[t].set_b();
    if(y!=-1){
      r[t].get_b()->set_Armor(y);
    }
  }
  else{
    bee_back(t-1);
  }
}

void Game::check_bee(){
  int flage =0;
  for(int i= 0;i<10;i++){

    if(r[i].get_check()==9){
      if(r[i-1].get_check()==1||r[i-1].get_check()==2||r[i-1].get_check()==3||r[i-1].get_check()==4||r[i-1].get_check()==5||r[i-1].get_check()==6||r[i-1].get_check()==7||r[i-1].get_check()==8){
        r[i].set_bee_num(r[i].get_bee_num()+1);
        flage =1;
      }}
    }
      if(flage==0)
        bee_back(9);
}
/******************************************************
** Program:harvester()
** Author: Wei Huang
** Date: 5/28/2018
** Description:one of the ant
** Input:noen
** Output:noen
******************************************************/
void Game::harvester(){
  cout<<"You choice Harvester and cost 2 foods"<<endl;
  Harvester* H = new Harvester;
  int p;
  do{
    cout<<"choose position(1-9): "<<endl;
    cin >> p;
  }while(r[p].get_check()!=0);
  r[p].set_check(1);
  r[p].set_a(1);
  bank=bank-2;
  delete H;
}

/******************************************************
** Program:thrower()
** Author: Wei Huang
** Date: 5/28/2018
** Description:one of the ant
** Input:noen
** Output:noen
******************************************************/
void Game::thrower(){
  cout<<"You choice Thrower and cost 4 foods"<<endl;
  Thrower* T = new Thrower;
  int p;
  do{
    cout<<"choose position(1-9): "<<endl;
    cin >> p;
  }while(r[p].get_check()!=0);
  r[p].set_check(2);
  r[p].set_a(2);
  bank=bank-4;
  delete T;
}
/******************************************************
** Program:fire()
** Author: Wei Huang
** Date: 5/28/2018
** Description:one of the ant
** Input:noen
** Output:noen
******************************************************/
void Game::fire(){
  cout<<"You choice Fire and cost 4 foods"<<endl;
  Fire* F = new Fire;
  int p;
  do{
    cout<<"choose position(1-9): "<<endl;
    cin >> p;
  }while(r[p].get_check()!=0);
  r[p].set_check(3);
  r[p].set_a(3);
  bank=bank-4;
  delete F;
}
/******************************************************
** Program:long_thrower()
** Author: Wei Huang
** Date: 5/28/2018
** Description:one of the ant
** Input:noen
** Output:noen
******************************************************/
void Game::long_thrower(){
  cout<<"You choice Long Thrower and cost 3 foods"<<endl;
  long_Thrower* l_T = new long_Thrower;
  int p;
  do{
    cout<<"choose position(1-9): "<<endl;
    cin >> p;
  }while(r[p].get_check()!=0);
  r[p].set_check(4);
  r[p].set_a(4);
  bank=bank-3;
  delete l_T;
}
/******************************************************
** Program:short_thrower()
** Author: Wei Huang
** Date: 5/28/2018
** Description:one of the ant
** Input:noen
** Output:noen
******************************************************/
void Game::short_thrower(){
  cout<<"You choice Short Thrower and cost 3 foods"<<endl;
  Short_Thrower* S_T = new Short_Thrower;
  int p;
  do{
    cout<<"choose position(1-9): "<<endl;
    cin >> p;
  }while(r[p].get_check()!=0);
  r[p].set_check(5);
  r[p].set_a(5);
  bank=bank-3;
  delete S_T;
}
/******************************************************
** Program:wall()
** Author: Wei Huang
** Date: 5/28/2018
** Description:one of the ant
** Input:noen
** Output:noen
******************************************************/
void Game::wall(){
  cout<<"You choice Wall and cost 4 foods"<<endl;
  Wall* W = new Wall;
  int p;
  do{
    cout<<"choose position(1-9): "<<endl;
    cin >> p;
  }while(r[p].get_check()!=0);
  r[p].set_check(6);
  r[p].set_a(6);
  bank=bank-4;
  delete W;
}
/******************************************************
** Program:ninja()
** Author: Wei Huang
** Date: 5/28/2018
** Description:one of the ant
** Input:noen
** Output:noen
******************************************************/
void Game::ninja(){
  cout<<"You choice Ninja and cost 6 foods"<<endl;
  Ninja* N = new Ninja;
  int p;
  do{
    cout<<"choose position(1-9): "<<endl;
    cin >> p;
  }while(r[p].get_check()!=0);
  r[p].set_check(7);
  r[p].set_a(7);
  bank=bank-6;
  delete N;
}
/******************************************************
** Program:bodyguard()
** Author: Wei Huang
** Date: 5/28/2018
** Description:one of the ant
** Input:noen
** Output:noen
******************************************************/
void Game::bodyguard(){
  cout<<"You choice Bodyguard and cost 4 foods"<<endl;
  Bodyguard* B = new Bodyguard;
  int p;
  do{
    cout<<"choose position(1-9): "<<endl;
    cin >> p;
  }while(r[p].get_check()!=0);
  r[p].set_check(8);
  r[p].set_a(8);
  bank=bank-4;
  delete B;
}
/******************************************************
** Program:get_ant(int a)
** Author: Wei Huang
** Date: 5/28/2018
** Description:user choose ant
** Input:a
** Output:noen
******************************************************/
void Game::get_ant(int a){
  if(a==1){
    harvester();
  }
  else if(a==2){
    thrower();
  }
  else if(a==3){
    fire();
  }
  else if(a==4){
    long_thrower();
  }
 else if(a==5){
    short_thrower();
   }
  else if(a==6){
    wall();
  }
  else if(a==7){
    ninja();
  }
  else if(a==8){
    bodyguard();
  }
}

/******************************************************
** Program:choice()
** Author: Wei Huang
** Date: 5/28/2018
** Description:user input
** Input:noen
** Output:noen
******************************************************/
void Game::choice(){
  cout<<"food bank:  "<< get_bank()<<endl;
  string y;
  do{cout<<"Do you want to choice Ant? y/n  ";
  cin>>y;}while(y!="y"&&y!="n");
  if(y=="y"){
    int ant;
    cout<<"which one you want to choose? 1.Harvester 2.Thrower 3.Fire 4.Long Thrower 5.Short Thrower 6.Wall 7.Ninja 8.Bodyguard  ";
    cin>>ant;
    get_ant(ant);

  }
  else{

  }
}



int Game::first_bee(){
  int first_bee = -1;
  for(int i=0;i<10;i++){
    if(r[i].get_check()==9){
      first_bee = i;
      break;
    }
  }
  return first_bee;
}
/******************************************************
** Program:action()
** Author: Wei Huang
** Date: 5/28/2018
** Description:ant action
** Input:noen
** Output:noen
******************************************************/
void Game::action(){
  int bee;
    check_bee();
    choice();
    print_arr();
    bee = first_bee();
    int y =-1;
    for(int i=0;i<10;i++){
    //cout<<r[i].get_check()<<"check"<<endl;
    if(r[i].get_check()==1){
      cout<<"bank: "<<bank<<endl;
      bank=bank+1;
    }
    if(r[i].get_check()==2){
      (r[bee].get_b())->set_Armor(r[bee].get_b()->get_Armor()-1);
        if(r[bee].get_b()->get_Armor()==0){
        r[bee].dele_b();
        }
        if(r[i].get_a()->get_Armor()==0){
          r[i].dele_a();
        }
    }
    if(r[i].get_check()==3){
      if(r[i].get_a()->get_Armor()==0){
        r[i].dele_b();
        r[i].dele_a();
      }
    }
    if(r[i].get_check()==4){
      if((bee-i)<=4){
        (r[bee].get_b())->set_Armor(r[bee].get_b()->get_Armor()-1);
        if(r[bee].get_b()->get_Armor()==0){
        r[bee].dele_b();
        }
      }
      if(r[i].get_a()->get_Armor()==0){
        r[i].dele_a();
      }
    }
    if(r[i].get_check()==5){
      if((bee-i)<=2){
        (r[bee].get_b())->set_Armor(r[bee].get_b()->get_Armor()-1);
        if(r[bee].get_b()->get_Armor()==0){
        r[bee].dele_b();
        }
      }
      if(r[i].get_a()->get_Armor()==0){
        r[i].dele_a();
      }
    }
    if(r[i].get_check()==6){
      if(r[i].get_a()->get_Armor()==0){
        r[i].dele_a();
      }
      if(r[i].get_a()->get_Armor()==0){
        r[i].dele_a();
      }
    }
    if(r[i].get_check()==7){
      if(bee==i+1){
        //cout<<"sss"<<bee<<endl;
        (r[bee].get_b())->set_Armor(r[bee].get_b()->get_Armor()-1);
          y=r[bee].get_b()->get_Armor();
        }
          r[bee-2].set_check(9);
          r[bee-2].set_b();
          if(y!=-1){
            r[bee-2].get_b()->set_Armor(y);
          }
          r[bee].set_check(0);
        if(r[i].get_a()->get_Armor()==0){
            r[i].dele_a();
        }
    }
    if(r[i].get_check()==8){
      if(r[i].get_a()->get_Armor()==0){
        r[i].dele_a();
      }
    }
    if(r[i].get_check()==9){
      if(r[i-1].get_check()==1)(r[i-1].get_a())->set_Armor(r[i-1].get_a()->get_Armor()-1);
      else if(r[i-1].get_check()==2)(r[i-1].get_a())->set_Armor(r[i-1].get_a()->get_Armor()-1);
      else if(r[i-1].get_check()==3)(r[i-1].get_a())->set_Armor(r[i-1].get_a()->get_Armor()-1);
      else if(r[i-1].get_check()==4)(r[i-1].get_a())->set_Armor(r[i-1].get_a()->get_Armor()-1);
      else if(r[i-1].get_check()==5)(r[i-1].get_a())->set_Armor(r[i-1].get_a()->get_Armor()-1);
      else if(r[i-1].get_check()==7)(r[i-1].get_a())->set_Armor(r[i-1].get_a()->get_Armor()-1);
      else if(r[i-1].get_check()==8)(r[i-1].get_a())->set_Armor(r[i-1].get_a()->get_Armor()-1);
    }
  }
}
bool Game::check_winner(){
  int flage = 0;
  for(int i=0;i<10;i++){
    if(r[i].get_check()==9){
      flage++;
    }
    if(r[1].get_check()==9){
      cout<<"Bee is winner"<<endl;
      return true;
    }
  }
  if(flage==0){
    cout<<"Ants is winner!"<<endl;
    return true;
  }
  return false;
}

void Game::print_arr(){
  r[0].set_check(1);
  if(r[0].get_check()==1){
     cout<<"Q";
   }
  for(int i=1;i<10;i++){

    if(r[i].get_check()==9){
      cout<<"*";
    }
    else if(r[i].get_check()==0){
      cout<<"0";
    }
    else if(r[i].get_check()==1){
      cout<<"H";
    }
    else if(r[i].get_check()==2){
      cout<<"T";
    }
    else if(r[i].get_check()==3){
      cout<<"F";
    }
    else if(r[i].get_check()==4){
      cout<<"L";
    }
    else if(r[i].get_check()==5){
      cout<<"S";
    }
    else if(r[i].get_check()==6){
      cout<<"W";
    }
    else if(r[i].get_check()==7){
      cout<<"N";
    }
    else if(r[i].get_check()==8){
      cout<<"B";
    }

  }
  cout<<endl;
}
