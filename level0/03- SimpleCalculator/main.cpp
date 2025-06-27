#include "Calculator.hpp"
#include <iostream>
#include <string>
#include <iomanip>

int main (void)
{
    double first;
    double second;
    char operation;
    Calculator calc;
    
    std::cout << "Enter first number: ";
    std::cin >> first;

    std::cout << "Enter second number: ";
    std::cin >> second;

    std::cout << "Enter operation (+, -, *, /): ";
    std::cin >> operation;

    double result = 0.0;
    
    switch (operation) {
        case '+':
            result = calc.add(first, second);
            break;
        case '-':
            result = calc.subtract(first, second);
            break;
        case '*':
            result = calc.multiply(first, second);
            break;
        case '/':
            result = calc.divide(first, second);
            break;
        default:
            std::cout << "Error: Invalid operation!" << std::endl;
            return 1;
    }

    std::cout << std::endl;
    std::cout << std::fixed << std::setprecision(2) 
              << first << " " << operation << " " << second << " = " << result << std::endl;

    return 0;
}