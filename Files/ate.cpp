#include<iostream>
#include<fstream>
using namespace std;

int main(){

    // ios::ate is used for pointer to create / write 

    ofstream myfile;
    myfile.open("example.txt",ios::ate);

    myfile << "Hey you!!!"<<endl;

    myfile.close();




}