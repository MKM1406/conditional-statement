#include <iostream>
using namespace std;

int isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    
    for (int i = 2; i <= num/2; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    
    return true;
}

int main() {
    int limit;
    cout << "Enter the limit: ";
    cin >> limit;
    
    for (int i = 3; i <= limit; i += 2) {
        if (isPrime(i) && isPrime(i+2)) {
            cout << "(" << i << ", " << i+2 << ")" << endl;
        }
    }
    
    return 0;
}
