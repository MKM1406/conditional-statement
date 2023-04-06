#include <iostream>
using namespace std;

int main() {
    double height_cm;
    cout << "Enter your height in centimeters: ";
    cin >> height_cm;

    if (height_cm < 0) {
        cout << "Invalid input: height must be non-negative." << endl;
    } else if (height_cm < 120) {
        cout << "You are short." << endl;
    } else if (height_cm < 150) {
        cout << "You are of average height." << endl;
    } else if (height_cm < 180) {
        cout << "You are tall." << endl;
    } else {
        cout << "You are very tall." << endl;
    }

    return 0;
}

