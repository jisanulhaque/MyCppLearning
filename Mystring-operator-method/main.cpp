#include <iostream>
#include "Mystring.h"

using namespace std;

int main(){
	cout<<boolalpha<<endl;
	Mystring larry{"Larry"};
	Mystring moe{"Moe"};
	
	Mystring stooge = larry;
	
	larry.display();
	moe.display();
	
	cout<<(larry==moe)<<endl; //false
	cout<<(larry==stooge)<<endl; //true
	
	larry.display(); //Larry
	Mystring larry2 = -larry;
	larry2.display(); //larry
	
	Mystring stooges = larry + "Moe"; //ok with member function
	//Mystring stooges = "Larry" + moe; //compiler error
	
	Mystring two_stooges = moe + " "+ larry;
	two_stooges.display(); //Moe Larry
	
	Mystring three_stooges = moe + " "+ larry+" "+"Curly"; 
	three_stooges.display(); //Moe Larry Curly
	
	
	return 0;
}