#include "lab1.h"
#include <cmath>
#include <vector>

// TASK 1

void modulo(int &one, int &two) {
    (one > two) ? (one = one % two) : (two = two % one);
}

void modulo(int *one, int *two) {
    (*one > *two) ? (*one = *one % *two) : (*two = *two % *one);
}

// TASK 2
void rnd(double &number) {
    number = round(number);
}

void rnd(double *number) {
    *number = round(*number);
}

// TASK 3

bool degreaseRadius(Circle &circle, double value) {
    if(circle.getRadius() > value) {
        circle.setRadius(circle.getRadius() - value);
        return true;
    } else {
        return false;
    }
}

bool degreaseRadius(Circle *circle, double value) {
    if(circle->getRadius() > value) {
        circle->setRadius(circle->getRadius() - value);
        return true;
    } else {
        return false;
    }
}

// TASK 4

//void transposing(int (&matrix)[3][3]) {
//    for (int i = 0; i < 3 ; ++i) {
//    for (int j = i; j < 3; ++j) {
//        int temp = matrix[i][j];
//        matrix[i][j] = matrix[j][i];
//        matrix[j][i] = temp;
//        }
//    }
//}

void transposing(int matrix[3][3]) {
    for (int i = 0; i < 3 ; ++i) {
        for (int j = i; j < 3; ++j) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}