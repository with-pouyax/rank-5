#include "Loudspeaker.hpp"
#include <iostream>

int main() {
    std::cout << "Total: " << Loudspeaker::getInstanceCount() << std::endl;
    Loudspeaker a("hello world");
    Loudspeaker b("c++ is powerful");
    a.shout();   // HELLO WORLD
    b.shout();   // C++ IS POWERFUL
    std::cout << "Total: " << Loudspeaker::getInstanceCount() << std::endl;
    return 0;
}