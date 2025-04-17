#include<iostream>
#include<fstream> // fstream is handing file in c++ for use input/ofstream and output/ifstream
using namespace std;
int main(){
    ofstream myfile;
    myfile.open("example.txt");
    myfile << "Hello World\n";
    myfile << "This is a test file.\n";
    myfile << "This is the second line.\n";
    myfile << "This is the third line.\n";
    myfile << "How it going\n";
    // create a condition to check if the file is open or not
    if (myfile.is_open()) { // is_open is used to check if the file is open or not
        cout << "File is open" << endl;
    } else {
        cout << "File is not open" << endl;
    }
    myfile.close(); 

    
    
    return 0;
}