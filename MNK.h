//
// Created by alik on 15.04.2020.
//

#ifndef POGRESHN_MNK_H
#define POGRESHN_MNK_H
#include "functions.h"
bool isWork = true;

void MNK(){
    std::cout << "Выберите, какая прямая должна получиться и введите выбранную цифру:\n"
              << "1) y = ax + b\n"
              << "2) y = kx\n";
    int answer1 = cinFromPeople();
    int N;
    std::cout << "Введите количество точек, по которым строим прямую:\n"
              << "N = ";
    std::cin >> N;
    switch (answer1)
    {
        case 1:
        {
            y_ax_b(N);
            std::cin >> isWork;
            break;
        }
        case 2:
        {
            y_kx(N);
            std::cin >> isWork;
            break;
        }
        default:
            std::cout << "Something go wrong...\n";
    }
}
#endif //POGRESHN_MNK_H
