#include <iostream>
#include "interfeis.h"
#include "MNK.h"



int main()
{
    while (isWork)
    {
        setlocale(LC_ALL, "Russian");
        std::cout
                << "Введите то, с чем будем работать.\n Выберите один из следующих вариантов (просто введите цифру): \n"
                << "1) MNK - определить погрешность коэффициентов прямой \n"
                << "2) Случайная погрешность измерений \n";
        int answer0 = cinFromPeople();
        switch (answer0)
        {
            case 1:
            {
                MNK();
            }
            case 2:
            {
                std::cout << "В данный момент программа дорабатывается. Извините за причинённые неудобства.\n"
                << "В скором времени данный раздел будет дополнен";
                break;
            }
            default:
                std::cout << "Something go wrong...\n";
        }
    }

    return 0;
}
