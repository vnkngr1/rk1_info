//
// Created by иван гаршин on 10/27/24.
//

#ifndef TASK6_H
#define TASK6_H
#include <iostream>

int alg(int a, int b, int c) {
    return a or (not b and c);
}

void task6() {

    std::cout << "\nЗадание 6:" << std::endl;
    std::cout << "1) Строим таблицу истинности и ищем нули:" << std::endl;

    std::cout << "A B C F" << std::endl;
    for (int a = 0; a < 2; a++) {
        for (int b = 0; b < 2; b++) {
            for (int c = 0; c < 2; c++) {
                std::cout << a << " " << b  << " " << c << " " << alg(a, b, c) << std::endl;
            }
        }
    }

    std::cout << "\n2) Построить дизъюнкты, обращающие функцию в 0, и соединить их через конъюнкции" << std::endl;
    std::cout << "F = (A + B + C) * (A + not B + C) * (A + not B + not C)" << std::endl;
}

#endif //TASK6_H
