#include <iostream>
#include <string>


int main (void)
{
    std::string input;
    size_t i = 0;
    char c;
    std::getline(std::cin, input);
    if (input.empty())
        return ((std::cout <<  "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl), 0);
    else{
        for (; i < input.length(); i++){
            c = input[i];
            if (c >= 'a' && c <= 'z')
                std::cout << static_cast<char>(c - 32);
            else
            std::cout << c;           
        }
        std::cout << std::endl;
    }
}
