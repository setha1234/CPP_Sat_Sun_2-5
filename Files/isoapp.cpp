#include<iostream>
#include<fstream> // fstream is handing file in c++ for use input/ofstream and output/ifstream
using namespace std;

int main(){
    // ios::app is used to append the file

    ofstream myfile("example.txt", ios::app); // open the file in append mode

    myfile << "My name is kaka\n"; // write to the file
    myfile << "I am 20 year old\n"; // write to the file
    myfile << "I am a student\n"; // write to the file
    myfile << "I am a programmer\n"; // write to the file
    myfile << "I am a software engineer\n"; // write to the file

    if(myfile.is_open()) { // is_open is used to check if the file is open or not
        cout << "File is open" << endl;
    } else {
        cout << "File is not open" << endl;
    }
    myfile.close(); // close the file

}