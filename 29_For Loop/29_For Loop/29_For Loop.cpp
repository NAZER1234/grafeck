#include<iostream>
using namespace std;
void NUMBer(int& NUM) {
	cout << "*************************************************\n";
		cout << "********Welcom my applction**********\n";
		cout << "*******************************************\n";
		cout << "Enter the Namber please: \n";
		cin >> NUM;
}
string NUMBer0(int NUM) {
	for (int i = 0; i <=NUM; i+=2)
	{
		cout << "The namber is: " << i << endl;


	}

	return "********************************************************\n";

}
int main() {
	int NUM;
	NUMBer(NUM);
	NUMBer0(NUM);
	return 0;
}