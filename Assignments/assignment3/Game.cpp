#include "Game.h"
#include <iostream>

using namespace std;

/******************************************************
** Program:Game() ~Game() Game(const Game& copy) Game& Game:: operator = (const Game& copy)
** Author: Wei Huang
** Date: 5/13/2018
** Description:big 3
** Input:noe
** Output:noen
******************************************************/
Game::Game(){
  bank_count = 500000;

  p1 = new Business[3];
  p2 = new Apartment[3];
  p3 = new House[3];
  for(int i= 0;i<3;i++){
    int ho = (rand()%500000)+100000;
    int apr = (rand()%300000)+200000;
    int bus = (rand()%200000)+400000;
    p1[i].set_property_value(ho);
    p2[i].set_property_value(apr);
    p3[i].set_property_value(bus);
  }
}

Game::~Game(){
  if(p1 !=NULL){
    delete[] p1;
  }
  if(p2 !=NULL){
    delete[] p2;
  }
  if(p3 !=NULL){
    delete[] p3;
  }
}

Game::Game(const Game& copy){
  bank_count = copy.bank_count;

  for(int i = 0;i<3;i++){
    p1[i] = copy.p1[i];
    p2[i] = copy.p2[i];
    p3[i] = copy.p3[i];
  }

}

const Game& Game:: operator = (const Game& copy){
  if(p1 !=NULL){
    delete[] p1;
  }
  if(p2 !=NULL){
    delete[] p2;
  }
  if(p3 !=NULL){
    delete[] p3;
  }
  bank_count = copy.bank_count;

  for(int i = 0;i<3;i++){
    p1[i] = copy.p1[i];
    p2[i] = copy.p2[i];
    p3[i] = copy.p3[i];
  }
  return *this;

}
/******************************************************
** Program::get_bank_count() set_bank_count(int b)
** Author: Wei Huang
** Date: 5/13/2018
** Description:get and set
** Input:noe
** Output:noen
******************************************************/

int Game::get_bank_count(){
  return bank_count;
}

void Game::set_bank_count(int b){
  bank_count = b;
}
/******************************************************
** Program:get_p1()  set_p1(Business* p)
** Author: Wei Huang
** Date: 5/13/2018
** Description:get and set
** Input:noe
** Output:noen
******************************************************/

Business* Game::get_p1(){
  return p1;
}

void Game::set_p1(Business* p){
  p1 = p;
}
/******************************************************
** Program:get_p2() set_p2(Apartment* pp)
** Author: Wei Huang
** Date: 5/13/2018
** Description:get and set
** Input:noe
** Output:noen
******************************************************/

Apartment* Game::get_p2(){
  return p2;
}

void Game::set_p2(Apartment* pp){
    p2 = pp;
}

/******************************************************
** Program:get_p3() set_p3(House* ppp)
** Author: Wei Huang
** Date: 5/13/2018
** Description:get and set
** Input:noe
** Output:noen
******************************************************/
House* Game::get_p3(){
  return p3;
}

void Game::set_p3(House* ppp){
  p3 = ppp;
}
/******************************************************
** Program:property_type()
** Author: Wei Huang
** Date: 5/13/2018
** Description:print
** Input:noe
** Output:noen
******************************************************/
void Game::property_type(){

  for(int i=0;i<3;i++){
      if(p1[i].exist_c() == 0){
        cout<<i<<". "<<p1[0].print_business()<<p1[i].get_property_value()<<" "<<p1[i].get_Location()<<"   "<< "Mortgage: "<<p1[i].get_Mortgage() <<endl;
    }
  }cout<<endl;
  for(int i=0;i<3;i++){
    if(p2[i].exist_c() == 0){
      //cout<<"s"<<endl;

    cout<<i+3<<". "<<p2[0].print_apartment()<<p2[i].get_property_value()<<" "<<p2[i].get_Location()<<"  "<< "Mortgage: "<<p2[i].get_Mortgage() <<endl;
    }
  }cout<<endl;
  for(int i=0;i<3;i++){
   if(p3[i].exist_c() == 0){
    cout<<i+6<<". "<<p3[0].print_house()<<p3[i].get_property_value()<<" "<<p3[i].get_Location()<<"  "<< "Mortgage: "<<p3[i].get_Mortgage() <<endl;
  }
  }cout<<endl;
}
/******************************************************
** Program:had_property()
** Author: Wei Huang
** Date: 5/13/2018
** Description:print
** Input:noe
** Output:noen
******************************************************/
void Game::had_property(){
    int flag=0;
    for(int i=0;i<3;i++){
        if(p1[i].exist_c() == 1){
          cout<<i<<". "<<p1[0].print_business()<<p1[i].get_property_value()<<" "<<p1[i].get_Location()<<"   "<< "Mortgage: "<<p1[i].get_Mortgage() <<" rent: "<<p1[i].get_rent()<<" tenant: "<<p1[i].get_room_number()<<endl;
          flag=1;
        }
    }

    for(int i=0;i<3;i++){
      if(p2[i].exist_c() == 1){
      cout<<i+3<<". "<<p2[0].print_apartment()<<p2[i].get_property_value()<<" "<<p2[i].get_Location()<<"  "<< "Mortgage: "<<p2[i].get_Mortgage() <<" rent: "<<p2[i].get_rent()<<" tenant: "<<p2[i].get_num_of_room()<<endl;
      flag =1;
      }
    }

    for(int i=0;i<3;i++){
     if(p3[i].exist_c() == 1){
       cout<<i+6<<". "<<p3[0].print_house()<<p3[i].get_property_value()<<" "<<p3[i].get_Location()<<"  "<< "Mortgage: "<<p3[i].get_Mortgage() <<" rent: "<<p3[i].get_rent()<<" tenant: 1 "<<endl;
       flag =1;
     }
    }

    if(flag ==0){
      cout<<"Your don't have any building!"<<endl;
    }

}
/******************************************************
** Program:rent_set()
** Author: Wei Huang
** Date: 5/13/2018
** Description:rent
** Input:noe
** Output:noen
******************************************************/
int Game::rent_set(){
  int ren;
  cout<<"What rent you want to set? ";
  cin>>ren;
  return ren;
}
/******************************************************
** Program:pro_set()
** Author: Wei Huang
** Date: 5/13/2018
** Description:rent
** Input:noe
** Output:noen
******************************************************/
void Game::pro_rent(){
    int pro;
    cout<<"Which building you want to change rent fee? ";
    cin>>pro;
    if(pro>=0&&pro<3){
      int t;
      cout<<"new rent: ";
      cin>>t;
      p1[pro].set_rent(t);
      }
    else if(pro>=3&&pro<6){
      int apr;
      cout<<"new rent: ";
      cin>>apr;
      p2[pro].set_rent(apr);
    }

    else if(pro>=6&&pro<=8){
      int ho;
      cout<<"new rent: ";
      cin>>ho;
      p3[pro].set_rent(ho);
    }
}
/******************************************************
** Program:choice_building()
** Author: Wei Huang
** Date: 5/13/2018
** Description:rent
** Input:noe
** Output:noen
******************************************************/
void Game::choice_building(){
    string a;
  do{cout<<"Which building you want to choice?(0-8)  ";
  cin>>a;}while(a!="1"&&a!="2"&&a!="3"&&a!="4"&&a!="5"&&a!="0"&&a!="6"&&a!="7"&&a!="8");
  if(a=="0"){
    cout<<"You choice "<<p1[0].print_business()<<p1[0].get_property_value()<<" "<<p1[0].get_Location()<<"   "<< "Mortgage: "<<p1[0].get_Mortgage() <<endl;
    p1[0].Tenant();
    p1[0].set_check(1);
    p1[0].set_rent(rent_set());
  }
  else if(a=="1"){
    cout<<"You choice "<<p1[0].print_business()<<p1[1].get_property_value()<<" "<<p1[1].get_Location()<<"   "<< "Mortgage: "<<p1[1].get_Mortgage() <<endl;
    p1[1].Tenant();
    p1[1].set_check(1);
    p1[1].set_rent(rent_set());
  }
  else if(a=="2"){
    cout<<"You choice "<<p1[0].print_business()<<p1[2].get_property_value()<<" "<<p1[2].get_Location()<<"   "<< "Mortgage: "<<p1[2].get_Mortgage() <<endl;
    p1[2].Tenant();
    p1[2].set_check(1);
    p1[2].set_rent(rent_set());

  }
  else if(a=="3"){
    cout<<"You choice "<<p2[0].print_apartment()<<p2[0].get_property_value()<<" "<<p2[0].get_Location()<<"   "<< "Mortgage: "<<p2[0].get_Mortgage() <<endl;
        p2[0].Tenant();
        p2[0].set_check(1);
        p2[0].set_rent(rent_set());
  }
  else if (a=="4"){
    cout<<"You choice "<<p2[0].print_apartment()<<p2[1].get_property_value()<<" "<<p2[1].get_Location()<<"   "<< "Mortgage: "<<p2[1].get_Mortgage() <<endl;
    p2[1].Tenant();
    p2[1].set_check(1);
    p2[1].set_rent(rent_set());
  }
  else if(a=="5"){
    cout<<"You choice "<<p2[0].print_apartment()<<p2[2].get_property_value()<<" "<<p2[2].get_Location()<<"   "<< "Mortgage: "<<p2[2].get_Mortgage() <<endl;
    p2[2].Tenant();
    p2[2].set_check(1);
    p2[2].set_rent(rent_set());
  }
  else if (a=="6"){
    cout<<"You choice "<<p3[0].print_house()<<p3[0].get_property_value()<<" "<<p3[0].get_Location()<<"   "<< "Mortgage: "<<p3[0].get_Mortgage() <<endl;
        p3[0].Tenant();
        p3[0].set_check(1);
        p3[0].set_rent(rent_set());
  }
  else if(a=="7"){
    cout<<"You choice "<<p3[0].print_house()<<p3[1].get_property_value()<<" "<<p3[1].get_Location()<<"   "<< "Mortgage: "<<p3[1].get_Mortgage() <<endl;
        p3[1].Tenant();
        p3[1].set_check(1);
        p3[1].set_rent(rent_set());
  }
  else if(a=="8"){
    cout<<"You choice "<<p3[0].print_house()<<p3[2].get_property_value()<<" "<<p3[2].get_Location()<<"   "<< "Mortgage: "<<p3[2].get_Mortgage() <<endl;
        p3[2].Tenant();
        p3[2].set_check(1);
        p3[2].set_rent(rent_set());
  }

}
/******************************************************
** Program:choice_building()
** Author: Wei Huang
** Date: 5/13/2018
** Description:rent
** Input:noe
** Output:noen
******************************************************/
void Game::sell_building(){
  int flag = 0;
  //cout<<"You can sell those building !!"<<endl;
  for(int i=0;i<3;i++){
      if(p1[i].exist_c() == 1){
        if(p1[i].get_room_number()<=0){
        cout<<i<<". "<<p1[0].print_business()<<p1[i].get_property_value()<<" "<<p1[i].get_Location()<<"   "<< "Mortgage: "<<p1[i].get_Mortgage() <<" rent: "<<p1[i].get_rent()<<" tenant: "<<p1[i].get_room_number()<<endl;
        flag =1;
      }
      }
  }

  for(int i=0;i<3;i++){
    if(p2[i].exist_c() == 1){
      if(p2[i].get_num_of_room()<=0){
    cout<<i+3<<". "<<p2[0].print_apartment()<<p2[i].get_property_value()<<" "<<p2[i].get_Location()<<"  "<< "Mortgage: "<<p2[i].get_Mortgage() <<" rent: "<<p2[i].get_rent()<<" tenant: "<<p2[i].get_num_of_room()<<endl;
           flag =1;
     }
    }
  }

  for(int i=0;i<3;i++){
   if(p3[i].exist_c() == 1)
     if(p3[i].get_people()<=0){
     cout<<i+6<<". "<<p3[0].print_house()<<p3[i].get_property_value()<<" "<<p3[i].get_Location()<<"  "<< "Mortgage: "<<p3[i].get_Mortgage() <<" rent: "<<p3[i].get_rent()<<" tenant: 1 "<<endl;
     flag =1;
   }
   }
   if(flag == 1){
    int sell;
    cout<<"which building you want to sell? ";
    cin>>sell;
    cout<<"How much you want to sell the building?"<<endl;
    int money = 0;
    cin >> money;
    int r = rand()%3;
    if(sell>=0&&sell<3){
      p1[sell].set_check(2);
    }
    else if(sell>=3&&sell<6){
      p2[sell].set_check(2);
    }
    else if(sell>=6&&sell<=8){
      p3[sell].set_check(2);
    }
    if(r == 0){
      cout<<" player will get their asking price"<<endl;
      bank_count = bank_count+money;
    }
  if(r == 1){
    cout<<" get the property value"<<endl;
        if(sell>=0&&sell<3){
          bank_count=p1[sell].get_property_value()+bank_count;
        }
        else if(sell>=3&&sell<6){
          bank_count=p2[sell].get_property_value()+bank_count;
        }
        else if(sell>=6&&sell<=8){
          bank_count=p3[sell].get_property_value()+bank_count;
        }
    }
    if(r==2){
        cout<<"r get 10% less than the property value"<<endl;
      if(sell>=0&&sell<3){

        bank_count=p1[sell].get_property_value()*0.9+bank_count;
      }
      else if(sell>=3&&sell<6){
        bank_count=p2[sell].get_property_value()*0.9+bank_count;
      }
      else if(sell>=6&&sell<=8){
        bank_count=p3[sell].get_property_value()*0.9+bank_count;
      }
    }
  }
    else if(flag == 0)
    {
        cout<<"Your don't have any building to sell !"<<endl;
    }
}
/******************************************************
** Program:recive_rent()
** Author: Wei Huang
** Date: 5/13/2018
** Description:rent
** Input:noe
** Output:noen
******************************************************/
int Game::recive_rent(){
  int r_b=0, r_a=0, r_h=0;
  for(int i=0;i<3;i++){
      p1[i].Tenant_agree();
      p1[i].Tenant_budget();
      if(p1[i].exist_c() == 1){
        for(int j=0;j<p1[i].get_room_number();j++){
          if(p1[i].get_single_agr(j)>2){
              if(p1[i].bu_get(j)>p1[i].get_rent()){
                r_b = p1[i].get_rent() + r_b ;
              }
          }
        }
      }
  }

  for(int i=0;i<3;i++){
    if(p2[i].exist_c() == 1){
       p2[i].Tenant_agree();
       p2[i].Tenant_budget();
       if(p2[i].exist_c()==1){
        for(int j = 0;j<p2[i].get_num_of_room();j++){

          if(p2[i].get_single_saf(j)>2){
             if(p2[i].bud_get(j)>p2[i].get_rent()){
              r_a = p2[i].get_rent() + r_a;}
            }
          }
      }
    }
  }

  for(int i=0;i<3;i++){
   if(p3[i].exist_c() == 1){

     if(p3[i].get_agree()>2){
      if(p3[i].get_bud()>p3[i].get_rent())
        r_h = p3[i].get_rent() + r_h;
     }
   }
  }
  int sum = r_b + r_a + r_h;
    cout<<"This mouth you can recive rentis "<<sum<<endl;
    return sum;
}
/******************************************************
** Program:mortage_count()
** Author: Wei Huang
** Date: 5/13/2018
** Description:rent
** Input:noe
** Output:noen
******************************************************/
int Game::mortage_count(){
  int m_b=0, m_a=0, m_h=0;
  for(int i=0;i<3;i++){
      if(p1[i].exist_c() == 1){
        m_b =  p1[i].get_Mortgage() + m_b ;


      }
  }

  for(int i=0;i<3;i++){
    if(p2[i].exist_c() == 1){
     m_a = p2[i].get_Mortgage() + m_a;

    }
  }

  for(int i=0;i<3;i++){
   if(p3[i].exist_c() == 1){
     m_h = p3[i].get_Mortgage() + m_h;
   }
 }
 int sum_m = m_b + m_a + m_h;
 cout<<"The mortgage fee is "<<sum_m<<endl;
 return sum_m;
}

void Game::sum_bank_count(){
  bank_count = get_bank_count()+recive_rent() - mortage_count();
  cout<<"bank count is "<<bank_count<<endl;
}

void Game::occurs(string location, double f){
  int a;
  for(int i =0;i<3;i++){
    if (p1[i].get_Location()==location){
      a = p1[i].get_property_value()*f;
      p1[i].set_property_value(a);
    }
    if (p2[i].get_Location()==location){
      a = p2[i].get_property_value()*f;
      p2[i].set_property_value(a);
    }
    if (p2[i].get_Location()==location){
      a = p3[i].get_property_value()*f;
      p2[i].set_property_value(a);
    }
  }

}

void Game::hurricane(){
    cout<<"Hurricane happened! Location on SE"<<endl;
    string location="SE";
    occurs(location,0.5);
}
void Game::tornado(){
    cout<<"Tornado happened! Location on Midwest"<<endl;
    string location="Midwest";
    occurs(location,0.7);
}
void Game::earthquake(){
    cout<<"Earthquake happened! Lcation on NW"<<endl;
    string location="NW";
    occurs(location,0.9);
}
void Game::wildfire(){
    cout<<"Wildfire happened! Location SW"<<endl;
    string location="SW";
    occurs(location,0.7);
}

void Game::stock_market_crash(){
    cout<<"Stock market crash happened! "<<endl;
    for(int i=0;i<3;i++){
    int a = p1[i].get_property_value() * 0.7;
    p1[i].set_property_value(a);
    int b=p2[i].get_property_value() * 0.7;
    p2[i].set_property_value(b);
    int c =  p3[i].get_property_value() * 0.7;
    p3[i].set_property_value(c);
    }
}

void Game::gentrification(){
  string arrayL[5] = {"SE","NE","Midwest","SW","NW"};
  int randindex = rand()%5;
  string location = arrayL[randindex];
    cout<<"gentrification happend at ["<<location<<"]!"<<endl;
    occurs(location,1.2);
}



void Game::rand_event(){
   int a = rand()%7;
   if(a==0){
     hurricane();
   }
   else if(a==1){
     earthquake();
   }
   else if(a==3){
     wildfire();
   }
   else if(a==4){
     stock_market_crash();
   }
   else if(a==5){
     gentrification();
   }
   else if(a==6){
     tornado();
   }
}

void  Game::set_mort(){
    for (int i = 0; i < 3; i++) {
      if(p1[i].exist_c() == 1){
        int t = p1[i].get_mortgage()-p1[i].get_Mortgage();
        p1[i].set_mortgage(t);
        if(p1[i].get_mortgage()<=0){
          p1[i].set_Mortgage(0);
        }
        else if(p1[i].get_mortgage()>0&&p1[i].get_mortgage()<p1[i].get_Mortgage()){
          p1[i].set_Mortgage(t);
        }
      }
    }
    for(int i =0; i<3;i++){
      if(p2[i].exist_c()==1){
        int t = p2[i].get_mortgage()-p2[i].get_Mortgage();
        p2[i].set_mortgage(t);
        if(p2[i].get_mortgage()<=0){
          p2[i].set_Mortgage(0);
        }
        else if(p2[i].get_mortgage()>0&&p2[i].get_mortgage()<p2[i].get_Mortgage()){
          p2[i].set_Mortgage(t);
        }
      }
    }
    for(int i =0; i<3;i++){
      if(p3[i].exist_c()==1){
        int t = p3[i].get_mortgage()-p3[i].get_Mortgage();
        p3[i].set_mortgage(t);
        if(p3[i].get_mortgage()<=0){
          p3[i].set_Mortgage(0);
        }
        else if(p3[i].get_mortgage()>0&&p3[i].get_mortgage()<p3[i].get_Mortgage()){
          p3[i].set_Mortgage(t);
        }
      }
    }
}

void Game::remove_p(){
  for(int i=0;i<3;i++){
    if(p1[i].exist_c()==1){
      for(int j=0;j<p1[i].get_room_number();j++){
        if(p1[i].get_single_agr(j)>2 && p1[i].bu_get(j) < p1[i].get_rent()){
          class Businesses *temp = new Businesses[p1[i].get_room_number()];
          for(int y=0;y<p1[i].get_room_number();y++){
            temp[y].set_agreeability(p1[i].get_single_agr(y));
            temp[y].set_budget(p1[i].bu_get(y));
          }
          p1[i].dele_p(p1[i].get_room_number()-1,j,temp);
          p1[i].set_room_number(p1[i].get_room_number()-1);
          j--;
          delete [] temp;
        }
      }
    }

  }

  for(int i=0;i<3;i++){
    if(p2[i].exist_c()==1){
      for(int j=0;j<p2[i].get_num_of_room();j++){
        if(p2[i].get_single_saf(j)>2 && p2[i].bud_get(j)<p2[i].get_rent()){
          class Citizen *temp = new Citizen[p2[i].get_num_of_room()];
          for(int y =0;y<p2[i].get_num_of_room();y++){
            temp[y].set_agreeability(p2[i].get_single_saf(y));
            temp[y].set_budget(p2[i].bud_get(y));
          }
          p2[i].dele_p(p2[i].get_num_of_room()-1,j,temp);
          p2[i].set_num_of_room(p2[i].get_num_of_room()-1);
          j--;
          delete [] temp;
        }
      }
    }
  }

    for(int i=0;i<3;i++){
        if(p3[i].exist_c()==1){
            if(p3[i].get_agree()>2 && p3[i].get_bud()<p3[i].get_rent()){
              p3[i].dele_h();
        }
    }
}
}

void Game::che(){
  cout<<"You choice "<<p2[0].print_apartment()<<p2[0].get_property_value()<<" "<<p2[0].get_Location()<<"   "<< "Mortgage: "<<p2[0].get_Mortgage() <<endl;
      p2[0].Tenant();
      p2[0].set_check(1);

}

void Game::get_tax_year(){
  for(int i=0;i<3;i++){
    if(p1[i].exist_c()==1){
      bank_count=bank_count+p1[i].get_property_value()*0.015;
    }
  }
  for(int i=0;i<3;i++){
    if(p2[i].exist_c()==1){
      bank_count=bank_count+p2[i].get_property_value()*0.015;
    }
  }
  for(int i=0;i<3;i++){
    if(p3[i].exist_c()==1){
      bank_count=bank_count+p3[i].get_property_value()*0.015;
    }
  }
}

void Game::game_menu(){
      string o;
      cout<<"Welcome to a real estate tycoon game!"<<endl;
      int m =0;
  do{
    if(m==12) {
      m = 0;
      get_tax_year();
    }
    cout<<"Month "<<++m<<endl;
    cout<<endl;
     o = "-1";
      cout<<"Your bank count: "<<get_bank_count()<<endl;
      cout<<endl;
      rand_event();
      cout<<endl;
      property_type();
      cout<<endl;
      int flag = 0;
      while(o!="7" && o !="1"){
        if(flag=1){
        do{cout<<"1.go to the next month\n2.buy the property\n3.sell the property\n4.view properties\n5.view your propertie\n6.change rent\n7.quit"<<endl;\
          cin>>o;}while(o!="1"&&o!="2"&&o!="3"&&o!="4"&&o!="5"&&o!="6"&&o!="7");
          if(o=="1"){
            flag = 1;
          }
          else if(o=="2"){
            choice_building();
          }
          else if(o=="3"){
            had_property();
            sell_building();
          }
          else if(o=="4"){
            property_type();

          }

          else if(o=="5"){
            had_property();


          }
          else if(o=="6"){
            had_property();
            pro_rent();

          }
          else if(o=="7"){
          }
        }
      }
      cout<<endl;
      sum_bank_count();
      set_mort();
      remove_p();
      increase_business();
      cout<<"This month end"<<endl;
      cout<<endl;
      cout<<endl;
      cout<<endl;
      cout<<endl;
    }while((bank_count>0 && bank_count<1000000 && o=="1"));
    if(bank_count<=0){
      cout<<"You are lose!"<<endl;
    }
    else if(bank_count>=1000000){
      cout<<"You are winner!"<<endl;
    }
}

void Game::increase_business(){
  for(int i=0;i<3;i++){
    if(p1[i].exist_c()==1){
      p1[i].set_rent(0.01*p1[i].get_rent());
    }
  }
}
