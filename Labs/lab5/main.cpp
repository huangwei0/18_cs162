#include <iostream>
#include <string>
#include "property.h"
#include "Tenant.h"

using namespace std;

int main(){
  Property temp;
  temp.set_budget(5);
  cout<<temp.get_budget()<<endl;
}
