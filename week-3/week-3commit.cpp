#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    string name, courseName, locName;
    int isPAU, course, location;
    int days;
    double regFee, lodgeFee, total;

    cout << "Enter your full name: ";
    getline(cin, name);

    cout << "Are you a PAU student? (1 = Yes, 0 = No): ";
    cin >> isPAU;
    if (isPAU ==0  ){
        cout << "Sorry, this offer is only for PAU students.\n";
        return 0;
    }
    

    cout << "\nCourses:\n";
    cout << "1. Photography (3 days, NGN 10000)\n";
    cout << "2. Painting (5 days, NGN 8000)\n";
    cout << "3. Fish Farming (7 days, NGN 15000)\n";
    cout << "4. Baking (5 days, NGN 13000)\n";
    cout << "5. Public Speaking (2 days, NGN 5000)\n";
    cout << "Enter your course number: ";
    cin >> course;

    if (course == 1) { courseName = "Photography"; days = 3; regFee = 10000; }
    else if (course == 2) { courseName = "Painting"; days = 5; regFee = 8000; }
    else if (course == 3) { courseName = "Fish Farming"; days = 7; regFee = 15000; }
    else if (course == 4) { courseName = "Baking"; days = 5; regFee = 13000; }
    else if (course == 5) { courseName = "Public Speaking"; days = 2; regFee = 5000; }
    else { cout << "Invalid course number"; return 0; }

    cout << "\nLocations:\n";
    cout << "1. Camp House A (NGN 10000 per day)\n";
    cout << "2. Camp House B (NGN 2500 per day)\n";
    cout << "3. Camp House C (NGN 8000 per day)\n";
    cout << "4. Camp House D (NGN 13000 per day)\n";
    cout << "5. Camp House E (NGN 5000 per day)\n";
    cout << "Enter your location number: "; 
    cin >> location;

    if (location == 1) { locName = "Camp House A"; lodgeFee = 10000; }
    else if (location == 2) { locName = "Camp House B"; lodgeFee = 2500; }
    else if (location == 3) { locName = "Camp House C"; lodgeFee = 5000; }
    else if (location == 4) { locName = "Camp House D"; lodgeFee = 13000; }
    else if (location == 5) { locName = "Camp House E"; lodgeFee = 5000; }
    else { cout << "Invalid location number"; return 0; }

    double lodgeCost = lodgeFee * days;

    // Lodging discount (nested if)
    if (isPAU == 1) {
        if (location == 1 || location == 2) {
            lodgeCost = lodgeCost * 0.5; // 50% discount
        }
    }

    // Registration discount (3%)
    if (days > 5 || regFee > 12000 || location == 3) {
        regFee = regFee * 0.97;
    }

    // Random promo (₦500 off if 7 or 77)
    srand(time(0));
    int draw = rand() % 100 + 1;
    double promo = 0;
    if (draw == 7 || draw == 77) {
        promo = 500;
    }

    total = regFee + lodgeCost - promo;

    cout << "\n----- RECEIPT -----\n";
    cout << "Name: " << name << endl;
    cout << "PAU Student: " << (isPAU == 1 ? "Yes" : "No") << endl;
    cout << "Course: " << courseName << " (" << days << " days)" << endl;
    cout << "Location: " << locName << endl;
    cout << "Registration Fee: NGN " << regFee << endl;
    cout << "Lodging: NGN " << lodgeFee << " per day x " << days << " days = NGN " << lodgeCost << endl;
    cout << "Random Draw: " << draw << "  Promo: NGN " << promo << endl;
    cout << "Total to Pay: NGN " << total << endl;
    cout << "-------------------\n";

    return 0;
}
