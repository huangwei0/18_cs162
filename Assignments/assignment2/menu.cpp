/******************************************************
** Program: menu.cpp
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function of menu
** Input:file name
** Output: the txt information
******************************************************/
#include "menu.h"
#include "pizza.h"
#include <iostream>
#include <fstream>

using namespace std;
/******************************************************
** Program:Menu::Menu()
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function of defult of menu class
** Input:none
** Output: none
******************************************************/
Menu::Menu(){
	pizzas = NULL;
	num_pizzas = 0;
}
/******************************************************
** Program:Menu::Menu(const Menu& copy)
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function of copy for menu class
** Input:Menu& copy
** Output: none
******************************************************/
Menu::Menu(const Menu& copy){
	num_pizzas = copy.num_pizzas;
	pizzas = copy.pizzas;
	if(num_pizzas == 0) pizzas = NULL;
	else{
		for(int i= 0;i<num_pizzas;i++){
			pizzas[i] = copy.pizzas[i];
		}
	}

}
/******************************************************
** Program:Menu& Menu::operator = (const Menu& copy)
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function of operator for menu class
** Input: Menu& copy
** Output: none
******************************************************/
Menu& Menu::operator = (const Menu& copy){
	if(pizzas != NULL){
		delete [] pizzas;
	}
	num_pizzas = copy.num_pizzas;
	pizzas = copy.pizzas;
	if(num_pizzas == 0) pizzas = NULL;
	else{
		for(int i= 0;i<num_pizzas;i++){
			pizzas[i] = copy.pizzas[i];
		}
	}
	return *this;
}
/******************************************************
** Program:Menu::count_line_M(string filename)
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function of caculate line for menu class
** Input: string filename
** Output: none
******************************************************/
int Menu::count_line_M(string filename){
	fstream input;
	input.open(filename.c_str());
	string str = "";
	int lines = 0;
	while(!input.eof()){
		getline(input, str);
		lines ++;
	}

	input.close();
	return lines-1;
}
/******************************************************
** Program:Menu::get_num_pizzas()const
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function return num_pizzas for menu class
** Input: none
** Output: num_pizzas
******************************************************/
 int Menu::get_num_pizzas()const{
	 return num_pizzas;
}
/******************************************************
** Program:Menu::set_num_pizzas()const
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function set num_pizzas for menu class
** Input: p
** Output: none
******************************************************/
void Menu::set_num_pizzas(int p){
		num_pizzas = p;
}
/******************************************************
** Program:Pizza* Menu::get_pizzas()const
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function return pizzas for menu class
** Input: none
** Output: pizzas
******************************************************/
Pizza* Menu::get_pizzas()const{
	return pizzas;
}
/******************************************************
** Program:Menu::set_pizzas()const
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function set pizzas for menu class
** Input: pi
** Output: none
******************************************************/
void Menu::set_pizzas(Pizza* pi){
	pizzas = pi;
}
/******************************************************
** Program:Menu::~Menu()
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function destrcutor for menu class
** Input: none
** Output: none
******************************************************/
Menu::~Menu(){
	if(pizzas != NULL){
		delete [] pizzas;
	}
}
/******************************************************
** Program:Menu::~Menu()
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function destrcutor for menu class
** Input: none
** Output: none
******************************************************/
void Menu::view_menu()const{
	cout<<num_pizzas<<endl;
	for(int i=0;i<num_pizzas;i++){
		pizzas[i].print();
	}
}
/******************************************************
** Program:Menu::~Menu()
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function destrcutor for menu class
** Input: none
** Output: none
******************************************************/
// void Menu::data_add(Pizza pizza_add) {
// 	Pizza* temp = new Pizza [num_pizzas+1];
// 	for(int i = 0;i<num_pizzas;i++){
// 		temp[i] = pizzas[i];
// 	}
// 		temp[num_pizzas] = pizza_add;
// 		delete [] pizzas;
// 		pizzas = temp;
// 		num_pizzas++;
// }
/******************************************************
** Program:Menu::~Menu()
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function destrcutor for menu class
** Input: none
** Output: none
******************************************************/
void Menu::load_date(){
		fstream infile;
		infile.open("menu.txt");
		num_pizzas = count_line_M("menu.txt");
		 //cout<<num_pizzas<<endl;
		pizzas = new Pizza[num_pizzas];

		for(int i = 0;i<num_pizzas;i++){
				Pizza temp;
				temp.load_date(infile);
				pizzas[i] = temp;
		}
		infile.close();
}
/******************************************************
** Program:Menu::get_p_name(int i) const
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function get_p_name for menu class
** Input: none
** Output: pizzas[i].get_name()
******************************************************/
string Menu::get_p_name(int i) const{
    return pizzas[i].get_name();
}
/******************************************************
** Program:t Menu::get_p_small_cost(int i) const
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function get_p_small_cost(int i) for menu class
** Input: i
** Output: pizzas[i].get_small_cost();
******************************************************/
string Menu::get_p_small_cost(int i) const{
    return pizzas[i].get_small_cost();
}
/******************************************************
** Program:Menu::get_p_medium_cost(int i) const
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function get_p_medium_cost for menu class
** Input: i
** Output: pizzas[i].get_medium_cost();
******************************************************/
string Menu::get_p_medium_cost(int i) const{
    return pizzas[i].get_medium_cost();
}
/******************************************************
** Program:Menu::get_p_large_cost(int i) const
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function destrcutor for menu class
** Input: i
** Output: pizzas[i].get_large_cost();
******************************************************/
string Menu::get_p_large_cost(int i) const{
    return pizzas[i].get_large_cost();
}
/******************************************************
** Program:Menu::get_p_num_ingredients(int i) const
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function get_num_ingredients for menu class
** Input: i
** Output: pizzas[i].get_num_ingredients();
******************************************************/
int Menu::get_p_num_ingredients(int i) const{
    return pizzas[i].get_num_ingredients();
}
/******************************************************
** Program:Menu::get_p_ingredients(int i,int j) const
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function destrcutor for menu class
** Input: i,j
** Output: pizzas[i].get_ingredients(j);
******************************************************/
string *Menu::get_p_ingredients(int i,int j) const{
   return pizzas[i].get_ingredients();
}

/******************************************************
** Program:Menu::add_menu(Pizza pizza_add)
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function add menu
** Input: pizza_add
** Output: none
******************************************************/
// void Menu::add_menu(Pizza pizza_add){
//     num_pizzas++;
//     Pizza*temp=new Pizza[num_pizzas];
//     if(pizzas!=NULL){
//         for(int i=0;i<num_pizzas-1;i++)
//             temp[i]=pizzas[i];
//         delete [] pizzas;
//     }
//     pizzas=temp;
//     pizzas[num_pizzas-1]=pizza_add;
// 	}
void Menu::print_menu(){
	//num_pizzas = count_line_M("menu.txt");
	// cout<<"num_pizzas"<<num_pizzas<<endl;
	//pizzas =  new Pizza [num_pizzas];
	// cout<<"num_pizzas     "<<num_pizzas<<endl;
	 for(int i=0;i<num_pizzas;i++){
		  cout<<pizzas[i].get_name()<<" "<<pizzas[i].get_small_cost()<<" "<<pizzas[i].get_medium_cost()<<" "<<pizzas[i].get_large_cost()<<" "<< pizzas[i].get_num_ingredients()<<" ";
			pizzas[i].print_zuoliao();
	 }
}

void Menu::after_delete(int n){
	ofstream outfile("menu.txt");
	for(int i=0;i<num_pizzas;i++){
		if(i != n){
		 outfile<<pizzas[i].get_name()<<" "<<pizzas[i].get_small_cost()<<" "<<pizzas[i].get_medium_cost()<<" "<<pizzas[i].get_large_cost()<<" "<< pizzas[i].get_num_ingredients()<<" ";
		 for(int j=0;j<pizzas[i].get_num_ingredients();j++){
			 string tm = pizzas[i].get_ingredients()[j];
			 outfile<<tm<<" ";
		 }
		 outfile<<'\n';
	 }
	}
	//if(pizzas != NULL)
	//	delete [] pizzas;
	// load_date();
}

void Menu::print_c(){
	cout<<"what size cost of pizza you want to choice (Small: 1, Med: 2, Large 3)"<<endl;
	int cho;
	cin>>cho;
	if(cho == 1){
	for(int i=0;i<num_pizzas;i++)
		 cout<<pizzas[i].get_name()<<" "<<pizzas[i].get_small_cost()<<endl;
}
	else if(cho==2){
		for(int i=0;i<num_pizzas;i++)
			 cout<<pizzas[i].get_name()<<" "<<pizzas[i].get_medium_cost()<<endl;
	}
	else if(cho==3){
		for(int i=0;i<num_pizzas;i++)
			 cout<<pizzas[i].get_name()<<" "<<pizzas[i].get_large_cost()<<endl;
	}
}

void Menu::Includ_i(string *y,int temp){
	int qq = 0,ww=0;
	for(int i=0;i<num_pizzas;i++){
		qq = pizzas[i].check_indre(y,temp);
		if(qq == 2){
			ww++;
		}
	}
	if(ww == 0){
		cout<<"there is no pizza that include this ingredient"<<endl;
	}
}

void Menu::exclude_p(string x){
	for(int i=0;i<num_pizzas;i++){
		int e=pizzas[i].exclu_check(x);
		if(e==2){
			cout<<pizzas[i].get_name()<<"\t";
			pizzas[i].print_zuoliao();
		}
	}
}
