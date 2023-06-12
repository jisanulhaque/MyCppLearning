#include <iostream>
#include <string>
#include <vector>

using namespace std;

void pass_by_value1(int num);
void pass_by_value2(string s);
void pass_by_value3(vector <string> v);
void print_vector(vector<string> v);


int main() {
    int num{10};
    
    cout<<"Before: "<<num<<endl;
    pass_by_value1(num);
    
    cout<<"After: "<<num<<endl;
    
    string name{"Frank"};
    
    cout<<"Before: "<<name<<endl;
    pass_by_value2(name);
    cout<<"After: "<<name<<endl;
    
    vector<string> stooges{"proteek ", "mrittika ", "medha"};
    cout<<"Before: ";
    print_vector(stooges);
    
    pass_by_value3(stooges);
    cout<<endl;
    cout<<"After: ";
    print_vector(stooges);
    
    return 0;
    }
    
void pass_by_value1(int num){
    num=1000;
}

void pass_by_value2(string s){
    s="changed";
}

void pass_by_value3(vector <string> v){
    v.clear();
}

void print_vector(vector<string>v){
    for(auto s:v)
        cout<<s;
    cout<<endl;
}