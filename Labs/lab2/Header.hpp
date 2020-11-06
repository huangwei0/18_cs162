
#ifndef Header_hpp
#define Header_hpp

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <cstring>
#include <iomanip>
#include <cstdlib>
using namespace std;
struct student{
    int id;
    char fst_name[20];
    char lst_name[20];
    char major[50];
    
};
student * create_student_db(int);
void get_student_db_info(student *, int, fstream &);
void delete_student_db_info(student **, int);
void exchange(student &, student &);
void sort_by_id(student *st,int num,fstream& );
void count(student *,int ,fstream&);
void sort_by_lst(student *st , int num,fstream&);
void out(student *, int, fstream &);
#endif /* Header_hpp */
