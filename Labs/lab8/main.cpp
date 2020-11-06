#include "./vector.hpp"
#include <vector>
#include <iostream>

using std::cout;
using std::endl;

int main (){
    my::vector<int> v;   //vector class
    std::vector<int> stdv; //Standard vector
    
    //Compare operation of vector to std
    v.push_back(23);
    v.push_back(24);
    v.push_back(25);
    stdv.push_back(23);
    
    cout<<endl<<"V position '0' : "<<v[0]<<endl;
    cout<<"V position '2' : "<<v.at(2)<<endl;
    
    cout<<endl << "Our vector size: " << v.size() << endl;
    cout << "STL vector size: " << stdv.size() << endl;
    
    my::vector<int>v2=v; //copy constructor
    cout<<"V2 position '2' : "<<v2.at(2)<<endl;
    try{   //out of range
        v2.at(2);
    }catch(std::out_of_range const&exc){
        cout<<endl<<exc.what()<<endl;
    }
    v2.reserve(10);
    cout<<endl<<"V2 capacity: "<<v2.capacity()<<endl;
    v2.resize(10);
    
    cout<<endl<<"v2 size:  "<<v2.size()<<endl;
    cout<<"V2 position '5' is  : "<<v2[5]<<endl;
    v2.resize(15);
    v2.push_back(12);
    cout<<endl<<"v2 position 15   :"<<v2[15]<<endl;
    cout<<endl<<"NOW the current capacity is "<<v2.capacity()<<endl;
    return 0;
}
