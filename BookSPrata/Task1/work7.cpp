/*�������� ���������, ������� ������ ������ �� ���� �������� ����� � �����.
 * ������� main() ������ �������� ��� ��� �������� �������, ������� ��� void,
 * ������� ��������� ��� ��� �������� HH:mm.
 * */

#include <iostream>

using namespace std;
void time(int hour, int minute);

int main() {
    setlocale(LC_ALL, "");
    int hour;
    int minute;//�������� ��������
    cout << "������� ����:" << endl;
    cin >> hour;
    cout << "������� ������:" << endl;
    cin >> minute;
    time(hour, minute);
    return 0;
}

void time(int hour, int minute) {
    cout << "�����: " << hour << ":" << minute << endl;
}