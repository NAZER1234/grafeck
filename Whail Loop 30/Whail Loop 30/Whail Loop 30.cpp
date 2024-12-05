#include <iostream>
using namespace std;

int main() {
    cout << "Welcome to my application, Guest: " << endl;
    cout << "---------------------------------------\n";

    int NUM, i = 1, sum = 1;
    cout << "Enter the number please: " << endl;
    cin >> NUM;

    while (NUM >= i) {
        cout << NUM;
        if (NUM > 1) {
            cout << " * ";
        }
        sum *= NUM;
        NUM--;
    }
    cout << "\nSum of numbers is: " << sum << endl;

    return 0;
}
