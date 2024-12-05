#include <iostream>
using namespace std;
int main() {
    cout << "Welcome to My Application: ATM PIN Code Verification\n";
    int FaildCounter = 3, PIN = 1234, PIN_Users;

    while (FaildCounter > 0) {
        cout << "Enter the PIN please, you have " << FaildCounter << " attempts left: " << endl;
        cin >> PIN_Users;

        if (PIN == PIN_Users)
        {
            cout << "Your Blance is :" << "7500" << "$" << endl;
            break;
        }
        else
        {
            FaildCounter--;
            if (FaildCounter>0)
            {
                cout << "Incorrect PIN. Try again.\n";}
            else
            {
                cout << "You have entered the wrong PIN too many times. Account locked.\n";
            }

        }
    }

    return 0;
}
