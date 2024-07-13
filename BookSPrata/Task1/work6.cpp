/* Напишите программу, в которой функция main() вызывает определяемую
 * пользователем функцию, принимающая в качестве аргумента расстояние
 * в световых годах и возвращающую расстояние в астрономических единицах.
 * */
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");
    const int LIGHT_YEAR = 63240;
    double distance;
    cout << "Введите расстояние в световых годах:\n";
    cin >> distance;
    distance *= LIGHT_YEAR;

    cout << "Расстояние в астрономических единицах: " << distance << endl;

    return 0;
}