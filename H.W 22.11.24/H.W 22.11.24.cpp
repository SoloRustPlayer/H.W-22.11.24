#include "Fraction.h"
#include <iostream>

int main() {
    Fraction fraction1, fraction2;

    std::cout << "Enter first fraction:\n";
    fraction1.input();

    std::cout << "Enter second fraction:\n";
    fraction2.input();

    Fraction sum = fraction1.add(fraction2);
    Fraction difference = fraction1.subtract(fraction2);
    Fraction product = fraction1.multiply(fraction2);
    Fraction quotient = fraction1.divide(fraction2);

    std::cout << "\nResults:\n";
    std::cout << "Sum: ";
    sum.display();

    std::cout << "Difference: ";
    difference.display();

    std::cout << "Product: ";
    product.display();

    std::cout << "Quotient: ";
    quotient.display();

    return 0;
}

