#include "Loudspeaker.hpp"
#include <iostream>

int Loudspeaker::instanceCount = 0;

Loudspeaker::Loudspeaker(std::string phrase) : phrase(phrase)
{
    instanceCount++;
}

Loudspeaker::~Loudspeaker(){
    std::cout << "Loudspeaker destroyed: goodbye!" << std::endl;
    instanceCount--;
}

void Loudspeaker::shout() const{
    char c;
    for (size_t i = 0; i < phrase.length(); i++){
        c = phrase[i];
        if (c >= 'a' && c <= 'z')
            std::cout << static_cast<char>(c - 32);
        else
            std::cout << c;
    }
    std::cout << std::endl;
}

int Loudspeaker::getInstanceCount(){
    return instanceCount;
}