#include <iostream>

using namespace std;
void message1();    // �������� �������.
void message2();

int main() {
    setlocale(LC_ALL, "");  // ��������� ������.

    message1(); // ����� �������.
    message1();
    message2();
    message2();
    return 0;
}

void message1() {
    cout << "��� ������ ����" << endl;
}

void message2() {
    cout << "�������� ��� ��� ������" << endl;
}
