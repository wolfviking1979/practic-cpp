/*Напишите программу, которая выдает запрос на ввод значений часов и минут.
 * Функция main() должна передать эти два значения функции, имеющей тип void,
 * которая отобразит эти два значения HH:mm.
 * */

#include <iostream>

using namespace std;
void time(int hour, int minute);

int main() {
    setlocale(LC_ALL, "");
    int hour;
    int minute;//Вводимые значения
    cout << "Введите часы:" << endl;
    cin >> hour;
    cout << "Введите минуты:" << endl;
    cin >> minute;
    time(hour, minute);
    return 0;
}

void time(int hour, int minute) {
    cout << "Время: " << hour << ":" << minute << endl;
}