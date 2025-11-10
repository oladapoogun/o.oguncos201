#include <iostream>
using namespace std;
int main() {
    int i = 1;
    int sum = 0;
    while (i < 10) {
        sum = sum + i;
        i++;
        cout << "The sum is " << sum << endl;
        cout << "The i os " << i << endl;
    }
    
    return 0;
}
