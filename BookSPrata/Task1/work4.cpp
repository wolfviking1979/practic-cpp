// Ќапишите программу, котора€ предлагает пользователю ввести свой возраст,
// а затем программа должна отобразить возраст в мес€цах.

#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");
    cout << "¬ведите возраст:\n";
    int age;
    cin >> age;
    cout << "¬аш возраст в мес€цах: " << age * 12 << '.' << endl;

    return 0;
}