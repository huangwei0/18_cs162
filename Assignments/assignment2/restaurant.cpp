/******************************************************
** Program: restaurant.cpp
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function of restaurant
** Input:file name
** Output: the txt information
******************************************************/

#include "restaurant.h"
#include <iostream>
#include "employee.h"
#include <string>
#include <fstream>
#include <cstdlib>
#include "menu.h"
using namespace std;
/******************************************************
** Program:Restaurant::Restaurant()t
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function deflut for menu class
** Input: none
** Output: none
******************************************************/
Restaurant::Restaurant(){

    employees = NULL;
    week = NULL;
    name ="";
    phone = "";
    address = "";
    lineNum =0;


}
/******************************************************
** Program:Restaurant::~Restaurant()
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function destrcutor for menu class
** Input: none
** Output: none
******************************************************/
Restaurant::~Restaurant(){
  if(employees != NULL){
    delete[] employees;
  }
  if(week !=NULL){
    delete[] week;
  }
  if(orders != NULL){
    delete[] orders;
  }


}
/******************************************************
** Program:Restaurant::Restaurant(const Restaurant& copy)
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function copy for menu class
** Input: const Restaurant& copy
** Output: none;
******************************************************/
Restaurant::Restaurant(const Restaurant& copy){

  menu=copy.menu;
  lineNum = copy.lineNum;
  name = copy.name;
  phone = copy.phone;
  address = copy.address;
  num_of_orders = copy.num_of_orders;
  num_of_employees = copy.num_of_employees;

  if (num_of_employees == 0)
    employees = NULL;
  else{
    employees = new employee [num_of_employees];
    for (int i = 0; i < num_of_employees; i++){
      employees[i] = copy.employees[i];
    }
  }

  if(num_of_orders == 0){
    orders = NULL;
    }

  else{
    orders = new Order [num_of_orders];
    for(int i= 0;i<num_of_orders;i++){
      orders[i] =copy.orders[i];
    }
  }

  if (lineNum == 0){
    week =NULL;
  }
  else{
    for(int i= 0;i<lineNum;i++){
      week[i] =copy.week[i];
    }
  }
}
/******************************************************
** Program:Menu::get_p_ingredients(int i,int j) const
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function copy for menu class
** Input:const Restaurant& copy
** Output: none
******************************************************/
const Restaurant& Restaurant::operator = (const Restaurant& copy){
  if(employees != NULL){
    delete[] employees;
  }
  if(week !=NULL){
    delete[] week;
  }
  if(orders != NULL){
    delete[] orders;
  }
  menu=copy.menu;
  lineNum = copy.lineNum;
  name = copy.name;
  phone = copy.phone;
  address = copy.address;
  num_of_orders = copy.num_of_orders;
  num_of_employees = copy.num_of_employees;

  if (num_of_employees == 0)
    employees = NULL;
  else{
    employees = new employee [num_of_employees];
    for (int i = 0; i < num_of_employees; i++){
      employees[i] = copy.employees[i];
    }
  }

  if(num_of_orders == 0){
    orders = NULL;
    }

  else{
    orders  = new Order [num_of_orders];
    for(int i= 0;i<num_of_orders;i++){
      orders[i] =copy.orders[i];
    }
  }

  if (lineNum == 0){
    week =NULL;
  }
  else{
    for(int i= 0;i<lineNum;i++){
      week[i] =copy.week[i];
    }
  }
  return *this;



}
/******************************************************
** Program:Restaurant::get_menu()const
            Restaurant::set_menu(Menu m)
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function get and set for menu class
** Input: none m
** Output: menu none
******************************************************/
Menu Restaurant::get_menu()const{
    return menu;
}
void Restaurant::set_menu(Menu m){
    menu = m;
}
/******************************************************
** Program:employee* Restaurant::get_employees()const
            void Restaurant::set_employees(employee* e)
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function destrcutor for menu class
** Input: none i
** Output: employees none
******************************************************/
employee* Restaurant::get_employees()const{
    return employees;
}
void Restaurant::set_employees(employee* e){
    employees = e;
}
/******************************************************
** Program:Restaurant::get_week()const
            Restaurant::set_week(hours* w)
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function get and set for menu class
** Input: i,j
** Output: pizzas[i].get_ingredients(j);
******************************************************/
hours* Restaurant::get_week()const{
  return week;
}
void Restaurant::set_week(hours* w){
  week =w;
}
/******************************************************
** Program:Restaurant::get_lineNum() const
            Restaurant::set_lineNum(int l)
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function get and set for menu class
** Input: none l
** Output: get_linNum none
******************************************************/
int Restaurant::get_lineNum() const{
  return lineNum;
}
void Restaurant::set_lineNum(int l){
   lineNum = l;
}
/******************************************************
** Program:Restaurant::get_name()const
          Restaurant::set_name(string n)
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function get and set for menu class
** Input: none,n
** Output: get_name noen
******************************************************/
string Restaurant::get_name()const{
  return name;
}
void Restaurant::set_name(string n){
  name = n;
}
/******************************************************
** Program:
Restaurant::get_phone()const
Restaurant::set_phone(string p)
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function get and set for menu class
** Input: none,p
** Output: get_phone; none
******************************************************/
string Restaurant::get_phone()const{
  return phone;
}
void Restaurant::set_phone(string p){
  phone =p;
}
/******************************************************
** Program:Restaurant::get_address()const
 Restaurant::set_address(string addr)
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function get and set for menu class
** Input:  none addr
** Output: address none
******************************************************/
string Restaurant::get_address()const{
  return address;
}
void Restaurant::set_address(string addr){
  address = addr;
}
/******************************************************
** Program:Restaurant::get_orders()const
Restaurant::set_orders(Order* o)
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function get and set for menu class
** Input: none o
** Output: orders none
******************************************************/
Order* Restaurant::get_orders()const{
  return orders;
}
void Restaurant::set_orders(Order* o){
    orders = o;
}
/******************************************************
** Program:Restaurant::get_num_of_orders()const
            Restaurant::set_num_of_orders(int num)
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function get and set for menu class
** Input: i,j
** Output: pizzas[i].get_ingredients(j);
******************************************************/
int Restaurant::get_num_of_orders()const{
  return num_of_orders;
}
void Restaurant::set_num_of_orders(int num){
  num_of_orders = num;
}
/******************************************************
** Program:Restaurant::view_menu()
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function view for menu class
** Input: none
** Output: none
******************************************************/

void Restaurant::view_menu(){
  cout<<menu.get_num_pizzas()<<endl;
  menu.view_menu();
}
/******************************************************
** Program:Restaurant::new_menu();none
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function uodata menu for menu class
** Input: none
** Output: none
// ******************************************************/
// void Restaurant::new_menu(){
//   remove("menu.txt");
//   ofstream input("menu.txt");
//   for(int i=0;i<menu.get_num_pizzas();i++){
//     input<<menu.get_p_name(i)<<"\t"<<menu.get_p_small_cost(i)<<"\t"<<menu.get_p_medium_cost(i)<<"\t";
//     input<<menu.get_p_large_cost(i)<<"\t"<<menu.get_p_num_ingredients(i);
//     for(int j=0;j<menu.get_p_num_ingredients(i);j++)
//         input<<"\t"<<menu.get_p_ingredients(i,j);
//   }
//   input.close();
// }

void Restaurant::add_menu(){
  string nam,small_cost,medium_cost,large_cost,*ingredients;
  int num_ingredients;
	cout<<"the new pizza name: "<<endl;
  getline(cin,name);
	cout<<"the small_cost: "<<endl;
  getline(cin,small_cost);
	cout<<"the medium_cost: "<<endl;
  getline(cin,medium_cost);
	cout<<"the large_cost: "<<endl;
  getline(cin,large_cost);
	cout<<"the number of ingredients: "<<endl;
  cin >> num_ingredients;
  ingredients = new string[num_ingredients];
  for(int i=0;i<num_ingredients;i++){
    cout<<"your "<<i+1<<" ingredient: "<<endl;
    cin >> ingredients[i];
  }
	ofstream fileoutput;
  fileoutput.open("menu.txt",ios_base::app);
  fileoutput<<'\n'<<name<<" "<<small_cost<<" "<<medium_cost<<" "<<large_cost<<" "<<num_ingredients<<" ";
  for(int i=0;i<num_ingredients;i++){
    fileoutput<<ingredients[i]<<" ";
  }
  fileoutput.close();
	}
// 	//Pizza new_p(nam,atoi(small_cost.c_str()),atoi(medium_cost.c_str()),atoi(large_cost.c_str()),atoi(num_ingredients.c_str()),ingredients);
// 	//menu.add_menu(new_p);
// 	delete[]ingredients;
// 	cout<<"Here is the new Menu: "<<endl;
//    view_menu();
//   new_menu();
// }

// void Restaurant::delete_menu(){
//
// }
/******************************************************
** Program:Restaurant::(string file)
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function caculate line for txt c
** Input: txt
** Output: line
******************************************************/
int Restaurant::count_line(string file){
    fstream input;
    input.open(file.c_str());
    string str =" ";
    int lines = 0;
    while(getline(input, str)){
        lines ++;
    }

    input.close();
    //cout << "lines -1 " << lines - 1 << endl;
    return lines;
}
/******************************************************
** Program:Restaurant::employee_data()
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function employee data
** Input: none
** Output: none
******************************************************/
void Restaurant::employee_data(){
  fstream input;
  num_of_employees = count_line("employee.txt");
	//cout<<"num od employee " <<num_of_employees<<endl;
  employees = new employee [num_of_employees];
  input.open("employee.txt");
    for(int i=0;i<num_of_employees;i++){

    input>>employees[i].id>>employees[i].first_name>>employees[i].last_name>>employees[i].password;
  }

  input.close();
}
/******************************************************
** Program:Restaurant::login(string id, string password)
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function login check
** Input: id password
** Output: boolen
******************************************************/
bool Restaurant::login(string id, string password){
    for(int i = 0; i<num_of_employees; i++){
         if(employees[i].id==id){
            if(employees[i].password == password){
              cout<<"Welcome "<<employees[i].first_name<<" "<<employees[i].last_name<<"! Whant would you like to do?"<<endl;
                return true;
            }
            else{
                  cout<<"We do not recognize that password. Please try again."<<endl;
                    return false;
                }
        }
        else{
          cout<<"We do not recognize that password. Please try again."<<endl;
            return false;
        }
    }
}
/******************************************************
** Program:Restaurant::employee_login()
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function login
** Input: none
** Output: name
******************************************************/
void Restaurant::employee_login(){
    string id = " ";string password = " "; string name = " ";
  //  set_employees("employee.txt",count_line("employee.txt"));
    do{
        cout<<"Please provide your ID number: ";
        cin>> id;
        cout<<"Please provide your password: ";
        cin>>password;
        }while(!login(id,password));
}

/******************************************************
** Program:Restaurant::data_hour()
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function hour data for menu class
** Input: none
** Output:none
******************************************************/

void Restaurant::data_hour(){
  ifstream input;
  input.open("restaurant_info.txt");
  getline(input,name);
  getline(input,phone);
  getline(input,address);
  input>>lineNum;
  week = new hours [lineNum];
  for (int i=0;i<lineNum; i++) {
    input>>week[i].day>>week[i].open_hour>>week[i].close_hour;
  //  cout<<week[i].day<<week[i].open_hour<<week[i].close_hour<<endl;
    }
    input.close();
}
/******************************************************
** Program:Restaurant::print_phone()const
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function print phone
** Input: none
** Output: none
******************************************************/
void  Restaurant::print_phone()const{
    cout<<phone<<endl;
}
/******************************************************
** Program:Restaurant::print_address()const{
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function print adress
** Input: none
** Output: none;
******************************************************/
void Restaurant::print_address()const{
    cout<< address<<endl;
}
/******************************************************
** Program: Restaurant::check_hour(string day)
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function check hour
** Input: day
** Output: boolen
******************************************************/
bool Restaurant::check_hour(string day){

  for(int i = 0; i<7; i++){
    if(week[i].day==day)
    return true;
  }
  return false;
}
/******************************************************
** Program:Restaurant::change_hour()
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function change hour for menu class
** Input: none
** Output: none;
******************************************************/
void Restaurant::change_hour(){

  // set_hour("restaurant_info.txt",count_line("restaurant_info.txt"));
  string w;
  do{
  cout<<"Which day would you like to change the hours for(S,M,T,W,R,F)?";
    cin>>w;
  //  getline(cin, w);
  }while(!check_hour(w));


    if(check_hour(w)){

      string o = "";
      string c = "";
      do{cout<<"What should the opening time be?";
        cin>>o;
        cout<<"What should the closing time be?";
        cin>>c;
      }while((o[0]<'0'||o[0]>'9')&&(c[0]<'0'||c[0]>'9'));
      for(int i=0;i<lineNum;i++){
        if(week[i].day==w){
          week[i].open_hour = o;
          week[i].close_hour = c;
        }
      }
      ofstream outfile1("restaurant_info.txt");
      outfile1<<name<<"\n"<<phone<<"\n"<<address<<"\n"<<lineNum<<"\n";
      for(int j=0;j<lineNum;j++){
        outfile1<<week[j].day<<" "<<week[j].open_hour<<" "<<week[j].close_hour<<"\n";
      }
  }
  }
  /******************************************************
  ** Program:Restaurant::load_menu()
  ** Author: Wei Huang
  ** Date: 05/1/2018
  ** Description:the function load menu
  ** Input: none
  ** Output: none);
  ******************************************************/
void Restaurant::load_menu(){menu.print_menu();}
/******************************************************
** Program:Restaurant::view_hour()const
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function view hour
** Input: i,j
** Output: pizzas[i].get_ingredients(j);
******************************************************/
void Restaurant::view_hour()const{
  for(int i = 0;i<lineNum;i++){
  cout<<week[i].day<<"\t"<<week[i].open_hour<<"\t"<<week[i].close_hour<<endl;
  }
}
/******************************************************
** Program: Restaurant::order_data()
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function dorder data
** Input: none
** Output: none;
******************************************************/


void Restaurant::order_data(){
  fstream input;
  num_of_orders = count_line("pizza.txt");
  cout<<"num of order "<<num_of_orders<<endl;
  orders = new Order [num_of_orders];
  // cout<<"num of order1 "<<num_of_orders<<endl;
  input.open("pizza.txt");
    for(int i=0;i<num_of_orders;i++){
    input>>orders[i].Order_Num>>orders[i].first_name>>orders[i].last_name>>orders[i].Customer_CC>>orders[i].Delivery_Address>>orders[i].phone_number>>orders[i].Pizza_name>>orders[i].size>>orders[i].quantity;
    // cout<<orders[i].Order_Num<<" "<<orders[i].first_name<<" "<<orders[i].last_name<<" "<<orders[i].Customer_CC<<" "<<orders[i].Delivery_Address<<" "<<orders[i].Pizza_name<<" "<<orders[i].size<<" ";
    // cout<<orders[i].quantity<<endl;
  }

  input.close();
}

void Restaurant::order_load(){
  for(int i =0;i< num_of_orders;i++){
    cout<<orders[i].Order_Num<<" "<<orders[i].first_name<<" "<<orders[i].last_name<<" "<<orders[i].Customer_CC<<" "<<orders[i].Delivery_Address<<" "<<orders[i].Pizza_name<<" "<<orders[i].size<<" ";
    cout<<orders[i].quantity<<endl;
  }
}
/******************************************************
** Program:Restaurant::view_oder()const
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function view order
** Input: none
** Output: none
******************************************************/
// void Restaurant::view_oder()const{
//   if(num_of_orders!=0){
//     for(int i=0;i<num_of_orders;i++){
//     cout<<"Order num: "<<orders[i].Order_Num<<"\n name: "<<orders[i].first_name<<"\t"<<orders[i].last_name<<"\n CC: "<<orders[i].Customer_CC<<"\naddress: "<<orders[i].Delivery_Address<<"\npizza name: "<<orders[i].Pizza_name<<"\nsize: "<<orders[i].size<<"\nquantity: "<<orders[i].quantity<<endl;
//     }
//   }
//   else{
//     cout<<"NO order!"<<endl;
//   }
// }
/******************************************************
** Program:Restaurant::new_order()
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function new order
** Input: none
** Output: none);
******************************************************/
// void Restaurant::new_order(){
//   remove("pizza.txt");
//   ofstream input("pizza.txt");
//   for(int i= 0; i<num_of_orders;i++){
//     input<<i+1<<" "<<orders[i].Order_Num<<" "<<orders[i].first_name<<" "<<orders[i].last_name<<" "<<orders[i].Customer_CC<<" "<<orders[i].Delivery_Address<<" "<<orders[i].Pizza_name<<" "<<orders[i].size<<" "<<orders[i].quantity;
//   }
//   input.close();
// }
/******************************************************
** Program:Restaurant::remove_order()
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function remove order
** Input:none
** Output: none
******************************************************/
// void Restaurant::remove_order(){
//     view_oder();
//
// }
/******************************************************
** Program:Restaurant::remove_order()
** Author: Wei Huang
** Date: 05/1/2018
** Description:the function remove order
** Input:none
** Output: none
******************************************************/
// void Restaurant::add_order(const Order&new_order){
//   num_of_orders++;
//     Order* temp=new Order [num_of_orders];
//     if(orders!=NULL){
//         for(int i=0;i<num_of_orders-1;i++)
//             temp[i]=orders[i];
//         delete [] orders;
//     }
//       orders=temp;
//     orders[num_od_orders-1]=new_order;
//     update_orders();
//
// }


void Restaurant::welcome(){
  string a; int num_c = 8, num_e = 0;
  //menu.load_date();
  menu.load_date();
  data_hour();
  employee_data();
  order_data();
  while (num_c == 8 || num_e == 10){
    do{
  	    cout<<"Welcome to Bytes Pizza!\nAre you a customer(C) or employee(E) or would you like to quit(Q)? ";
  	    cin>>a;
    }while( a !="C" && a != "E" && a != "Q");
    if(a=="C"){
      num_c = customer();
    }else if(a=="E"){
      
      employee_login();
      num_e = employee_view();
    }else{
      cout<<"Bye"<<endl;
      break;
    }
  }
}

int Restaurant::customer(){
  string c = " ";
  while (c !="8") {
    do{
      cout<<"1. View Menu\n2. Search by Cost\n3. Search by Ingredients\n4. Place Order\n5. View Hours\n6. View Address\n7. View Phone\n8. Log out"<<endl;
      cout<<"Selection: ";
      cin>>c;
    }while(c !="1" && c !="2" && c != "3" && c !="4" && c != "5" && c !="6" && c !="7" && c != "8" && c !="9" && c != "10");
      if(c=="1"){
        load_menu();
      }else if(c=="2"){
        print_cost();
      }else if(c=="3"){
        Ingredi();
      }else if(c=="4"){
        place_order();
      }else if(c=="5"){
        view_hour();
      }else if(c=="6"){
        print_address();
      }else if(c=="7"){
        print_phone();
      }
      //else if(c=="8"){
         //welcome();
      //}
    }
    return 8;
}

int Restaurant::employee_view(){
	string e;
		while(e != "10"){
		cout<<"1. Change hours\n2. View Orders\n3. Remove Order\n4. Add Item to Menu\n5. Remove Item from Menu\n6. View Menu\n7. View Hours\n8. View Address\n9. View Phone\n10. Log out"<<endl;

		do{
			cout<<"Selection: ";
			cin>>e;
			cin.ignore();
	//		getline(cin, e);

		}while(e !="1" && e !="2" && e != "3" && e !="4" && e != "5" && e !="6" && e !="7" && e != "8" && e !="9" && e != "10");
			if(e=="1"){
				change_hour();
				view_hour();
					cout<<endl;
			}else if(e=="2"){
        order_load();
			}else if(e=="3"){
        
        remove_orders();
        order_load();
			}else if(e=="4"){
        add_menu();
			}else if(e=="5"){
        remove_menu();
			}else if(e=="6"){
				load_menu();
			}else if(e=="7"){
				view_hour();
			}else if(e=="8"){
				print_address();
				cout<<endl;
			}else if(e=="9"){
				print_phone();
				cout<<endl;
			}else if(e=="10"){
				//welcome();
			}
	}
  return 10;
}

void Restaurant::remove_orders(){
  cout<<"which order number you want to remove"<<endl;
  int templ;
  cin >> templ;
  ofstream outff("pizza.txt");
  for(int i=0;i<num_of_orders;i++){
    if(i != templ-1){
      outff<<orders[i].Order_Num<<" "<<orders[i].first_name<<" "<<orders[i].last_name<<" "<<orders[i].Customer_CC<<" "<<orders[i].Delivery_Address<<" "<<orders[i].phone_number<<" "<<orders[i].Pizza_name<<" "<<orders[i].size<<" "<<orders[i].quantity;
    }
  }
}

void Restaurant::place_order(){
  string num_pi;
  string name1,name2;
  cout<<"which Pizza do you want to order? (enter pizza number)"<<endl;
  getline(cin,num_pi);
  getline(cin,num_pi);
  cout<<"what's your first name?"<<endl;
  getline(cin, name1);
  cout<<"what's your last name?"<<endl;
  getline(cin, name2);
  string adde;
  cout<<"what's your address?"<<endl;
  getline(cin,adde);
  string pho;
  cout<<"what is your phone number?"<<endl;
  getline(cin,pho);
  string s;
  cout<< "what size you want?"<<endl;
  getline(cin,s);
  string duoshao;
  cout<<"how many pizza do you want?"<<endl;
  getline(cin,duoshao);
  fstream input;
  int line_number = count_line("pizza.txt");
  input.close();
  ofstream outfile;
  int line22 = line_number+1;
  outfile.open("pizza.txt",ios_base::app);
  int r = rand()%10000;
  int num_p=atoi(num_pi.c_str());
  string name_pizzas = menu.get_p_name(num_p-1);
  outfile << "\n" << line22 << " " << name1 <<" "<<name2<<" "<< r <<" "<< adde <<" "<<pho<<" "<<name_pizzas<<" "<<s<<" "<<duoshao<<'\n';
  
  cout << num_of_orders << endl;
  Order* ord_temp = new Order [num_of_orders + 1];
  for (int i = 0; i < num_of_orders; i++)
    ord_temp[i] = orders[i];

  cout << "here" << endl;
  Order ord;
  ord.Order_Num  = line22;
  ord.first_name = name1;
  ord.last_name = name2;
  ord.Customer_CC = r;
  ord.Delivery_Address = adde;
  ord.Pizza_name = num_pi;
  ord.phone_number = pho;
  ord.size = s;
  ord.quantity = duoshao;

  ord_temp[num_of_orders] = ord;
  //cout << "here" << endl;
  delete [] orders;
  orders = ord_temp;

  num_of_orders ++;

}

void Restaurant::print_cost(){
  menu.print_c();
}

void Restaurant::Ingredi(){
  string ans;
  int inde = 0;
  string *y = new string[4];
  cout<<"Would you like to search for ingredients you want include (I) or exclude (E)? "<<endl;
  string choose;
  cin >> choose;
  if(choose == "I"){
    do{
    cout<<"What item would you like to include? "<<endl;
    cin >> y[inde];
    cout<<"Do you want to include another item(Yes/No)"<<endl;
    cin >> ans;
    inde++;
  }while(ans=="Yes");
    menu.Includ_i(y,inde);
  }
  else if(choose == "E"){
      cout<<"What item would you like to exclude? "<<endl;
      string x;
      cin >> x;
      menu.exclude_p(x);
      string ans;
      do{
        cout<<"Do you want to exclude another item (Yes/No)?"<<endl;
        cin >> ans;
        if(ans == "No")break;
        string y;
        cin >> y;
        menu.exclude_p(y);
      }while(1);
  }
  delete [] y;
}

void Restaurant::remove_menu(){
  load_menu();
  cout<<"Which pizza you want to delete (enter numbers)"<<endl;
  int n;
  cin >> n;
  menu.after_delete(n-1);
}
