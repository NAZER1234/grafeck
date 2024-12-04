#include<iostream>
using namespace std;
void NUMBer(int& N) {
	cout << "***************************************************\n";
	cout << "**********Welcom My applction My Gaese***********\n";
	cout << "******************************************************\n";
	cout << "Enter The Namber Please: ";
	cin >> N;
}
string NUMBER(int N) {
	long float B=1;
	for (int i =N ; i >=1; i--)
	
	{
		B*= i;
		cout << i<<"|"<<endl;

	}
	cout << "=";
	cout << B<<endl;
	return "*****************************************************************\n";
}
int main() {
	int N;
	NUMBer(N);
	cout << NUMBER(N) << endl;

	
	
	
	
	
	return 0;
}