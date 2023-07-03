#include <iostream>
#include <string>

using namespace std;

class Deep{
private:
	int *data;
public:
void set_data(int d){*data = d;}
int get_data_value(){return *data;}
//Constructor
Deep(int d);
//Copy Constructor
Deep(const Deep &source);
//Destrctor
~Deep();

};

Deep::Deep(int d){
	data = new int;
	*data = d;
}

Deep::Deep(const Deep &source)
	:Deep(*source.data) {
	cout<<"Copy Constructor-Deep Copy"<<endl;
}
Deep::~Deep(){
	delete data;
	cout<<"Desconstructor freeing data"<<endl;
}

void display_deep(Deep s){
	cout<<s.get_data_value()<<endl;
}
int main(){
	Deep obj1{100};
	display_deep(obj1);
	
	Deep obj2{obj1};
	obj2.set_data(1000);
	
	
	return 0;
}