#include "./pizza.h"

int main(){
	char f_name[30];
	cout << "Please input the file name: " << endl;
	cin >> f_name;
	int num_pizza = get_line(f_name);
	pizza *pz = new pizza[num_pizza];
	fstream fs(f_name);
	for(int i = 1; i < num_pizza; i++){
		pz[i].set_pizza(fs);
		pz[i].print();
	}
	fs.close();
	pizza *copy = new pizza[num_pizza];
	


return 0;
}
