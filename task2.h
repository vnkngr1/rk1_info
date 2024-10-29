//
// Created by иван гаршин on 10/27/24.
//

#ifndef TASK2_H
#define TASK2_H

#include "main_transformations.h"
#include <string>

void task2() {

    std::string num1 = "73";
    std::string num2 = "45";

    int sum = from_n_to_ten(num1, 8) + from_n_to_ten(num2, 8);

    std::cout << "\nЗадача 2\nСумма в десятчиной системе - " << sum << std::endl;

}

#endif //TASK2_H
