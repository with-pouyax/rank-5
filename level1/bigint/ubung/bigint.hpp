#ifndef BIGINT_HPP
#define BIGINT_HPP

#include <ostream>
#include <string>
#include <algorithm>
#include <iostream>

class bigint {

    private:
        std::string _number;

        public:
            bigint();
            bigint(unsigned int n);
            bigint(std::string n);
            std::string getNum();
            bigint(const bigint& copy);
            
            

};

std::ostream& operator<< (std::ostream& os, bigint toPrint);



#endif