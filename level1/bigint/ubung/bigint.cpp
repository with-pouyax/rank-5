#include "bigint.hpp"
#include <ostream>
#include <string>

bigint::bigint() : _number("0") {

}

bigint::bigint(unsigned int n) : _number("0") {
    if (!n)
        return;
    else {
        _number.clear();

        while(n > 0){
            _number.push_back(char(n % 10) + '0');
            n /= 10;
        }
        std::reverse(_number.begin(), _number.end());
    }
}


bigint::bigint(std::string n){
    _number = n;
}

bigint::bigint(const bigint& copy){
    _number = copy._number;
}

std::string bigint::getNum(){
    return _number;
}

std::ostream& operator<< (std::ostream& os, bigint toPrint){
    os << toPrint.getNum();
    return os;
}

