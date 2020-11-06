/******************************************************
** Program: run_stats.cpp
** Author: Wei Huang
** Date: 04/16/2018
** Description: the main function of the program
** Input: ./prog -s 2 -f states1.txt
** Output: the program start to run
******************************************************/


#include "./state_facts.h"

int main(int argc, char *argv[]){

	int n = is_valid(argc, argv);
	// if (n == -1) {
	// 	cout<<"Input is error!";
	// 	return -1;
	// }
	ifstream states1;
	states1.open("states1.txt");

	state* s = creat_state(n);
	//county* c = creat_county(n);
	get_state_date(s, n, states1);

	ofstream output;
 	output.open("output.txt");

 int o = get_option();
 if(o==1){
	 largest_state_pop(s, n, output);
 }
	if(o==2){
		largest_county_pop(s, n,output);
	}
	if(o==3){
	counties_income (s,  n,output);
	}
	if(o==4){
		average_household(s, n,states1, output);

	}
	if(o==5){
		state_by_name(s,  n, states1, output);

	}
	if(o==6){
		state_by_pop(s, n, output);
	}
	if(o==7){

		county_by_pop(s,  n, output);
	}
	if(o==8){
		county_by_name(s, n, output);
	}
	delete_info(&s,  n);


	 print_info(s, n, output);

	states1.close();
	output.close();

	return 0;
}
