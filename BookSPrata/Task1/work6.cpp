/* �������� ���������, � ������� ������� main() �������� ������������
 * ������������� �������, ����������� � �������� ��������� ����������
 * � �������� ����� � ������������ ���������� � ��������������� ��������.
 * */
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");
    const int LIGHT_YEAR = 63240;
    double distance;
    cout << "������� ���������� � �������� �����:\n";
    cin >> distance;
    distance *= LIGHT_YEAR;

    cout << "���������� � ��������������� ��������: " << distance << endl;

    return 0;
}