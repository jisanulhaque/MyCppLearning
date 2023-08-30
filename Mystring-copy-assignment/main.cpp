//Section 14
//Mystring-starting point

#include <iostream>
#include <vector>
#include "Mystring.h"

using namespace std;

int main(){
	Mystring a {"Hello"};
	Mystring b;
	b.operator=(a);
	
	b="This is a test";
	
	
	return 0;
}