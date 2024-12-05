#include <iostream> // ����� ������� ��������

using namespace std;

int main() {
    // ��� ��� �������� char �� ����� ���� ��� ���� ������ ����� ������ ���� char
    cout << "��� char:" << endl;
    cout << "�� " << static_cast<int>(-(1 << (sizeof(char) * 8 - 1))) << " ��� "
        << static_cast<int>((1 << (sizeof(char) * 8 - 1)) - 1) << endl;
    cout << "---------------------------------" << endl;

    // ���� ����� ����� short ����� ���� ������ �������
    cout << "��� short:" << endl;
    cout << "�� " << -(1 << (sizeof(short) * 8 - 1)) << " ��� "
        << (1 << (sizeof(short) * 8 - 1)) - 1 << endl;
    cout << "---------------------------------" << endl;

    // ��� ����� ����� int� ���� �� ����� ������� ������� �������
    cout << "��� int:" << endl;
    cout << "�� " << -(1 << (sizeof(int) * 8 - 1)) << " ��� "
        << (1 << (sizeof(int) * 8 - 1)) - 1 << endl;
    cout << "---------------------------------" << endl;

    // ����� ����� ��� long� ����� ���� ���� ��� �� int
    cout << "��� long:" << endl;
    cout << "�� " << -(1L << (sizeof(long) * 8 - 1)) << " ��� "
        << (1L << (sizeof(long) * 8 - 1)) - 1 << endl;
    cout << "---------------------------------" << endl;

    // ��� long long� ���� ����� ��� ���� �������
    cout << "��� long long:" << endl;
    cout << "�� " << -(1LL << (sizeof(long long) * 8 - 1)) << " ��� "
        << (1LL << (sizeof(long long) * 8 - 1)) - 1 << endl;
    cout << "---------------------------------" << endl;

    // ��� ��� unsigned int� ���� ����� ����� ��� �� ��� ������
    cout << "��� unsigned int:" << endl;
    cout << "�� 0 ��� " << ((1UL << (sizeof(unsigned int) * 8)) - 1) << endl;
    cout << "---------------------------------" << endl;

    // ������ �� ����� ������
    cout << "\nGoodbye!" << endl;

    // ASCII ������ ������ ����ϡ ��� ��� ����� ���   
    cout << R"(
 _   _       _       
| \ | | __ | | ___ 
|  \| |/ _` | __/ _ \
| |\  | (_| | ||  __/
|| \|\,|\\|
    )" << endl;

    return 0; // ����� �������̡ ����!
}