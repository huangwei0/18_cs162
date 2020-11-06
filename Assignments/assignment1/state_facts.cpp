/******************************************************
** Program: stae_fact.cpp
** Author: Wei Huang
** Date: 04/16/2018
** Description:
** Input: manul option and print option
** Output:print on screen or output & print the result of option of manul
******************************************************/

#include "./state_facts.h"
/*****************************************************
 **program:AllisNum
 **descriptio:check the commonline 
 **pre-condition: string str
 **post-condition: true or false
 ******************************************************/

bool AllisNum(string str){
	for (int i = 0; i < str.size(); i++){
		int tmp = (int)str[i];
		if (i == 0) {
			if (tmp != 45 || tmp < 48 || tmp > 57) return false;
		} else {
			if (tmp < 48 || tmp > 57) return false;
		}
	 }
	return true;
}

/*****************************************************
 **program:is_valid
 **descriptio:check the commonline
 **pre-condition: int argc, char *argv[]
 **post-condition: check true or false by n
 ******************************************************/
int is_valid (int argc, char *argv[]){
	if(argc != 5) return -1;
	int s = 0, f = 0, n = 0;
	for(int i = 1; i < 4; i+=2){
		if(strcmp(argv[i], "-s") == 0){
			s=1;
			if(AllisNum(argv[i+1])) return -1;
			n = abs(atoi(argv[i+1]));
		}
		if(strcmp(argv[i], "-f") == 0){
			f=1;
			if(strcmp(argv[i+1], "states1.txt") != 0) return -1;
		}
	}
	if(f != 1 && s != 1) return -1;
	return n;
}

/*****************************************************
 **program:creat_state 
 **descriptio:creat an array for state 
 **pre-condition: int n
 **post-condition: array for s
 ******************************************************/
state* creat_state (int n){
	state* s = new state[n];
		return s;
}

/*****************************************************
 **program:creat_county
 **descriptio: creat an array for county
 **pre-condition: int n 
 **post-condition: arrary for n
 ******************************************************/
county* creat_county(int n){
	county* c = new county [n];
	return c;
}

/*****************************************************
 **program:get_county_date
 **descriptio:get the county date from input 
 **pre-condition: county* c, int n, ifstream &states1
 **post-condition: none
 ******************************************************/
void get_county_date(county* c, int n, ifstream &states1){
	for(int i =0; i < n; i++){
			states1 >> c[i].name >> c[i].population >> c[i].avg_income >>c[i].avg_house >>c[i].cities;
			c[i].city = new string [c[i].cities];
			for(int j = 0; j< c[i].cities; j++){
				states1 >> c[i].city[j];
			}
	}
}

/*****************************************************
 **program:get_state_date
 **descriptio:get the state date from the input
 **pre-condition: state* s, int n, ifstream &states1
 **post-condition: none
 ******************************************************/
void get_state_date (state* s, int n, ifstream &states1){
	for(int i = 0; i < n; i++){
	states1 >> s[i].name>>s[i].population>>s[i].counties;
	s[i].c = creat_county(s[i].counties);
	get_county_date(s[i].c, s[i].counties, states1);
	}
}

/*****************************************************
 **program:is_option
 **descriptio: check the user input----option
 **pre-condition: string num
 **post-condition: true or false
 ******************************************************/
bool is_option(string num){
	if(num.length()==0) return false;
	int len =num.length();
	for(int i = 0; i<len; i++){
		if(num[i] < 48 || num[i] > 57) return false;
	}
	return true;
}

/*****************************************************
 **program:screen_file
 **descriptio: choose for print on screen or file
 **pre-condition: none
 **post-condition: integer
 ******************************************************/
int screen_file(){
 	string num = " ";
 do{
	 cout<<"1. print on screen 2 print on the ouput.txt: ";
	 getline(cin, num);
 }while(!is_option(num));
 	return atoi(num.c_str());
}

/*****************************************************
 **program:print_infor
 **descriptio:	print the information from the input
 **pre-condition: state* s, int n, ofstream &output
 **post-condition: none
 ******************************************************/
void print_info(state* s, int n, ofstream &output){
	for (int i = 0; i < n; i++){
		output << s[i].name << "\t" << s[i].population << "\t" << s[i].counties << endl;
		for (int j = 0; j < s[i].counties; j++){
			output << s[i].c[j].name << "\t" << s[i].c[j].population << "\t" << s[i].c[j].avg_income << "\t" << s[i].c[j].avg_house << "\t" << s[i].c[j].cities << "\t";
			for (int k = 0; k < s[i].c[j].cities; k++){
				output << s[i].c[j].city[k] << "\t";
			}
			output << endl;

		}
		//output << endl;
	}
}

/*****************************************************
 **program:largest_state_pop
 **descriptio:the largest  population of state
 **pre-condition: state *s, int n, ofstream &output
 **post-condition: none
 ******************************************************/

void largest_state_pop (state *s, int n, ofstream &output){
	int population = 0;
	string name = " ";
	for(int i = 0; i < n; i++){
		//for(int j = 0;j<n-1-i; j++){
			if(s[i].population >= population){
				if(s[i].population > population){
					population = s[i].population;
					name = s[i].name;


				}

			else{
					name += "  ";
					name += s[i].name;

				}
			}
	}
	int k = screen_file();
		if(k==1){
			cout<<name<<endl;
		}
		else if(k==2){
			output<<name<<endl;
		}
	//cout<< name<<endl;
}

/*****************************************************
 **program:largest_county_pop
 **descriptio:largest  population of county
 **pre-condition: state *s, int n, ofstream &output
 **post-condition: none
 ******************************************************/
void largest_county_pop(state *s, int n, ofstream &output){
	int pop = 0;
	string m = " ";
	for(int i = 0; i < n; i++){
		for(int j=0;j<s[i].counties;j++){
			if(s[i].c[j].population >= pop){
				if(s[i].c[j].population > pop){
				pop = s[i].c[j].population;
				m = s[i].c[j].name;
			}
			else{
				m += "  ";
				m += s[i].c[j].name;
				}
			}
	}
	}
	int k = screen_file();
			if(k==1){
				cout<<m<<endl;
			}
			else if(k==2){
				output<<m<<endl;
			}
}

/*****************************************************
 **program:counties_income
 **descriptio:the counties with an income above a specific amount, ( get input from the user
for this)
 **pre-condition: state *s, int n, ofstream &output
 **post-condition: none
 ******************************************************/
void counties_income (state *s, int n, ofstream &output){
	int temp = 0;
	cout<<"enter a specific amount: ";
	cin>>temp;
	int k = screen_file();
			if(k==1){
				cout<<"the counties with an income above a specific amount: "<<endl;;
				for(int i = 0; i < n; i++){
					for(int j = 0; j<s[i].counties;j++){
						if(s[i].c[j].avg_income > temp){

									cout<<s[i].c[j].name<<":"<<s[i].c[j].avg_income<<"\t"<<endl;
							}
					}
				}
				cout<<endl;
			}
			else if(k==2){
				output<<"the counties with an income above a specific amount: "<<endl;;
				for(int i = 0; i < n; i++){
					for(int j = 0; j<s[i].counties;j++){
						if(s[i].c[j].avg_income > temp){
									output<<s[i].c[j].name<<":"<<s[i].c[j].avg_income<<"\t"<<endl;
							}
					}
				}
				cout<<endl;
			}


}

/*****************************************************
 **program:change 
 **descriptio:exchange function help for state
 **pre-condition: state &a, state &b
 **post-condition: none
 ******************************************************/
void change(state &a, state &b){
    state temp;
    temp=a;
    a=b;
    b=temp;
}

/*****************************************************
 **program:exchange
 **descriptio:exchange function help for state 
 **pre-condition: state &a, state &b
 **post-condition: none
 ******************************************************/
void exchange(county &a, county &b){
	county temp;
	temp = a;
	a = b;
	b = temp;
}

/*****************************************************
 **program:state_by_name
 **descriptio:sort state by name
 **pre-condition: state *s, int n, ifstream &states1, ofstream &output
 **post-condition: none
 ******************************************************/
void state_by_name(state *s, int n, ifstream &states1, ofstream &output){
	int k = screen_file();
		if(k==1){
			cout<<"the states in sorted order by name: "<<endl;
			for(int i=0; i<n-1;i++){
				for(int j=0; j<n-1-i;j++){
					if(s[j].name[0] > s[j+1].name[0])
						change(s[j], s[j+1]);
				}
			}
			for(int i = 0; i < n; i++){

				cout<< s[i].name <<"\t"<<s[i].population <<"\t"<<s[i].counties<<endl;
			}
		}
		else if(k==2){
			output<<"the states in sorted order by name: "<<endl;
			for(int i=0; i<n-1;i++){
				for(int j=0; j<n-1-i;j++){
					if(s[j].name[0] > s[j+1].name[0])
						change(s[j], s[j+1]);
				}
			}
			for(int i = 0; i < n; i++){

				output<< s[i].name <<"\t"<<s[i].population <<"\t"<<s[i].counties<<endl;
			}
		}

}

/*****************************************************
 **program:state_by_pop
 **descriptio:sort state by population
 **pre-condition: state *s, int n,ofstream &output
 **post-condition: noen
 ******************************************************/
void state_by_pop(state *s, int n,ofstream &output){
	int k = screen_file();
		if(k==1){
			cout<<"the states in sorted order by population: "<<endl;
			for(int i=0; i<n-1;i++){
				for(int j=0; j<n-1-i;j++){
					if(s[j].population > s[j+1].population)
						change(s[j], s[j+1]);
				}

				for(int i = 0; i < n; i++){
					cout<< s[i].name <<"\t"<<s[i].population <<"\t"<<s[i].counties<<endl;
				}
			}
		}
		else if(k==2){
			output<<"the states in sorted order by population: "<<endl;
			for(int i=0; i<n-1;i++){
				for(int j=0; j<n-1-i;j++){
					if(s[j].population > s[j+1].population)
						change(s[j], s[j+1]);
				}

				for(int i = 0; i < n; i++){
					output<< s[i].name <<"\t"<<s[i].population <<"\t"<<s[i].counties<<endl;
				}
		}
	}
}

/*****************************************************
 **program:county_by_name
 **descriptio: sort county by name
 **pre-condition: state *s, int n,ofstream &output
 **post-condition: none
 ******************************************************/
void county_by_name(state *s, int n,ofstream &output){
	int k = screen_file();
		if(k==1){
			cout<< "sort by name of counties within states." << endl;
			for(int i = 0; i < n; i++){
				for(int j = 0; j < n-1; j++){
					if(s[i].c[j].name[0] < s[i].c[j+1].name[0])
						exchange(s[i].c[j], s[i].c[j+1]);
				}
			}
			for(int i = 0; i < n; i++){
				cout << "state " << s[i].name << "'s counties sorted by name:" << endl;
				for(int j= 0; j < s[i].counties; j++)
					cout << s[i].c[j].name <<endl;
			}
		}
		else if(k==2){
			output<< "sort by name of counties within states." << endl;
			for(int i = 0; i < n; i++){
				for(int j = 0; j < n-1; j++){
					if(s[i].c[j].name[0] < s[i].c[j+1].name[0])
						exchange(s[i].c[j], s[i].c[j+1]);
				}
			}
			for(int i = 0; i < n; i++){
				output << "state " << s[i].name << "'s counties sorted by name:" << endl;
				for(int j= 0; j < s[i].counties; j++)
					output << s[i].c[j].name <<endl;
			};
		}

}

/*****************************************************
 **program:county_by_pop
 **descriptio: sort county by population
 **pre-condition: state *s, int n,ofstream &output
 **post-condition: none
 ******************************************************/
void county_by_pop(state *s, int n, ofstream &output){
	int k = screen_file();
		if(k==1){
			cout<<"the counties within states sorted by population: "<<endl;
			for(int i=0; i<n;i++){
				for(int j=0; j<s[i].counties-1;j++){
					if(s[i].c[j].population > s[i].c[j+1].population)
						exchange(s[i].c[j], s[i].c[j+1]);
				}
			}
			for(int i = 0; i < n; i++){
				 cout<< "state " << s[i].name << "'s counties sorted by name:" << endl;
				for(int j=0; j<s[i].counties;j++){
				cout<< s[i].c[j].name <<"\t"<<s[i].c[j].population <<"\t"<<endl;
			}
			}
		}
		else if(k==2){
			output<<"the counties within states sorted by population: "<<endl;
			for(int i=0; i<n;i++){
				for(int j=0; j<s[i].counties-1;j++){
					if(s[i].c[j].population > s[i].c[j+1].population)
						exchange(s[i].c[j], s[i].c[j+1]);
				}
			}
			for(int i = 0; i < n; i++){
					output << "state " << s[i].name << "'s counties sorted by name:" << endl;
				for(int j=0; j<s[i].counties;j++){
				output<< s[i].c[j].name <<"\t"<<s[i].c[j].population <<"\t"<<endl;
			}
			}
		}

}

/*****************************************************
 **program:average_household
 **descriptio: the average household cost for all counties in each state,
 **pre-condition: state *s, int n,ifstream &states1, ofstream &output
 **post-condition: none
 ******************************************************/
void average_household(state *s, int n,ifstream &states1, ofstream &output){
	int k = screen_file();
		if(k==1){
			int sum = 0;
			for(int i = 0;i < n; i++){
					sum = 0;
				for(int j = 0; j<s[i].counties;j++){
					sum += s[i].c[j].avg_income;
				}
				cout<<s[i].name << "the average household cost for all counties in each state is: "<< sum/s[i].counties<<endl;
			}
		}
		else if(k==2){
			int sum = 0;
			for(int i = 0;i < n; i++){
					sum = 0;
				for(int j = 0; j<s[i].counties;j++){
					sum += s[i].c[j].avg_income;
				}
				output<<s[i].name << "the average household cost for all counties in each state is: "<< sum/s[i].counties<<endl;
			}
		}

}

/*****************************************************
 **program:delete_infor
 **descriptio:delete the memory
 **pre-condition: state** s, int n
 **post-condition: none
 ******************************************************/
void delete_info(state** s, int n){
	for(int i =0; i<n; i++){
		for(int j = 0; j<(*s)[i].counties;j++){
			delete[](*s)[i].c[j].city;
		}
			delete[](*s)[i].c;
	}
	delete [] (*s);
	//()*s_) =NULL;
}

/*****************************************************
 **program:get_option
 **descriptio:user option
 **pre-condition: none
 **post-condition: none
 ******************************************************/
int get_option(){
	string n = " ";
	do{
		cout <<"please choose the data mode: "<<endl;
		cout<<"1.the state with the largest population"<<endl;
		cout<<"2.the county with the largest population"<<endl;
		cout<<"3.the counties with an income above a specific amount, (You must get input from the user for this)"<<endl;
		cout<<"4.the average household cost for all counties in each state"<<endl;
		cout<<"5.the states in sorted order by name"<<endl;
		cout<<"6.the states in sorted order by population"<<endl;
		cout<<"7.the counties within states sorted by population"<<endl;
		cout<<"8.the counties within states sorted by name"<<endl;
		getline(cin, n);
	}while(!is_option(n));
	return atoi(n.c_str());

}
