#include <iostream>

using namespace std;
void message1();    // Прототип функции.
void message2();

int main() {
    setlocale(LC_ALL, "");  // Установка локали.

    message1(); // Вызов функции.
    message1();
    message2();
    message2();
    return 0;
}

void message1() {
    cout << "Три слепых мыши" << endl;
}

void message2() {
    cout << "Посмотри как они бегают" << endl;
}
