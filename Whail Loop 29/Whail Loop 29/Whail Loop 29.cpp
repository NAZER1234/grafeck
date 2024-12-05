#include<iostream>
using namespace std;
int main() {
	cout << "Welcom My applctionMy Frainds: " << endl;
	cout << "-------------------------------------------\n";
	int NUM, i = 2,sum=0;
	cout << "Enter The Namber: " << endl;
	cin >> NUM;
	while (NUM>=i)
	{
		cout << "The Namber is: " << i << endl;
		sum += i;
		i += 2;

	}
	cout << "The sum Namber: " << sum << endl;
	cout << "-----------------------------------------------\n";
	
	
	
	return 0;
}