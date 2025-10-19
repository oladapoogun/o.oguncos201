#include <iostream>
using namespace std;

int main() {
    double fahrenheit;
    double celsius;

    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    // Convert Fahrenheit to Celsius
    celsius = (5.0 / 9.0) * (fahrenheit - 32);

    cout << "Temperature in Celsius: " << celsius << endl;

    return 0;
}
