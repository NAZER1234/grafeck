#include <iostream>
using namespace std;

int ReadIntNumberInRange(int From, int To) {
    int Number;
    cout << "Enter the number between " << From << " and " << To << endl;
    cin >> Number;
    while (Number < From || Number > To) {
        cout << "The number is wrong" << endl;
        cout << "Please enter a number between " << From << " and " << To << endl;
        cin >> Number;
    }
    return Number;
}

int main() {
    cout << "The number: " << ReadIntNumberInRange(18, 45) << endl;
    return 0;
}
