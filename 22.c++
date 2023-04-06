#include <iostream>
#include <string>
using namespace std;
int main() {
    int customer_id, unit_consumed;
    string customer_name;
    double total_amount;
    cout << "Enter customer ID: ";
    cin >> customer_id;
    cout << "Enter customer name: ";
    cin >> customer_name;
    cout << "Enter unit consumed: ";
    cin >> unit_consumed;
    if (unit_consumed <= 199)
        total_amount = unit_consumed * 1.20;
    else if (unit_consumed <=400)
        total_amount = 50 + (unit_consumed - 199) * 1.50;
    else if (unit_consumed <= 600)
        total_amount = 200 + (unit_consumed - 400) * 1.80;
    else
        total_amount = 500 + (unit_consumed - 600) * 2.00;
    cout << "Customer ID: " << customer_id << endl;
    cout << "Customer name: " << customer_name << endl;
    cout << "Unit consumed: " << unit_consumed << endl;
    cout << "Total amount to pay: $" << total_amount << endl;

    return 0;
}
