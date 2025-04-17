#include <iostream>
using namespace std;

// Template : have 2 templates 
// 1. Function Template
// 2. Class Template


// Function Template
template <typename T>

T sum(T a, T b){
    return a+b;

}


int main(){
    cout<<sum(10,20)<<endl;
    

    return 0;
}