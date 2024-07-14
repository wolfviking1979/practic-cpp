//Чаевые, налог и общая сумма. Напишите программу, которая вычисляет общую
//стоимость заказанных блюд в ресторане. Программа должна попросить пользователя
//ввести стоимость еды, вычислить размер 18-процентных чаевых и 7-процентного
//налога с продаж и показать все стоимости и итоговую сумму.

#include <iostream>

int main() {
    using namespace std;

    double sale;
    double TIP = 0.18;
    double TAX = 0.07;
    double total_taxes;

    cout << "Введите стоимость еды: ";
    cin >> sale;
    total_taxes = TIP * sale + TAX * sale;
    cout << "Чаевые: " << sale * TIP << endl;
    cout << "Налог: " << sale * TAX << endl;
    cout << "Итоговая стоимость: " << sale + total_taxes << endl;

    return 0;
}