#ifndef FRACTION_H
#define FRACTION_H

class Fraction {
private:
    int numerator;   
    int denominator; 

public:
    Fraction(); 
    void setValues(int num, int den); 
    Fraction add(const Fraction& other); 
    Fraction subtract(const Fraction& other); 
    Fraction multiply(const Fraction& other); 
    Fraction divide(const Fraction& other); 
    void input(); 
    void display(); 
};

#endif 
