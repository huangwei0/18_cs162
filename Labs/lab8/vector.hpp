#ifndef vector_h
#define vector_h
#include <iostream>
#include <stdlib.h>
#include <stdexcept>
namespace my {
template <class T>
class vector {
private:
    T *v;
    int s;
    int c;
public:
    vector(){
        c=1;
        s=0;
        v=NULL;
    }
    vector(vector<T> &other){
        s=other.s;
        c=other.c;
        if(v!=NULL)
            delete []v;
        v=new T[s];
        for(int i =0;i<s;i++){
            v[i]=other[i];
        }
    }
    void operator=(vector<T> &other){
        s=other.s;
        c=other.c;
        if(v!=NULL)
            delete []v;
        v=new T[s];
        for(int i =0;i<s;i++){
            v[i]=other[i];
        }
        return this;
    }
    T operator[](int num){
        if (num<s&&num>=0)
        return v[num];
        else
            return v[0];
    } //Only perform address arithmetic
    T at(int num){
        if (num<s&&num>=0)
        return v[num];
        else
            throw std::out_of_range("out of my vector bounds");
    };
    ~vector(){
        delete [] v;
    }
    
    int size()const {
        return s;
    }
    int capacity()const{
        return c;
    }
    void push_back(T ele) {
        T *temp;
        temp = new T[++s];
        while(s>=c)
            c*=2;
        for(int i=0; i<s-1; i++)
            temp[i]=v[i];
        
        delete [] v;
        v=temp;
        v[s-1]=ele;
    }
    void reserve(int num){
        if(c<num)
        this->c=num;
        else
            std::cout<<"This number is smaller than current capacity"<<std::endl;
        
    }
    void resize(int num){
        if(s<num){
            T *temp=new T[num];
            for(int i =0;i<s;i++)
                temp[i]=v[i];
            for(int i =s;i<num;i++)
                temp[i]= 0;
            delete []v;
            s=num;
            v=new T[s];
            for(int i =0;i<s;i++){
                v[i]=0;
                v[i]=temp[i];}
            delete [] temp;
        }
        while (s>=c){
            std::cout<<"size "<<s<<" is bigger than or equal to capacity "<<c<<std::endl;
            c*=2;
        }
        std::cout<<"Now size is "<<s<<" AND capacity is "<<c<<std::endl;
    }
};
    
}
#endif
