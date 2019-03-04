#include <iostream>
#include "lab1.h"
#include "Circle.h"
#include <vector>
#include <string>

int main() {
    //TASK 1
    std::cout << "Enter two numbers" << "\n";
    int one,two;
    std::cin >> one >> two;
    modulo(one, two);
    std::cout << "first - " << one << "\n" << "second - " << two <<"\n";

    std::cout << "Enter two numbers" << "\n";
    std::cin >> one >> two;
    modulo(&one, &two);
    std::cout << "first - " << one << "\n" << "second - " << two <<"\n";

    // TASK 2
    std::cout << "Enter the number" << "\n";
    double number, temp;
    std::cin >> number;8
    temp = number;
    rnd(number);
    rnd(&temp);
    std::cout << "round - " << number << " ," << temp << "\n";

    // TASK 3
    std::cout << "Enter centre coordinates and radius: ";
    double x, y, radius;
    std::cin >> x >> y >> radius;
    Circle circle(x, y, radius);
    std::cout << "Enter the number: ";
    double decreaser_value;
    std::cin >> decreaser_value;
    if (degreaseRadius(circle, decreaser_value)) {
        std::cout << "New square : " << circle.getSquare() << "\nNew radius :" << circle.getRadius() << "\n";
    } else
        std::cout << "fail";
    if (degreaseRadius(&circle, decreaser_value)) {
        std::cout << "New square : " << circle.getSquare() << "\nNew radius :" << circle.getRadius() << "\n";
    } else
        std::cout << "fail";
    // TASK 4
    std::cout << "Enter the matrix ";
    int matrix[3][3];
    for (int j = 0; j < 3 ; ++j) {
        for (int k = 0; k < 3 ; ++k) {
            std::cin >> matrix[j][k];
        }
    }
    transposing(matrix);
    for (int j = 0; j < 3 ; ++j) {
        for (int k = 0; k < 3 ; ++k) {
            std::cout << matrix[j][k] << " ";
        }
        std::cout <<"\n";
    }

    return 0;
}