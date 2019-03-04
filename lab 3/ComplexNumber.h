#ifndef LAB_3_COMPLEXNUMBER_H
#define LAB_3_COMPLEXNUMBER_H

#include <string>

class ComplexNumber {
private:
    int integer_part = int();
    int imaginary_part = int();
public:

    void operator<< (std::string &line );
    void operator<< (int int_number );

};

/*
void ComplexNumber::operator<<(std::string &line) {
    unsigned int point = line.size()- 1;
    while (line[point] != '\n') {
        if (line[point] == 'i' ) {
            line.erase(point);
        }
        imaginary_part = std::stoi(line);
    }
}
*/

void ComplexNumber::operator<<(int int_number) {
    integer_part = int_number;
}

#endif //LAB_3_COMPLEXNUMBER_H
