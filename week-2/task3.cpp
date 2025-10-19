#include <iostream>
#include <cmath>   // for sqrt() and pow()
using namespace std;

int main() {
    double side1, side2, hypotenuse;

    // Ask the user to enter the lengths of the two sides
    cout << "Enter the length of the first side: ";
    cin >> side1;

    cout << "Enter the length of the second side: ";
    cin >> side2;

    // Calculate the hypotenuse using Pythagoras theorem
    hypotenuse = sqrt(pow(side1, 2) + pow(side2, 2));

    // Display the result
    cout << "\nThe length of the hypotenuse is: " << hypotenuse << endl;

    return 0;
}
