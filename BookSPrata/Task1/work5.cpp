#include <iostream>

using namespace std;
double temp_F(int temp_C);         //temp_F = 1.8 * temp_C + 32;

int main() {
    setlocale(LC_ALL, "");
    int temp_C;
    double temp_f;
    cout << "Введите температуру в градусах С:\n";
    cin >> temp_C;
    temp_f = temp_F(temp_C);
    cout << "Температура в градусах F = " << temp_f << endl;

    return 0;
}

double temp_F(int temp_C) {
    double temp_F = 1.8 * temp_C + 32;
    return temp_F;
}