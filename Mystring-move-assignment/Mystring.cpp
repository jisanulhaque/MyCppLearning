#include <cstring>
#include <iostream>
#include "Mystring.h"

//No-args constructor
Mystring::Mystring()	
	:str{nullptr}{
	str = new char[1];
	*str = '\0';
}

//Overloading constructor
Mystring::Mystring(const char *s)
	:str{nullptr}{
		if(s == nullptr){
			str = new char[1];
			*str = '\0';
		}else{
			str = new char[std::strlen(s)+1];
			std::strcpy(str, s);
		}
			
	}

//Copy constructor
Mystring::Mystring(const Mystring &source)
	:str{nullptr} {
		str = new char[std::strlen(source.str) + 1];
		std::strcpy(str, source.str);
}

//Move Constructor
Mystring::Mystring(Mystring &&source)
	:str{source.str}{
		source.str =nullptr;
		std::cout<<"Move constructor used"<<std::endl;
}

//Destructor
Mystring::~Mystring(){
	if(str == nullptr)
		std::cout<<"Destructor used for: nullptr"<<std::endl;
	else
		std::cout<<"Destructor used for:"<< str<<std::endl;
		
	delete [] str;
}

//Copy Assignment
Mystring &Mystring::operator=(const Mystring &rhs){
	std::cout<<"Using Copy Assignment"<<std::endl;
	
	if(this == &rhs)
		return *this;
		
	delete [] this->str;
	str = new char[strlen(rhs.str) + 1];
	strcpy(this->str, rhs.str);
	return *this;
}

//Move Assignment
Mystring &Mystring::operator=(Mystring &&rhs){
	std::cout<<"Using move assignment"<<std::endl;
	
		if(this == &rhs)
			return *this;
			
		 delete [] str; //deallocate
		 str = rhs.str; //stealing the pointer
		 rhs.str = nullptr;
		 
		 return *this; //returning the current object
}

void Mystring::display() const{
	std::cout<<str<<":"<<get_length()<<std::endl;
}

int Mystring::get_length() const {return strlen(str);}

const char *Mystring::get_str() const{return str;}