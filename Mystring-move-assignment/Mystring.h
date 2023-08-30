#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring{
private:
	char *str; //ptr to a char that holds a c-style string
public:
	Mystring();	//No-args constructor
	Mystring(const char *s); //overloaded constructor
	Mystring(const Mystring &source); //copy consturctor
	Mystring(Mystring &&source); //Move constructor
	~Mystring(); //destructor
	
	Mystring &operator=(const Mystring &rhs); //Copy Assignmnet
	Mystring &operator=(Mystring &&rhs); //Move Assignment
	
	void display() const;
	int get_length() const;		//getters
	const char *get_str() const;
	
};

#endif 