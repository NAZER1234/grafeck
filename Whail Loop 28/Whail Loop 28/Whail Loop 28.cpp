#include<iostream>
using namespace std;
int main() {
	cout << "Welcom My applction \n" << endl;
	cout << "-------------------------------------------\n";
	int NUM, i=1,sum=0;
	cout << "Enter The Namber please: " << endl;
	cin >> NUM;
	while (NUM>=i)
	{
		cout << "The Namber: " << i << endl;
		sum += i;
		i += 2;

	

	}
	
	cout << "The sum Namber is: " << sum << endl;
	
	return 0;
}