//
// Created by иван гаршин on 10/27/24.
//

#ifndef TASK1_H
#define TASK1_H

#include <iostream>
#include <ostream>
#include <string>
#include "main_transformations.h"

void task1() {

    std::string num8 = "547";
    std::string num16 = from_m_to_n(num8, 8, 16);
    std::string num2 = from_m_to_n(num16, 16, 2);

    std::cout << "Задание 1\nЧисло в шестнадцатеричной системе - " << num16 <<  "\nЧисло в двочиной системе - " << num2 << std::endl;

}

#endif //TASK1_H
