#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main() {
    int score{100};
    int *score_ptr{&score};
    
    cout<<*score_ptr<<endl;//100
    *score_ptr = 200; //Dereferencing a Pointer
    cout<<*score_ptr<<endl;//200
    cout<<score<<endl;
    
    cout<<"\n------------------------------"<<endl;
    
    double high_temp{100.7};
    double low_temp{37.2};
    
    double *temp_ptr {&high_temp};
    
    cout<<*temp_ptr<<endl;//100.7
    
    temp_ptr = &low_temp;
    
    cout<<*temp_ptr<<endl; //37.2
    
    cout<<"\n------------------------------"<<endl;
    
    string name{"Frnak"};
    string *string_ptr{&name};
    cout<<*string_ptr<<endl;
    
    name = "James";
    
    cout<< *string_ptr<<endl;
    
    cout<<"\n------------------------------"<<endl;
    vector <string >stooges{"Larry", "Moe", "Curly"};
    vector <string> *vector_ptr{nullptr};
    vector_ptr = &stooges;
    
    cout<<(*vector_ptr).at(0)<<endl;//Larry
    
    cout<<"Stooges"<<endl;
    for(auto stooge: *vector_ptr){ //used dereferencing instead of vector
        cout<<stooge<<" ";
    }
    cout<<endl;
    
    cout<<"\n------------------------------"<<endl;
    return 0;
    }