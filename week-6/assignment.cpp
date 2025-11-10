#include <iostream>
#include <string>
#include <cstdlib>   // for rand(), srand()
#include <ctime>     // for time()

using namespace std;

int main() {
    // ===== INPUT SECTION =====
    string name;
    bool isPau;
    int course, loc;

    cout << "Enter full name: ";
    getline(cin, name);

    cout << "Is PAU student? (1=true, 0=false): ";
    cin >> isPau;

    cout << "Enter course (1-5): ";
    cin >> course;

    cout << "Enter location (1-5): ";
    cin >> loc;

    // ===== VARIABLE DECLARATIONS =====
    string courseName, locName;
    int days = 0;
    double regFee = 0.0, lodgingPerDay = 0.0;
    double lodgingCost = 0.0, total = 0.0;
    double regDiscount = 0.0, lodgeDiscount = 0.0;
    int promo = 0, r = 0;

    // ===== COURSE SELECTION =====
    if (course == 1) {
        courseName = "Photography";
        days = 3;
        regFee = 10000;
    } else if (course == 2) {
        courseName = "Painting";
        days = 5;
        regFee = 8000;
    } else if (course == 3) {
        courseName = "Fish Farming";
        days = 7;
        regFee = 15000;
    } else if (course == 4) {
        courseName = "Baking";
        days = 5;
        regFee = 13000;
    } else if (course == 5) {
        courseName = "Public Speaking";
        days = 2;
        regFee = 5000;
    } else {
        cout << "Invalid course selection!" << endl;
        return 0;
    }

    // ===== LOCATION SELECTION =====
    if (loc == 1) {
        locName = "Camp House A";
        lodgingPerDay = 10000;
    } else if (loc == 2) {
        locName = "Camp House B";
        lodgingPerDay = 2500;
    } else if (loc == 3) {
        locName = "Camp House C";
        lodgingPerDay = 5000;
    } else if (loc == 4) {
        locName = "Camp House D";
        lodgingPerDay = 13000;
    } else if (loc == 5) {
        locName = "Camp House E";
        lodgingPerDay = 5000;
    } else {
        cout << "Invalid location selection!" << endl;
        return 0;
    }

    // ===== COST CALCULATIONS =====
    lodgingCost = lodgingPerDay * days;
    total = regFee + lodgingCost;

    // ===== DISCOUNTS =====

    // (1) PAU student + Camp House A or B → 5% discount on lodging
    if (isPau && (loc == 1 || loc == 2)) {
        lodgeDiscount = 0.05 * lodgingCost;
        lodgingCost -= lodgeDiscount;
    }

    // (2) Days > 5 OR regFee > 12000 → 3% discount on registration
    if (days > 5 || regFee > 12000) {
        regDiscount = 0.03 * regFee;
        regFee -= regDiscount;
    }

    // ===== RANDOM PROMO =====
    srand(time(0));
    r = rand() % 100 + 1;   // random number between 1 and 100
    if (r == 7 || r == 77)
        promo = 500;

    total = regFee + lodgingCost - promo;

    // ===== OUTPUT SECTION =====
    cout << "\n===============================" << endl;
    cout << "Name: " << name
         << "   (PAU student: " << (isPau ? "Yes" : "No") << ")" << endl;
    cout << "Course: " << courseName << "   Days: " << days << endl;
    cout << "Registration: ₦" << regFee
         << "  (discount: ₦" << regDiscount << ")" << endl;
    cout << "Lodging: ₦" << lodgingPerDay << " × " << days
         << " = ₦" << (lodgingPerDay * days)
         << "  (discount: ₦" << lodgeDiscount << ")" << endl;
    cout << "Random draw: " << r
         << "  Promo applied: ₦" << promo << endl;
    cout << "TOTAL: ₦" << total << endl;
    cout << "===============================" << endl;

    return 0;
}

