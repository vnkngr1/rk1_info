//
// Created by иван гаршин on 10/29/24.
//

#ifndef TASK8_H
#define TASK8_H

int alg_new(int A, int B, int C) {
    return B ^ C;
}

int alg_original(int A, int B, int C) {
    return (!A && B && !C) || (A && !B && C) || (A && B && !C) || (!A && !B && C);
}

void task8() {

    std::cout << "\nЗадание 8" << std::endl;

    for (int a = 0; a < 2; a++) {
        for (int b = 0; b < 2; b++) {
            for (int c = 0; c < 2; c++) {
                if (alg_new(a, b, c) != alg_original(a, b, c)) {
                    std::cout << "Ошибка" << std::endl;
                }
            }
        }
    }

    std::cout << "Задание выполнено без ошибок" << std::endl;

}

#endif //TASK8_H
