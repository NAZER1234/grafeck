#include<iostream>
using namespace std;
void ReadprintNamber(int Arry[100],int &Lengthe) {

	cout << "Choses the nambre on1 to 100: ? " << endl;
	cin >> Lengthe;
	for (int i = 0; i <= Lengthe-1; i++)
	{
		cout << "Enter the Namber: [" << i+1 << "]" << endl;
		cin >> Arry[i];


	}



}
void PrintNamber(int Arry[100], int Lengthe) {
	for (int i = 0; i <= Lengthe-1; i++)
	{
		cout << "Namber {" << i + 1 << "]<<  " << Arry[i] << endl;

	}
}
int CalCulterNamber(int Arry[100], int Lengthe) {
	int sum = 0;
	for (int i = 0; i < Lengthe-1; i++)
	{
		sum += Arry[i];


	}
	return sum;
}
float AvreagNamber(int Arry[100], int Lengthe) {

	return CalCulterNamber(Arry, Lengthe) / Lengthe;






}
int main() {
	int Arry[100], Lengthe;
	ReadprintNamber(Arry, Lengthe);
	PrintNamber(Arry, Lengthe);
	cout << "****************************************************\n";
	cout << "Calculter: " << CalCulterNamber(Arry, Lengthe) << endl;
	cout << "The Avreag: " << AvreagNamber(Arry, Lengthe)<<endl;



	return 0;
}