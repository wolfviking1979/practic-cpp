// �������� ���������, ������� ���������� ������������ ������ ���� �������,
// � ����� ��������� ������ ���������� ������� � �������.

#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");
    cout << "������� �������:\n";
    int age;
    cin >> age;
    cout << "��� ������� � �������: " << age * 12 << '.' << endl;

    return 0;
}