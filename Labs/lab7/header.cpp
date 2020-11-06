//
//  header.cpp
//  lab7
//
//  Created by 徐乃森 on 2018/5/15.
//  Copyright © 2018年 徐乃森. All rights reserved.
//

#include "header.hpp"
property::property(){
    value=0;
    total_rent=0;
}
property::property(int value){
    this->value=value;
};
void property::set_value(int value){
    this->value=value;
}
int property::get_value()const{
    return value;
}
void property::set_total_rent(int rent){
    total_rent=rent;
}
int property::get_total()const{
    return total_rent;
}
house::house(){
    int temp=rand()%500001+100000;
    set_value(temp);
    rent=rand()%4501+500;
    set_total_rent(rent);
}
house::house(int value,int rt){
    this->set_value(value);
    this->rent=rt;
    set_total_rent(rt);
};
int house::get_rent()const{
    return rent;
}
void house::calc_rent(){
    set_total_rent(rent);
}
apartment::apartment(){
    int temp=rand()%300001+300000;
    set_value(temp);
    rent=rand()%4501+500;
    num_room=rand()%10+1;
    set_total_rent((rent*num_room));
}
business_comp::business_comp(){
    num_room=rand()%5+1;
    int temp=rand()%100001+500000;
    set_value(temp);
    rooms=new room[num_room];
    int sum=0;
    for(int i=0;i<num_room;i++){
        rooms[i].rent=rand()%8001+2000;
        sum+=rooms[i].rent;
    }
    set_total_rent(sum);
}
business_comp::~business_comp(){
    delete [] rooms;
    cout<<"Erased rooms"<<endl;
}
bool operator >(const property&p1, const property&p2){
    if(p1.get_value()>p2.get_value())
        return true;
    else if(p1.get_value()<p2.get_value())
        return false;
    else {
        cout<<"rent of Property1 is equal to rent of Property2"<<endl;
        return (p1.get_total()>p2.get_total());
    }
};
bool operator <(const property&p1, const property&p2){
    if(p1.get_value()<p2.get_value())
        return true;
    else if(p1.get_value()>p2.get_value())
        return false;
    else {
        cout<<"Value of Property1 is equal to Value of Property2"<<endl;
        return (p1.get_total()<p2.get_total());
    }
};
void house_check(){
    house house1,house2;
    cout<<"check house1 < house2"<<endl;
    cout<<"house1(value): "<<house1.get_value()<<"  house2(value): "<<house2.get_value()<<endl;
    cout<<"house1(rent): "<<house1.get_total()<<"  house2(rent): "<<house2.get_total()<<endl;
    cout<<endl<<"  "<<(house1<house2)<<endl<<endl;
};
void apt_check(){
    apartment apt1,apt2;
    cout<<"apt1(value): "<<apt1.get_value()<<"  apt2(value): "<<apt2.get_value()<<endl;
    cout<<"apt1(rent): "<<apt1.get_total()<<"  apt2(rent): "<<apt2.get_total()<<endl;
    cout<<endl<<"  "<<(apt1<apt2)<<endl<<endl;
    if(apt1<apt2)
        cout<<"apt1 is smaller than apt2"<<endl;
    else
        cout<<"apt1 is greater than apt2 or equal to apt2"<<endl;
};
void bus_check(){
    business_comp bus1,bus2;
    cout<<endl<<"check bus1 > bus2"<<endl;
    cout<<"bus1(value): "<<bus1.get_value()<<"  bus2(value): "<<bus2.get_value()<<endl;
    cout<<"bus1(rent): "<<bus1.get_total()<<"  bus2(rent): "<<bus2.get_total()<<endl;
    cout<<endl<<"  "<<(bus1>bus2)<<endl<<endl;
};
