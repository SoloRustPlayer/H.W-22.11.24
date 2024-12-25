#include "Fraction.h"
#include <iostream>

Fraction::Fraction() : numerator(0), denominator(1) {}

void Fraction::setValues(int num, int den) {
    numerator = num;
    denominator = (den != 0) ? den : 1; 
}

Fraction Fraction::add(const Fraction& other) {
    Fraction result;
    result.numerator = numerator * other.denominator + other.numerator * denominator;
    result.denominator = denominator * other.denominator;
    return result;
}

Fraction Fraction::subtract(const Fraction& other) {
    Fraction result;
    result.numerator = numerator * other.denominator - other.numerator * denominator;
    result.denominator = denominator * other.denominator;
    return result;
}

Fraction Fraction::multiply(const Fraction& other) {
    Fraction result;
    result.numerator = numerator * other.numerator;
    result.denominator = denominator * other.denominator;
    return result;
}

Fraction Fraction::divide(const Fraction& other) {
    Fraction result;
    result.numerator = numerator * other.denominator;
    result.denominator = denominator * other.numerator;
    return result;
}

void Fraction::input() {
    std::cout << "Enter numerator: ";
    std::cin >> numerator;
    std::cout << "Enter denominator: ";
    std::cin >> denominator;
    if (denominator == 0) {
        std::cout << "Denominator cannot be zero. Setting to 1.\n";
        denominator = 1;
    }
}

void Fraction::display() {
    std::cout << numerator << "/" << denominator << std::endl;
}
