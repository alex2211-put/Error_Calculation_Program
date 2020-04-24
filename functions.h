//
// Created by alik on 15.04.2020.
//

#ifndef POGRESHN_FUNCTIONS_H
#define POGRESHN_FUNCTIONS_H

#include "coutFunctions.h"
#include <cmath>
#include <vector>

void y_kx(int N)
{
    double sumXY = 0, sumXX = 0, sumYY = 0;
    std::cout << "Вводите ваши координаты через пробел следующим образом:\n"
              << "x y  <-----Сначала х, потом через пробел y. Потом через Enter или пробел следующие координаты.\n";
    for (int i = 1; i <= N; ++i)
    {
        double x, y;
        std::cin >> x >> y;
        sumXY += x * y;
        sumXX += pow(x, 2);
        sumYY += y * y;
    }

    double srznachXY = sumXY / N;
    double srznachXX = sumXX / N;
    double srznachYY = sumYY / N;
    double K = srznachXY / srznachXX;
    double oK = N == 1 ? 0 : sqrt((srznachXX * srznachYY - pow(srznachXY, 2)) / ((N - 1) * pow(srznachXX, 2)));
    double proxOK = oK * 100 / K;
    std::cout << "Итоговые значения искомых коэффициентов:\n"
              << "Коэффициент k = " << K << "." << std::endl
              << "Абсолютная погрешность коэффициента k равна " << oK << "." << std::endl
              << "Относительная погрешность коэффициента k равна " << proxOK << "%." << std::endl
              << "------------------------------------------------------------------" << std::endl;
    if (K == 1)
    {
        std::cout << "Итоговое уравнение прямой: y = x" << std::endl;
    } else if (K == -1)
    {
        std::cout << "Итоговое уравнение прямой: y = -x" << std::endl;
    } else if (K == 0)
    {
        std::cout << "Итоговое уравнение прямой: y = 0" << std::endl;
    } else
    {
        std::cout << "Итоговое уравнение прямой: y = " << K << "x" << std::endl;
    }
    std::cout << "------------------------------------------------------------------" << std::endl
              << "Если хотите закрыть программу, введите 0, если нет, то введите 1: \n";
}

void y_bx_a(int N)
{
    double sumXY = 0, sumXX = 0, sumYY = 0, sumX = 0, sumY = 0;
    std::cout << "Вводите ваши координаты через пробел следующим образом:\n"
              << "x y  <-----Сначала х, потом через пробел y. Потом через Enter или пробел следующие координаты.\n";
    for (int i = 1; i <= N; ++i)
    {
        double x, y;
        std::cin >> x >> y;
        sumXY += x * y;
        sumXX += pow(x, 2);
        sumYY += y * y;
        sumX += x;
        sumY += y;
    }
    double srznachXY = sumXY / N;
    double srznachXX = sumXX / N;
    double srznachYY = sumYY / N;
    double srznachX = sumX / N;
    double srznachY = sumY / N;
    double b = (srznachXY - srznachX * srznachY) / (srznachXX - pow(srznachX, 2));
    double a = srznachY - b * srznachX;
    double oB = srznachXX - pow(srznachX, 2) == 0 ? 0 :
                (sqrt((srznachYY - pow(srznachY, 2)) / (srznachXX - pow(srznachX, 2)) - b * b) / sqrt(N));
    double oA = oB * sqrt(srznachXX - pow(srznachX, 2));
    double proxOB = std::abs(oB) * 100 / std::abs(b);
    double proxOA = a != 0 ? oA * 100 / std::abs(a) : 0;
    std::cout << "Итоговые значения искомых коэффициентов:\n"
              << "Коэффициент b = " << b << "." << std::endl
              << "Коэффициент a = " << a << "." << std::endl
              << "Абсолютная погрешность коэффициента b равна " << oB << "." << std::endl
              << "Относительная погрешность коэффициента b равна " << proxOB << "%." << std::endl
              << "Абсолютная погрешность коэффициента a равна " << oA << "." << std::endl
              << "Относительная погрешность коэффициента a равна " << proxOA << "%." << std::endl
              << "------------------------------------------------------------------" << std::endl;
    coutFunctions(a, b);

}

#endif //POGRESHN_FUNCTIONS_H
