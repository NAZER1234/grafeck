#include<iostream>
using namespace std;
struct Strinfo
{
	string Fairst_NUME;
	string Last_NUME;
	int Age;
	float Namber;
	float code_zip;

};
void ReadInfo(Strinfo &Info) {
	cout << "Enter The Fairst Name: \n";
	cin >> Info.Fairst_NUME;
	cout << "Enter The second Name: \n";
	cin >> Info.Last_NUME;
	cout << "Enter the Namber Phone: \n";
	cin >> Info.Namber;
	cout << "Enter the zip code: \n";
	cin >> Info.code_zip;


}
void PrintInfo(Strinfo Info) {
	cout << "**********************************\n";
	cout << "The Fairst Name: " << Info.Fairst_NUME << endl;
	cout << "The Last Name: " << Info.Last_NUME << endl;
	cout << "The Namber Phone: " << Info.Namber << endl;
	cout << "The Zipe code: " << Info.code_zip << endl;
	cout << "****************************************\n";
}
void ReadPersonInfo(Strinfo Info[100],int &Lengthe) {
	cout << "Enter the Namber  Taket  Plesae: "<<endl;
	cin >> Lengthe;
	for (int i = 0; i <= Lengthe-1; i++)
	{
		cout << "The Taket Namber namber: " << "[" << i + 1 << "]" << endl; 
		ReadInfo(Info[i]);

	}



}
void PrintPersonInfo(Strinfo Info[100], int Lengthe) {
	for (int i = 0; i <=Lengthe-1; i++)
	{
		PrintInfo(Info[i]);

	}
}
int main() {
	Strinfo Info[100];
	int Lengthe;
	ReadPersonInfo(Info, Lengthe);
	PrintPersonInfo(Info, Lengthe);


	return 0;
}