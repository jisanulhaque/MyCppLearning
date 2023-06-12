#include <iostream>
#include <string>

using namespace std;

class Player{
	public:
	std::string name;
	int health;
	int xp;
	
public:
//	Player(){
//		name="None";
//		health = 100;
//		xp=0;
//	}
	void set_name(std::string name_val){
		name= name_val;
	}
	
	std::string get_name(){
		return name;
	}
	
	Player(std::string name_val, int health_val, int xp_val){
		name= name_val;
		health= health_val;
		xp = xp_val;
	}
};
int main(){
	
	//Player frank;
	Player frank{"Frank", 100, 30};
	frank.set_name("Frank");
	cout<<frank.get_name()<<endl;
	
	cout<<"It Works"<<endl;
	
	return 0;
}