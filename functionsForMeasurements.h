//
// Created by alik on 23.04.2020.
//

#ifndef POGRESHN_FUNCTIONSFORMEASUREMENTS_H
#define POGRESHN_FUNCTIONSFORMEASUREMENTS_H

void functionForMeasurements()
{
    int N;
    std::cout << "Введите количество измерений:\n"
              << "N = ";
    std::cin >> N;
    std::cout << "Введите Ваши данные через пробел или каждое с новой строки:\n";
    std::vector<double> x(N);
    double sum = 0;
    for (int i = 0; i < N; ++i)
    {
        double value;
        std::cin >> value;
        x[i] = value;
        sum += value;
    }
    double srznachX = sum / N;
    double sumSquares = 0;
    for (const double &i : x)
        sumSquares += pow(i - srznachX, 2);
    double bOtd = N > 1 ? sqrt((1.f / (float(N) - 1.f)) * sumSquares) : 0;
    double bSr = bOtd / sqrt(N);
    std::cout << "Итоговое среднее значение искомой величины: " << srznachX << std::endl
              << "Абсолютная погрешность отдельного измерения составила: " << bOtd << std::endl
              << "Относительная погрешность среднего измерения составила: " << bSr * 100 / srznachX << "%\n"
              << "Полученную величину можно записать так: \n"
              << "-------------------------------------------------------------------\n"
              << "X = " << srznachX << " +- " << bSr << std::endl
              << "------------------------------------------------------------------" << std::endl
              << "Если хотите закрыть программу, введите 0, если нет, то введите 1: " << std::endl;
    std::cin >> isWork;
}

#endif //POGRESHN_FUNCTIONSFORMEASUREMENTS_H
