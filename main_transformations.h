//
// Created by иван гаршин on 10/27/24.
//

#ifndef MAIN_TRANSFORMATIONS_H
#define MAIN_TRANSFORMATIONS_H

#include <iostream>
#include <string>
#include <cmath>

int charToInt(char c) {
    if (c >= '0' && c <= '9') {
        return c - '0';
    } else if (c >= 'A' && c <= 'F') {
        return c - 'A' + 10;
    } else if (c >= 'a' && c <= 'f') {
        return c - 'a' + 10;
    }
    return -1; // недопустимый символ
}

int from_n_to_ten(const std::string& number, int base) {
    int decimalValue = 0;
    int power = 0;

    // Проходим строку числа с конца к началу
    for (int i = number.size() - 1; i >= 0; --i) {
        int digit = charToInt(number[i]);

        if (digit == -1 || digit >= base) {
            std::cerr << "Недопустимый символ или превышение базы!" << std::endl;
            return -1; // ошибка
        }

        decimalValue += digit * std::pow(base, power);
        ++power;
    }
    return decimalValue;
}

char intToChar(int n) {
    if (n >= 0 && n <= 9) {
        return n + '0';
    } else if (n >= 10 && n <= 15) {
        return n - 10 + 'A';
    }
    return '?'; // на случай ошибки
}

std::string from_ten_to_n(int number, int base) {
    if (base < 2 || base > 16) {
        std::cerr << "Недопустимая база!" << std::endl;
        return "";
    }

    std::string result;
    while (number > 0) {
        int remainder = number % base;
        result = intToChar(remainder) + result;
        number /= base;
    }

    return result.empty() ? "0" : result; // на случай если число 0
}

std::string from_m_to_n (std::string num, int m, int n) {
    return from_ten_to_n(from_n_to_ten(num, m), n);
}

#endif //MAIN_TRANSFORMATIONS_H
