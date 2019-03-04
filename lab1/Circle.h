//
// Created by Nikita on 07.02.2019.
//

#ifndef LAB1_CIRCLE_H
#define LAB1_CIRCLE_H

#include <cmath>


class Circle {
private:
    double radius = 0;
    double square = 0;
    double x = 0, y = 0;

public:
    Circle(double _x, double _y, double _radius);

    double getRadius();

    void setRadius(double new_radius);

    double getSquare();

    void setCentre(double new_x, double new_y);

};



#endif //LAB1_CIRCLE_H
