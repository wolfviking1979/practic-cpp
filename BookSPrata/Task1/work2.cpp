// Напишите программу, которая выдает запрос на ввод расстояния в
// фарлонгах и преобразует его в ярды.

#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");

    const int FARLONG = 220;
    int distance;
    cout << "Введите расстояние в фарлонгах:\n";
    cin >> distance;
    cout << "Расстояние в ярдах: " << distance * FARLONG << endl;

    return 0;
}