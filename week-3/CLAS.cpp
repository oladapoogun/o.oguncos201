#include <iostream>
using namespace std;

int main() {
    cout << "write an integer"<< endl;
    int integer; 
    cin >> integer;

    if (integer %5 == 0) {
        cout << "HIFIVE! " << endl;
    } else if(integer%2==0) {
        cout << "HIEVEN !" << endl;
        }
        else {
            cout << "HiODD! " << endl;
        }
   
    return 0;
}