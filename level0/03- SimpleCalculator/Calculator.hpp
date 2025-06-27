#ifndef CALCULATOR_HPP
#define CALCULATOR_HPP

class Calculator {
    
    public:
        
        Calculator();
        ~Calculator();
        
        double add(double a, double b);        // - returns a + b
        double subtract(double a, double b);   // - returns a - b
        double multiply(double a, double b);   // - returns a * b
        double divide(double a, double b);     // - returns a / b (handle division by zero)

    private:
};











#endif