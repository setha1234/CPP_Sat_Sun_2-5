#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream myfile; // ifstream is used to read from files
    myfile.open("example.txt");
    string line;
    // create a condition to check if the file is open or not
    if (myfile.is_open()) { // is_open is used to check if the file is open or not
        cout << "File is open" << endl;
    } else {
        cout << "File is not open" << endl;
    }
    // read the file line by line
    while (getline(myfile, line)) { // getline is used to read a line from the file
        cout << line << endl; // print the line to the console
    }

    // i want to read just the first line of the file
    getline(myfile, line);
    cout << line << endl; // print the line to the console

    // i want to read just the second line of the file
    getline(myfile, line);
    cout << line << endl; // print the line to the console
    myfile.close(); // close the file

    return 0;
}