#include <iostream>
#include <string>

class bigint {
private:
    std::string _number;

public:
    // Konstruktor mit int
    bigint(int n) {
        _number = std::to_string(n);
    }

    // Copy-Konstruktor (ohne & !!!)
    bigint(const bigint copy) {   // ⚠️ hier ist das Problem
        _number = copy._number;
    }
};

int main() {
    bigint a(42);   // ok
    bigint b(a);    // versucht Copy-Konstruktor zu nutzen
}

