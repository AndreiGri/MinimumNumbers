﻿#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    // Изменяем кодировку консоли:
    system("chcp 1251 > nul");

    int a = 0;
    int b = 0;
    int maximum;
    int minimum;

    cout << "Введите число a: ";
    cin >> a;
    cout << "Введите число b: ";
    cin >> b;

    maximum = max(a, b);
    minimum = min(a, b);
    cout << "Число " << maximum << " больше числа " << minimum << endl;
    /*if (a > b) {
        cout << "Число a = " << a << " больше числа b = " << b << endl;
    }
    else {
        if (a < b) {
            cout << "Число a = " << a << " меньше числа b = " << b << endl;
        }
        else {
            cout << "Числа равны!" << endl;
        }
    }*/

    // Задержка окна терминала:
    system("pause > nul");
    return 0;
}