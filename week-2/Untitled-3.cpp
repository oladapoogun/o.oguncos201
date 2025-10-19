#include <iostream>
using namespace std;

int main() {
    double fahrenheit;
    double celsius;

    cout << "Enter temperature in Fahrenheit celsius: ";
    cin >> celsius; 

    fahrenheit = (9.0 / 5.0) * celsius + 32;


    cout << "Temperature in farenheit: " << fahrenheit << endl;
    return 0;
}
