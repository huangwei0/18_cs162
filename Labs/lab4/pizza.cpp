#include "./pizza.h"

pizza::pizza(){
	name = " ";
	small_cost = 0;
	medium_cost = 0;
	large_cost = 0;
	num_ingredients = 0;
	ingredients = NULL;
}

pizza::pizza(string pizza_name, int s_c, int m_c, int l_c, int n_i){
	name = pizza_name;
	small_cost = s_c;
	medium_cost = m_c;
	large_cost = l_c;
	num_ingredients = n_i;
}

string pizza::get_name(){
	return name;
}
	
void pizza::set_name(string pizza_name){
	name = pizza_name;
}

int pizza::get_small_cost(){
	return small_cost;
}

void pizza::set_small_cost(int s_c){
	small_cost = s_c;
}

int pizza::get_medium_cost(){
	return medium_cost;
}

void pizza::set_medium_cost(int m_c){
	medium_cost = m_c;
}

int pizza::get_large_cost(){
	return large_cost;
}

void pizza::set_large_cost(int l_c){
	large_cost = l_c;
}

int pizza::get_num_ingredients(){
	return num_ingredients;
}

void pizza::set_num_ingredients(int n_i){
	num_ingredients = n_i;
}

int get_line(char *name){
	fstream fs(name);
	if( !fs.is_open()){
		cout << "Open file error!" << endl;
	}
	int count = 0;
	string temp;
	do{
		getline(fs, temp);
		count ++;
	}while(!fs.eof());
	fs.close();
	return count;
}

//void pizza::set_ingredients_array(string* newIng, int numIng){
	
void pizza::set_pizza(fstream &fs){
	fs >> name >> small_cost >> medium_cost >> large_cost >> num_ingredients;
	string *pizza_in = new string[num_ingredients];
	for(int i = 0; i < num_ingredients; i++){
		fs >> pizza_in[i];
	}
	ingredients = pizza_in;
}

void pizza::print(){
	cout << "Pizza: " << name << endl;
	cout << "Small cost: " << small_cost << endl;
	cout << "Medium cost: " << medium_cost << endl;
	cout << "Large cost: " << large_cost << endl;
	cout << "Ingredients: ";
	for(int i = 0; i < num_ingredients; i++){
		cout << ingredients[i] << endl;
	}
	cout << endl;
}

pizza::~pizza(){
	if(ingredients != NULL) {
		delete [] ingredients;
	}
}

pizza::pizza(const pizza &copy){
	name = copy.name;
	small_cost = copy.small_cost;
	medium_cost = copy.medium_cost;
	large_cost = copy.large_cost;
	num_ingredients = copy.num_ingredients;
	ingredients = new string[num_ingredients];
	for (int i = 0; i < num_ingredients; i++){
		ingredients[i] = copy.ingredients[i];
	}
}

pizza & pizza::operator=(const pizza &copy){
	if(ingredients != NULL){
		delete [] ingredients;
	}
	name = copy.name;
	small_cost = copy.small_cost;
	medium_cost = copy.medium_cost;
	large_cost = copy.large_cost;
	num_ingredients = copy.num_ingredients;
	if(num_ingredients != 0){
		ingredients = new string[num_ingredients];
		for(int i = 0; i < num_ingredients; i++){
			ingredients[i] = copy.ingredients[i];
		}
	}
	else{
		ingredients = NULL;
	}
	return *this;
}

