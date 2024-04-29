// Learning C++ 
// Exercise 02_03
// Using Variables, by Eduardo Corpeño 

#include <iostream>
#include <string>
using namespace std;

int main(){
    string name;
    cout << "Hi There!" << endl;
    cout << "What is your name? " << flush;
    cin >> name;
    cout << "Hello, " << name << "!" << endl;

    cout << std::endl << std::endl;
    return (0);
}
