//
// Created by иван гаршин on 10/27/24.
//

#ifndef TASK5_H
#define TASK5_H


#include <iostream>
#include <ostream>
#include <signal.h>

int alg2 (int a, int b, int c) {
    return (a and c) or (b and (not a or c));
}

int alg1 (int a, int b, int c) {
    return (a or b) and (not a or c);
}

void task5() {

    //Упрощение
    //Изначально - (A or B) and (not A or C)
    // 1) Раскроем скобки, используя закон распределения:
    // (A and not A) or (A and C) or (B and not A) or (B and C)
    // 2) Первый член выражения равен нулю и исключается:
    // 0 or (A and C) or (B and not A) or (B and C)
    // 3) Упрощаем оставшееся выражение:
    // (A and C) or (B and not A) or (B and C)
    // 4) Применим дистрибутивность для членов с В:
    // (A and C) or B and (not A or C)
    // 5) Теперь упростим выражение внутри скобок (not A or C):
    // (A and C) or (B and (not A or C))

    //Проверяем верность выражений

    std::cout << "\nЗадание 5" <<std::endl;

    for (int a = 0; a < 2; a++) {
        for (int b = 0; b < 2; b++) {
            for (int c = 0; c < 2; c++) {
                if (alg1(a, b, c) != alg2(a, b, c)) {
                    std::cout << "Ошибка" << std::endl;
                }
            }
        }
    }

    std::cout << "Задание 5 выполнено" << std::endl;

}

#endif //TASK5_H
