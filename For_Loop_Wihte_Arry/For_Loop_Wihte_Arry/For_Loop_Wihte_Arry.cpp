#include<iostream>
using namespace std;
void ReadArryNamber(int Arry[100], int& Lengthe) {
	cout << "Enter the namber?Any Wait 1 to 100:\n ";
	cin >> Lengthe;
	for (int i = 0; i <= Lengthe-1; i++)
	{
		cout << "Enter the namber: " << i + 1 << endl;
		cin >>Arry[i];

	}

}
void PrintArryNamber(int Arry[100], int Lengthe) {
	for (int i = 0; i <= Lengthe-1; i++)
	{
		cout << "The Namber: " << "[" << i + 1 << "]  " << Arry[i] << endl;

	}
}
int Calculeter(int Arry[100], int Lengthe) {
	int Sum=1;
	for (int i = 0; i <= Lengthe-1; i++)
	{
		Sum += Arry[i];

	}
	return Sum;



}
float AvreagArry(int Arry[100], int Lengthe) {
	return (float)Calculeter(Arry, Lengthe)/Lengthe;


}
int main() {
	int Arry[100],  Lengthe;
	cout << "**************************************\n";
	ReadArryNamber(Arry, Lengthe);
	PrintArryNamber(Arry, Lengthe);
	cout << "*****************************************\n";
	cout << "The sum is: " << Calculeter(Arry, Lengthe) << endl;
	cout << "The Lengthe is: " << AvreagArry(Arry, Lengthe) << endl;
	cout << "****************************************************";
	return 0;

}


