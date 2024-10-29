//
// Created by иван гаршин on 10/27/24.
//

#ifndef TASK4_H
#define TASK4_H
#include <iostream>
#include <ostream>

int alg(int a, int b, int c, int d) {
    return (a and (not b)) or (c and (not d));
}

void task4() {

    std::cout << "\nЗадание 4\nA B C D F" << std::endl;

    for (int a = 0; a < 2; a++) {
        for (int b = 0; b < 2; b++) {
            for (int c = 0; c < 2; c++) {
                for (int d = 0; d < 2; d++) {
                    std::cout << a << " " << b  << " " << c << " " << d  << " " << alg(a, b, c, d) << std::endl;
                }
            }
        }
    }

}

#endif //TASK4_H
