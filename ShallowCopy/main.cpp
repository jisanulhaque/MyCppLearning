#include <iostream>
#include <string>

using namespace std;

class Shallow{
private:
	int *data;
public:
void set_data(int d){*data = d;}
int get_data_value(){return *data;}
//Constructor
Shallow(int d);
//Copy Constructor
Shallow(const Shallow &source);
//Destrctor
~Shallow();

};

int main(){
	
	
	
	return 0;
}