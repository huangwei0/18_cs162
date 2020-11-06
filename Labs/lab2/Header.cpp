

#include "Header.hpp" 
student * create_student_db(int num_st){
    student *st =new student[num_st];
    return st;
};
void exchange(student &a, student &b){
    student temp;
    temp=a;
    a=b;
    b=temp;
};
void sort_by_id(student *st,int num,fstream &fs){
    cout<<endl<<"Sort by ID"<<endl;
        for(int i = 0;i<num-1;i++)
            for(int j =0; j<num-1-i;j++){
            if(st[j].id>st[j+1].id){
                exchange(st[j],st[j+1]);
            }
        }
    for(int i =0;i<num;i++){
        cout<<"ID  "<<st[i].id<<" NAME:  "<<st[i].fst_name<<" "<<st[i].lst_name<<setw(10)<<"\t Major:"<<st[i].major<<endl;}
    fs<<endl<<"Sort by ID"<<endl;
    out(st,num,fs);
};
void sort_by_lst(student *st , int num,fstream &fs){
    cout<<endl<<"Sort by last names"<<endl;
    for(int i = 0;i<num-1;i++)
        for(int j =0; j<num-1-i;j++){
            if(st[j].lst_name[0]>st[j+1].lst_name[0]){
                exchange(st[j],st[j+1]);
            }
            if(st[j].lst_name[0]==st[j+1].lst_name[0]){    
                for(int n=1;n<5; n++){
                    if(st[n].lst_name[1]>st[n+1].lst_name[1]){
                        exchange(st[j],st[j+1]);  break;}
                }
            }
        }
    for(int i =0;i<num;i++){
        cout<<"ID  "<<st[i].id<<" NAME:  "<<st[i].fst_name<<" "<<st[i].lst_name<<setw(10)<<"\t Major:"<<st[i].major<<endl;}
    fs<<endl<<"Sort by last names"<<endl;
    out(st,num,fs);

};
void count(student *st,int num,fstream &fs){
    int con_num=0;
    bool flag=true;
    for(int i =0;i<num;i++){
        flag=false;
        for(int j =0; j<i;j++){
            if(st[i].major!=st[j].major){
                flag=true;
                break;
            }
        }
        if(flag==true){
            con_num++;
        }
    }
    cout<<"  total majors:  "<<con_num<<endl;
    fs<<"  total majors:  "<<con_num<<endl;
}
void get_student_db_info(student *st, int num_st, fstream &input){
    if(!input.is_open())
    {
        printf("can not open file!\n");
        delete_student_db_info(&st,num_st);
        exit(0);
    }
    string line[num_st];
    for(int i =0;i<num_st;i++){
        input>>st[i].id>>st[i].fst_name>>st[i].lst_name>>st[i].major;
        cout<<"ID  "<<st[i].id<<" NAME:  "<<st[i].fst_name<<" "<<st[i].lst_name<<setw(10)<<"\t Major:"<<st[i].major<<endl;
    }
    
    input.close();
    
};
void out(student *st, int num, fstream &fs){
    fs<<endl;
    for(int i =0; i<num;i++){
        fs<<"ID  "<<st[i].id<<" NAME:  "<<st[i].fst_name<<" "<<st[i].lst_name<<setw(10)<<"\t Major:"<<st[i].major<<endl;

    }
};
void delete_student_db_info(student **st, int num){
    delete []*st;
    
   
};
