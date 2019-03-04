#ifndef UNTITLED_COMPLEXNUMBER_H
#define UNTITLED_COMPLEXNUMBER_H

typedef struct {
    float whole_part = float();
    float imaginary_part = float();
}ComplexNumber;

void getHelp();

void getComplexNumber(ComplexNumber*);

void multiplication(ComplexNumber* , float* );

void addition(ComplexNumber*, const ComplexNumber*);

void multiplicationComplex(ComplexNumber*, ComplexNumber*);

float lenth(ComplexNumber*);


#endif //UNTITLED_COMPLEXNUMBER_H
