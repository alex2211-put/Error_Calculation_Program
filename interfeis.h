//
// Created by alik on 15.04.2020.
//

#ifndef POGRESHN_INTERFEIS_H
#define POGRESHN_INTERFEIS_H
int cinFromPeople(){
    while (true)
    {
        char a;
        std::cin >> a;
        if (int(a) - 48 == 1 || int(a) - 48 == 2)
        {
            return int(a) - 48;
        } else
            std::cout << "Введите ПРАВИЛЬНОЕ число. Просто ЧИСЛО. НИЧЕГО кроме ЧИСЛА. Пожалуйста.\n";
    }
}

void helloFunction(){
    std::cout
            << "Введите то, с чем будем работать.\n"
            << "Выберите один из следующих вариантов (просто введите цифру): \n"
            << "1) MNK - определить погрешность коэффициентов прямой \n"
            << "2) Погрешность среднего арифметического результата измерения \n";
}
#endif //POGRESHN_INTERFEIS_H
