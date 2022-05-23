#include <iostream>
using namespace std;
int main() {
    system("chcp 65001");
    float a, b;
    char c;
    cout << "Введите первое число:\n" << endl;
    cin >> a;
    cout << "Введите второе число:\n" << endl;
    cin >> b;
    cout << "Введите символ действия:\n" << endl;
    cin >> c;

    try {
        if (c == '/' and b == 0) {
            throw 1;
        }
        if (cin.fail()) {
            throw 2;
        }
        switch (c) {
        case '+':
            cout << a + b << endl;
            break;
        case '-':
            cout << a - b << endl;
            break;
        case '*':
            cout << a * b << endl;
            break;
        case '/':
            cout << a / b << endl;
            break;
        default:
            cout << "Невозможно выполнить" << endl;
            break;
        }
    }
    catch (int e) {
        if (e == 1)
            cout << "don’t divide by zero" << endl;
        if (e == 2)
            cout << "enter a number, not a symbol" << endl;
    }
    return 0;
}