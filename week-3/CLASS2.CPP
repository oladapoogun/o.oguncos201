#include <iostream>
using namespace std;

int main() {
    cout<< "What is your age? " << endl;
    int age;
    cin >> age;
    if (age >= 18) {
        cout << "You are an adult." << endl;
    } else {
        cout << "You are a child." << endl;
    }
    return 0;
}