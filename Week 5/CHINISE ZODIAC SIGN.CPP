#include <iostream>
using namespace std;

int main() {
    cout << "Enter the year ====>";

    int Year;
    cin >> Year;

    switch (Year % 12) {
        case 0:
            cout << "MONKEY\n";
            break;
        case 1:
            cout << "ROOSTER\n";
            break;
        case 2:
            cout << "DOG\n";
            break;
        case 3:
            cout << "PIG\n";
            break;
        case 4:
            cout << "RAT\n";
            break;
        case 5:
            cout << "OX\n";
            break;
        case 6:
            cout << "TIGER\n";
            break;
        case 7:
            cout << "RABBIT\n";
            break;
        case 8:
            cout << "DRAGON\n";
            break;
        case 9:
            cout << "SNAKE\n";
            break;
        case 10:
            cout << "HORSE\n";
            break;
        case 11:
            cout << "SHEEP\n";
            break;
        default:
            cout << "Invalid input!\n";
    }

    return 0;
}
