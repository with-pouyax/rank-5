# SimpleCalculator

## Objective
Create a simple calculator class that can perform basic arithmetic operations (+, -, *, /) on two numbers. This exercise focuses on basic C++ syntax, class creation, member functions, and input/output operations.

## Requirements
- Create a `Calculator` class with the following member functions:
  - `add(double a, double b)` - returns a + b
  - `subtract(double a, double b)` - returns a - b
  - `multiply(double a, double b)` - returns a * b
  - `divide(double a, double b)` - returns a / b (handle division by zero)
- The class should have a default constructor
- Implement proper error handling for division by zero
- Use `std::cout` and `std::cin` for input/output
- Format output to 2 decimal

## Constraints
- Use only C++98 standard
- No forbidden functions (`*printf()`, `*alloc()`, `free()`)
- No forbidden keywords (`using namespace`, `friend`)
- Compile with `-Wall -Wextra -Werror -std=c++98`
- Handle division by zero by returning 0 and printing an error message

## Expected Output
```
Enter first number: 10.5
Enter second number: 3.2
Enter operation (+, -, *, /): +

10.50 + 3.20 = 13.70

Enter first number: 15
Enter second number: 0
Enter operation (+, -, *, /): /

Error: Division by zero!
15.00 / 0.00 = 0.00
```

## Files to Submit
- `Calculator.hpp` - Header file with class declaration
- `Calculator.cpp` - Implementation file
- `main.cpp` - Main program demonstrating the calculator

## Learning Focus
- Basic class structure and member functions
- Input/output operations with `std::cin` and `std::cout`
- Output formatting with `iomanip`
- Basic error handling
- Function implementation and calling
- Header file organization with include guards 