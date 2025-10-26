#include <iostream>
#include <cstdlib>
#include <ctime>  
using namespace std;


int main() {

    srand(time(0));
    int numberi = rand() % 10;
    int numberii = rand() % 10;
    int temp;

    if (numberi < numberii) {
        temp = numberii;
        numberii = numberi;
        numberi = temp;
    }
    int difference = numberi - numberii;
    cout << "Enter Your Guess: " << endl;
    int guess;
    cin >> guess;

    if (guess == difference) {
        cout << "Correct!" << endl;
    } else {
        cout << "Wrong! The correct answer is " << difference << endl;
    }
    return 0;
}