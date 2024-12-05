#include<iostream>
using namespace std;
int main() {
	cout << "\nHallo My applction My Frainds \n";
		cout << "---------------------------------------------\n";
		float NUM;
		cout << "Enter the Namber Postive: ";
			cin >> NUM;
			while (NUM<=0)
			{
				cout << "The Namber The Worng: " << endl;
				cout << "Enter The Namber again Please: " << endl;
				cin >> NUM;

			}
			cout << "The Namber is" << NUM << endl;
			
	
	
	
	
	
	
	
	
	return 0;
}