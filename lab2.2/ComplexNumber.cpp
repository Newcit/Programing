#include "ComplexNumber.h"
#include <cmath>
#include <iostream>

void getComplexNumber(ComplexNumber *number) {
    std::cout << "Enter the integer part of the complex number: ";
    std::cin >> number->whole_part;
    std::cout << "\nEnter the imaginary part of the complex number: ";
    std::cin >> number->imaginary_part;
}

void getHelp() {
    std::cout << "-help - help\n";
    std::cout << "-multiplication - multiplication(complex number * number )\n";
    std::cout << "-multiComplex - multiplication(complex number * complex number\n";
    std::cout << "-additional - additional\n";
    std::cout << "-radius - radius\n";
}

void multiplication(ComplexNumber *number, float *factor ) {
    number->whole_part = number->whole_part * *factor;
    number->imaginary_part = number->imaginary_part * *factor;
}

void addition(ComplexNumber *number_first, const ComplexNumber *number_second) {
    number_first->imaginary_part = number_first->imaginary_part + number_second->imaginary_part;
    number_first->whole_part = number_first->whole_part + number_second->whole_part;
}

void multiplicationComplex(ComplexNumber *number_first, ComplexNumber *number_second) {
    number_first->whole_part = number_first->whole_part * number_second->whole_part - number_first->imaginary_part * number_second->imaginary_part;
    number_second->imaginary_part = number_first->whole_part * number_second->imaginary_part + number_first->imaginary_part * number_second->whole_part;
}

float lenth(ComplexNumber *number) {
    return (float) sqrt(pow(number->whole_part, 2) + pow(number->imaginary_part, 2));
}

