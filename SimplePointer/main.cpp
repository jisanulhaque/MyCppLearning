#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
//    int num{10};
//    
//    cout<<"value of num is: "<<num<<endl;
//    cout<<"size of num is: "<<sizeof num<<endl;
//    cout<<"address of num is: "<<&num<<endl;
    
//    int *p;
//    cout<<"Value of p is: "<<p<<endl; //garbage
//    cout<<"Address of p is: "<<&p<<endl;
//    cout<<"SIze of p is: "<<sizeof p<<endl;//8 bytes
//    p=nullptr;
//    
//    cout<<"The value of p is: "<<p<<endl;

//    int *p1{nullptr};
//    double *p2{nullptr};
//    unsigned long long *p3{nullptr};
//    vector<string> *p4{nullptr};
//    string *p5{nullptr};
//    
//    cout<<"\nsize of p1 is: "<<sizeof p1<<endl;
//    cout<<"size of p2 is: "<<sizeof p2<<endl;
//    cout<<"size of p3 is: "<<sizeof p3<<endl;
//    cout<<"size of p4 is: "<<sizeof p4<<endl;
//    cout<<"size of p5 is: "<<sizeof p5<<endl;
    
    int score{10};
    double high_temp{100.7};
    
    int *score_ptr{nullptr};
    
    score_ptr=&score;
    
    cout<<"Value of score is "<<score<<endl;
    cout<<"Address of score is "<<&score<<endl; //same as score_ptr
    cout<<"Value of score_ptr is "<<score_ptr<<endl; //same as address of score
    //score_ptr=&high_temp; //error type conflict
    
    
    return 0;
    }