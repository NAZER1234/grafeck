#include <iostream>
using namespace std;

void ReadInfoWhileLoop(int from, int to) {
    int NUM, attemptsLeft = 3;
    cout << "Enter the number between " << from << " and " << to << ": " << endl;
    cin >> NUM;

    while (NUM < from || NUM > to) {
        if (attemptsLeft > 0) {
            attemptsLeft--;
            cout << "The number is wrong. Attempts left: " << attemptsLeft << endl;
            if (attemptsLeft > 0) {
                cout << "Enter the number again: " << endl;
                cin >> NUM;
            }
        }
        if (attemptsLeft == 0) {
            cout << "No attempts left. Exiting." << endl;
            break;
        }
    }

    if (NUM >= from && NUM <= to) {
        cout << "The number " << NUM << " is within the range." << endl;
    }
}
void ReadNamberInfoDoWail(int From,int To) {
    int NAMBER;
    do
    {
        cout << "Please enter the Namber:  " << From << "  and  " << To << endl;
        cin >> NAMBER;
    } while (NAMBER<From||NAMBER>To);
    cout << "The namber : " << NAMBER << endl;
}
int main() {
    int from = 1, to = 10;
   
    ReadNamberInfoDoWail(from, to);
    return 0;
}
