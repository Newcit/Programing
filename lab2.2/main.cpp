#include <iostream>
#include "ComplexNumber.h"
#include "Stack.h"
#include <string>

int main() {
    std::string command;
    getHelp();
    std::cout << "Enter the command\n";
    std::cin >> command;
    while (command != "exit"){
        if (command == "multiplication") {
            ComplexNumber number;
            getComplexNumber(&number);
            float factor;
            std::cout << "\nEnter the number: ";
            std::cin >> factor;
            multiplication( &number , &factor );
            std::cout << "\nmultiplication - " << '(' << number.whole_part << ';' << number.imaginary_part << ')';
        } else if (command == "-additional") {
            ComplexNumber number_first, number_second;
            getComplexNumber( &number_first );
            getComplexNumber( &number_second );
            addition( &number_first , &number_second );
            std::cout << "\naddition " << '(' << number_first.whole_part << ';' << number_first.imaginary_part << ')';
        } else if (command == "-multiComplex") {
            ComplexNumber number_first, number_second;
            getComplexNumber( &number_first );
            getComplexNumber( &number_second );
            multiplicationComplex( &number_first , &number_second );
            std::cout << "\nmultiplication of a complex number - " << '(' << number_first.whole_part << ';' << number_first.imaginary_part << ')';
        } else if (command == "-radius") {
            ComplexNumber number;
            getComplexNumber(&number);
            float radius = lenth( &number);
            std::cout << "\nradius - " << radius;
        } else if (command == "-help") {
            getHelp();
        } else {
            std::cout << "Unknown command";
        }
        std::cout << "\nEnter the command\n";
        std::cin >> command;
    }

    std::cout << "Enter the command '+' or '-' \n";
    std::cin >> command;
    Stack stack;
    while (command != "exit" ) {
        if (command == "+") {
            std::cout << "Enter the number\n";
            int number;
            std::cin >> number;
            stack << number;
        } else if (command == "-") {
            int number = 0;
            stack >> number;
            std::cout << number << '\n';
        } else {
            std::cout << "Unknown command";
        }
        std::cout << "Enter the command '+' or '-' \n";
        std::cin >> command;
    }

    stack.getStack();

    return 0;
}