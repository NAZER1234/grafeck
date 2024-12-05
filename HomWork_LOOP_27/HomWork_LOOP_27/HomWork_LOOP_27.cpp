#include<iostream>
using namespace std;
void NUMber(int& NUM) {
	cout << "********************************************\n";
		cout << "**********Welcom MY applction**********\n";
		cout << "**********************************************\n";
			cout << "Enter the namber Please: " << endl<<endl;
			cin >> NUM;}
string NUmber2(int NUM) {
	for (int i = NUM; i >=0; i--)
	{
		cout << "The Namber is: " << i << endl;


	}
	return "***************************************\n";
	return "************************************\n";
}
int main() {
	int NUM;
	NUMber(NUM);
	cout << NUmber2(NUM) << endl;

	return 0;
}