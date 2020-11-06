/******************************************************
** Program: pizza.cpp
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function of pizza
** Input:file name
** Output: the txt information
******************************************************/
#include "pizza.h"
/******************************************************
** Program:Pizza::Pizza()
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function of defult of pizza class
** Input:none
** Output: none
******************************************************/
Pizza::Pizza(){
  ingredients =NULL;
  num_ingredients = -1;
}

/******************************************************
** Program:Pizza::~Pizza()
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function destructor of pizza class
** Input:none
** Output: none
******************************************************/
Pizza::~Pizza(){
  //destructor
  if(ingredients != NULL){
    delete [] ingredients;
  }
}
/******************************************************
** Program:Pizza::count_line_P(string filename)
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function helpe caculate the line of txt for pizza class
** Input:string filename
** Output: int line number
******************************************************/
int Pizza::count_line_P(string filename){
	fstream input;
	input.open(filename.c_str());
	string str = "";
	int lines = 0;
	while(!input.eof()){
		getline(input, str);
		lines ++;
	}

	input.close();
	return lines - 1;
}

/******************************************************
** Program:Pizza::Pizza(const Pizza& copy)
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function copy for pizza class
** Input: const Pizza& copy)
** Output: none
******************************************************/
Pizza::Pizza(const Pizza& copy){
  //copy constructor
  name = copy.name;
  small_cost = copy.small_cost;
  medium_cost = copy.medium_cost;
  large_cost = copy.large_cost;
  num_ingredients = copy.num_ingredients;
  ingredients = new string [num_ingredients];
  if(num_ingredients != 0){
    for(int i=0;i<num_ingredients;i++){
      ingredients[i] = copy.ingredients[i];
    }
  }
  else{
    ingredients = NULL;
  }
}
/******************************************************
** Program:Pizza& Pizza::operator =(const Pizza& copy)
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function assignment operator overload for pizza class
** Input:const Pizza& copy
** Output: none
******************************************************/
Pizza& Pizza::operator =(const Pizza& copy){
  if(ingredients != NULL){
    delete [] ingredients;
  }
  name = copy.name;
  small_cost = copy.small_cost;
  medium_cost = copy.medium_cost;
  large_cost = copy.large_cost;
  num_ingredients = copy.num_ingredients;
  ingredients = new string [num_ingredients];
  if(num_ingredients != 0){
    for(int i=0;i<num_ingredients;i++){
      ingredients[i] = copy.ingredients[i];
    }
  }
  else{
    ingredients = NULL;
  }
  return*this;
 }

 /******************************************************
 ** Program:Pizza::get_name()const
 ** Author: Wei Huang
 ** Date: 05/1/2018
 ** Description:the function get name for pizza class
 ** Input:none
 ** Output: name
 ******************************************************/

string Pizza::get_name()const{
	return name;
}
/******************************************************
** Program:Pizza::get_small_cost()const
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function get small_cost for pizza class
** Input:none
** Output: small_cost
******************************************************/
string Pizza::get_small_cost()const{
	return small_cost;
}
/******************************************************
** Program:Pizza::get_medium_cost()const
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function get medium_cost for pizza class
** Input:none
** Output: medium_cost
******************************************************/
string Pizza::get_medium_cost()const{
	return medium_cost;
}
/******************************************************
** Program:Pizza::get_large_cost()const
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function get large_cost for pizza class
** Input:none
** Output: large_cost
******************************************************/
string Pizza::get_large_cost()const{
	return large_cost;
}
/******************************************************
** Program:Pizza::get_num_ingredients()const
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function get num_ingredients for pizza class
** Input:none
** Output: num_ingredients
******************************************************/
int Pizza::get_num_ingredients()const{
	return num_ingredients;
}
/******************************************************
** Program:Pizza::get_ingredients()const
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function get_ingredients for pizza class
** Input:none
** Output: ingredients
******************************************************/
string *Pizza::get_ingredients()const{
	return ingredients;
}
/******************************************************
** Program:Pizza::set_name(string n)
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function return name for pizza class
** Input:n
** Output: none
******************************************************/
void Pizza::set_name(string n){
	name = n;
}
/******************************************************
** Program:Pizza::set_small_cost(int s_c)
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function return small_cost for pizza class
** Input:s_c
** Output: none
******************************************************/
void Pizza::set_small_cost(string s_c){
	small_cost = s_c;
}
/******************************************************
** Program:Pizza::set_medium_cost(int s_c)
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function return medium_cost for pizza class
** Input:m_c
** Output: none
******************************************************/
void Pizza::set_medium_cost(string m_c){
	medium_cost = m_c;
}
/******************************************************
** Program:Pizza::set_large_cost(int s_c)
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function return large_cost for pizza class
** Input:l_c
** Output: none
******************************************************/
void Pizza::set_large_cost(string l_c){
	large_cost  = l_c;
}
/******************************************************
** Program:Pizza::set_num_ingredients(int n_i)
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function return num_ingredients for pizza class
** Input:n_i
** Output: none
******************************************************/
void Pizza::set_num_ingredients(int n_i){
	num_ingredients = n_i;
}
/******************************************************
** Program:Pizza::set_ingredients(string* i)
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function return ingredients for pizza class
** Input:i
** Output: none
******************************************************/
void Pizza::set_ingredients (string* q){
  //ingredients = new string[num_ingredients];
	//for(int i=0;i<num_ingredients;i++){
    //ingredients[i] = q[i];
  //}
  ingredients = q;
}
/******************************************************
** Program:Pizza::load_date(fstream &infile)
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function the information from txt for pizza class
** Input:fstream &infile
** Output: none
******************************************************/
void Pizza::load_date(fstream &infile){
    infile>> name>>small_cost>>medium_cost>>large_cost>>num_ingredients;
    ingredients = new string [num_ingredients];
      for(int i = 0; i<num_ingredients;i++){
        infile>>ingredients[i];
      }
}
/******************************************************
** Program:Pizza::print()const
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function print for pizza class
** Input:none
** Output: none
******************************************************/
void  Pizza::print()const{

    cout<<"name"<<name<<" "<<small_cost<<" "<<medium_cost<<" "<<large_cost<<num_ingredients;
    for(int i= 0;i<num_ingredients;i++){
      cout<<" "<<ingredients[i]<<endl;
    }

}

void Pizza::print_zuoliao(){
  for(int i=0;i<num_ingredients;i++){
    cout<<ingredients[i]<<" ";
  }
  cout<<endl;
}

int Pizza::check_indre(string *x,int numbers){
 int check_n =0;
  for(int i=0;i<num_ingredients;i++){
    for(int j=0;j<numbers;j++){
    if(ingredients[i] == x[j]){
      check_n++;
      // cout<<name<<"\t";
      // for(int j=0;j<num_ingredients;j++){
      //   cout<<ingredients[j]<<"\t";
      }
     if(check_n == numbers){
       cout<<name<<"\t";
       for(int j=0;j<num_ingredients;j++){
         cout<<ingredients[j]<<"\t";
     }
      cout<<endl;
      return 2;
    }
  }
  }
  return 1;
}

int Pizza::exclu_check(string x){
  for(int i=0;i<num_ingredients;i++){
    if(ingredients[i] == x)
    return 1;
  }
  return 2;
}
