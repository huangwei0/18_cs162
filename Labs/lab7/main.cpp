//
//  main.cpp
//  lab7
//
//  Created by 徐乃森 on 2018/5/15.
//  Copyright © 2018年 徐乃森. All rights reserved.
//

#include "header.hpp"

int main(int argc, char * argv[]) {
    srand((unsigned)time(NULL));
    cout << "Hello, World!\n";
    house_check();
    cout<<endl<<"Apartment"<<endl;
    apt_check();
    cout<<endl;
    bus_check();
    cout<<endl<<endl;
    house house1(1000,302);
    house house2(1000,2311);
    cout<<(house1>house2)<<endl;
    
    return 0;
}
