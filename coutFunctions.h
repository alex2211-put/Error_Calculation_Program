//
// Created by alik on 15.04.2020.
//

#ifndef POGRESHN_COUTFUNCTIONS_H
#define POGRESHN_COUTFUNCTIONS_H

void coutFunctions(double a, double b)
{
    if (b == 1)
    {
        if (a < 0)
            std::cout << "Итоговое уравнение прямой: y = " << "x - " << std::abs(a) << std::endl
                      << "------------------------------------------------------------------" << std::endl
                      << "Если хотите закрыть программу, введите 0, если нет, то введите 1: " << std::endl;
        else if (a > 0)
            std::cout << "Итоговое уравнение прямой: y = " << "x + " << std::abs(a) << std::endl
                      << "------------------------------------------------------------------" << std::endl
                      << "Если хотите закрыть программу, введите 0, если нет, то введите 1: " << std::endl;
        else if (a == 0)
            std::cout << "Итоговое уравнение прямой: y = " << "x" << std::endl
                      << "------------------------------------------------------------------" << std::endl
                      << "Если хотите закрыть программу, введите 0, если нет, то введите 1: " << std::endl;
    } else if (b == -1)
    {
        if (a < 0)
            std::cout << "Итоговое уравнение прямой: y = " << "-x - " << std::abs(a) << std::endl
                      << "------------------------------------------------------------------" << std::endl
                      << "Если хотите закрыть программу, введите 0, если нет, то введите 1: " << std::endl;
        else if (a > 0)
            std::cout << "Итоговое уравнение прямой: y = " << "-x + " << std::abs(a) << std::endl
                      << "------------------------------------------------------------------" << std::endl
                      << "Если хотите закрыть программу, введите 0, если нет, то введите 1: " << std::endl;
        else if (a == 0)
            std::cout << "Итоговое уравнение прямой: y = " << "-x" << std::endl
                      << "------------------------------------------------------------------" << std::endl
                      << "Если хотите закрыть программу, введите 0, если нет, то введите 1: " << std::endl;
    } else if (b == 0)
    {
        if (a < 0)
            std::cout << "Итоговое уравнение прямой: y = " << "-" << std::abs(a) << std::endl
                      << "------------------------------------------------------------------" << std::endl
                      << "Если хотите закрыть программу, введите 0, если нет, то введите 1: " << std::endl;
        else if (a > 0)
            std::cout << "Итоговое уравнение прямой: y = " << std::abs(a) << std::endl
                      << "------------------------------------------------------------------" << std::endl
                      << "Если хотите закрыть программу, введите 0, если нет, то введите 1: " << std::endl;
        else if (a == 0)
            std::cout << "Итоговое уравнение прямой: y = 0" << std::endl
                      << "------------------------------------------------------------------" << std::endl
                      << "Если хотите закрыть программу, введите 0, если нет, то введите 1: " << std::endl;
    } else
    {
        if (a < 0)
            std::cout << "Итоговое уравнение прямой: y = " << b << "x - " << std::abs(a) << std::endl
                      << "------------------------------------------------------------------" << std::endl
                      << "Если хотите закрыть программу, введите 0, если нет, то введите 1: " << std::endl;
        else if (a > 0)
            std::cout << "Итоговое уравнение прямой: y = " << b << "x + " << std::abs(a) << std::endl
                      << "------------------------------------------------------------------" << std::endl
                      << "Если хотите закрыть программу, введите 0, если нет, то введите 1: " << std::endl;
        else if (a == 0)
            std::cout << "Итоговое уравнение прямой: y = " << b << "x" << std::endl
                      << "------------------------------------------------------------------" << std::endl
                      << "Если хотите закрыть программу, введите 0, если нет, то введите 1: " << std::endl;
    }
}

#endif //POGRESHN_COUTFUNCTIONS_H