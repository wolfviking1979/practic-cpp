// �������� ���������, ������� ������ ������ �� ���� ���������� �
// ��������� � ����������� ��� � ����.

#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");

    const int FARLONG = 220;
    int distance;
    cout << "������� ���������� � ���������:\n";
    cin >> distance;
    cout << "���������� � �����: " << distance * FARLONG << endl;

    return 0;
}