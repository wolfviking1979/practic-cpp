//����� � ������.
//�������� ���������, ������� �������� ������������ ������ ��������
//�������.
//����� ��������� ������ ��������� ����������� � ������������ ������
//� ������. ��������, ��� ����������� ����� � ������ ���������� 5%, � ������������ �
//2.5%.
//��������� ������ �������� ����� �������, ����������� ����� � ������,
// ������������ ����� � ������, ����� ����� � ������ � ����� ����� ������� (�. �.
// ����� ������� � ������ ������ � ������).
//���������, ��� ������������� 2.5% ����������� �������� 0.025,
// ��� ������������� 5% � 0.05.

#include <iostream>

int main() {
    setlocale(LC_ALL, "RUS");
    int sales = 0;
    double federal_tax = 0.05;
    double state_tax = 0.025;
    double total_sales = 0;

    std::cout << "������� ����� �������: " << std::endl;
    std::cin >> sales;
    total_sales += sales + (federal_tax * sales) + (state_tax * sales);

    printf("����������� ����� � ������: $%.2f\n", federal_tax * sales);
    printf("������������ ����� � ������: $%.2f\n", state_tax * sales);
    printf("������ ��������� �������: $%.2f\n", total_sales); //����� ����� ������

    return 0;
}