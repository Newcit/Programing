//
// Created by Nikita on 07.02.2019.
//

#include "Circle.h"

Circle::Circle(double _x, double _y, double _radius) {
    square = M_PI * pow(_radius, 2);
    x = _x;
    y = _y;
    radius = _radius;
}

double Circle::getSquare() {
    return square;
}

void Circle::setCentre(double new_x, double new_y) {
    x = new_x;
    y = new_y;
}

double Circle::getRadius() {
    return radius;
}

void Circle::setRadius(double new_radius) {
    square = M_PI * pow(new_radius, 2);
    radius = new_radius;
}
