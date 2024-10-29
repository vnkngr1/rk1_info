//
// Created by иван гаршин on 10/27/24.
//

#ifndef TASK3_H
#define TASK3_H

#include <string>
#include "main_transformations.h"

void task3() {

    std::string num1 = "3A";
    std::string num2 = "12";

    int diff10 = from_n_to_ten(num1, 16) - from_n_to_ten(num2, 16);
    std::string diff8 = from_ten_to_n(diff10, 8);

    std::cout << "\nЗадание 3\nРазность в восьмеричной системе - " << diff8 << std::endl;

}

#endif //TASK3_H
