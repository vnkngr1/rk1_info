//
// Created by иван гаршин on 10/27/24.
//

#ifndef TASK7_H
#define TASK7_H

#include <iostream>
#include <ostream>

void task7() {

    std::cout << "\nЗадание 7:" << std::endl;

    std::cout << "1) Определим минтермы, которые принимают значение 1 для заданных чисел:" << std::endl;
    std::cout << "Число 1 в двоичной системе: 001 (A'B'C)" << std::endl;
    std::cout << "Число 2 в двоичной системе: 010 (A'BC')" << std::endl;
    std::cout << "Число 5 в двоичной системе: 101 (AB'C)" << std::endl;
    std::cout << "Число 7 в двоичной системе: 111 (ABC)" << std::endl;

    std::cout << "\n2) Запишем СДНФ как сумму минтермов:" << std::endl;
    std::cout << "F(A, B, C) = A'B'C + A'BC' + AB'C + ABC" << std::endl;
}

#endif //TASK7_H
