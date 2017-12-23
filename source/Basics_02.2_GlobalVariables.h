﻿// Рассматриваемые темы:
// Глобальные переменные

#pragma once

#include <iostream>
using namespace std;

namespace GlobalVariables
{
    int tmp = 5; // tmp - глобальная переменная

    // Глобальная переменная видна и доступна для использования
    // в любом месте модуля программы.
    // Если вы не знакомы с понятием модуля, то считайте, что это
    // файл, внутри которого вы пишете код. Например, main.cpp

    void Func()
    {
        tmp = 0;
        // Не смотря на то, что в этой функции не было объявлено переменной tmp,
        // но есть глобальная переменная tmp, которая и задействовалась в строчке выше
    }

    void main()
    {
        tmp = tmp + 100;
        Func();
        cout << tmp << endl; // Выведется 0
    }
}