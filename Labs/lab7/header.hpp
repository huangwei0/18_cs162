//
//  header.hpp
//  lab7
//
//  Created by 徐乃森 on 2018/5/15.
//  Copyright © 2018年 徐乃森. All rights reserved.
//

#ifndef header_hpp
#define header_hpp

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;
class property{
protected:
    int value;
    int total_rent;
public:
    property();
    property(int);
    //property(const property&);
    //const property& operator=(const property& copy_property);
    //~property();
    void set_value(int);
    int get_value()const;
    void set_total_rent(int);
    int get_total()const;
};
class house:public property{
private:
    int rent;
public:
    house();
    house(int,int);
    void calc_rent();
    int get_rent()const;
};
class apartment:public property{
private:
    int num_room;
    int rent;
public:
    apartment();
    void calc_rent();
    int get_rent()const;
};
struct room{
    int rent;
};
class business_comp:public property{
private:
    int num_room;
    room *rooms;
public:
    business_comp();
    ~business_comp();
    int get_num_room()const;
};
bool operator >(const property&, const property&);
bool operator <(const property&, const property&);
void house_check();
void apt_check();
void bus_check();

#endif /* header_hpp */
