#include <iostream>
using namespace std;

int main() {
    int Arry[10] = { 12, 23, 45, 67, 98, 0, 34, 23, 20, 45 };
    int searchFor = 20;

    for (int i = 0; i < 10; i++) {
        if (Arry[i] == searchFor) {
            cout <<endl<<searchFor<<endl<< "The Loop is Break at element index " << i << endl;
            break;
        }
    }

    return 0;
}
