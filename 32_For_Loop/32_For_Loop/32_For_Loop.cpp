#include<iostream >
using namespace std;
void nambers(int& NUM, int& P) {
	cout << "*************************\n";
	cout << "*****Hallo Myapplctin****\n";
	cout << "******************************\n";
	cout << "Enter the Num: \n";
	cin >> NUM;
	cout << "Enter the p: " << endl;
	cin >> P;

}
string namber(int NUM, int p) {
	int B = 1;
	for (int i = 1; i <= p; i++)
	{
		B *= NUM;
		cout << "The Pow is: " << B << endl;

	}
	cout <<"result: " << B << endl;

	return "****************************************\n";
}
int main() {
	int NUM, P;
	nambers(NUM, P);
	cout<< namber(NUM, P);
	
	
	
	
	
	
	
	
	return 0;
}