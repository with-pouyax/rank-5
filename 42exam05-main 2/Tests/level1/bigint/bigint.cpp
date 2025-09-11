#include "bigint.hpp"


bigint::bigint()
{
	number = "0";
}

bigint::bigint(unsigned int num)
{
	if (num  == 0 )
	{
		number = "0";
		return ;
	}
	else
	{
		number.clear();
		while(num > 0)
		{
			number.push_back(char((num % 10) + '0'));
			num = num / 10;
		}
		std::reverse(number.begin(), number.end());
	}
}

bigint::bigint(std::string num)
{
	number = num;
}

bigint::bigint(const bigint& copy)
{
	number = copy.number;
}

bigint& bigint::operator=(const bigint& other)
{
	if(*this == other)
		return *this;
		
	number = other.number;
	return *this;
}



//getter
const std::string	bigint::getNum() const
{
	return number;
}

// addition
bigint	bigint::operator+(const bigint& other)const
{
	std::string leftNumber = this->_number;
	std::string rightNumber = other._number;


	int leftIndex = leftNumber.size() - 1;
	int rightIndex = rightNumber.size() - 1;

	std::string result;
	result.reserve(leftIndex > rightIndex ? leftIndex + 1 : rightIndex + 1);

	int carry = 0;
	while (leftIndex >= 0 || rightIndex >= 0 || carry)
	{
		int leftDigit = leftIndex >= 0 ? leftNumber[leftIndex] - '0' : 0;
		int rightDigit = rightIndex >= 0 ? rightNumber[rightIndex] - '0' : 0;
		
		int digitSum = leftDigit + rightDigit + carry;

		result.push_back((digitSum % 10) + '0');

		carry = digitSum / 10;

		leftIndex--;
		rightIndex--;
	}

	std::reverse(result.begin(), result.end());

	bigint resultBigint(result);
	return resultBigint;
}

bigint	bigint::operator+=(const bigint& other)
{
	*this = *this + other;
	return *this;
}

bigint	bigint::operator++(void)
{
	*this = *this + bigint(1);
	return *this;
}

bigint	bigint::operator++(int)
{
	bigint temp(*this);
	*this = *this + bigint(1);
	return temp;
}




// comparision
bool	bigint::operator>(const bigint& other) const
{
	if (this->number.size() > other.number.size())
			return true;
	if (this->number.size() == other.number.size())
			return (this->number == other.number);

	return false;
}

bool	bigint::operator<(const bigint& other) const
{
	return (other > *this);
}


bool	bigint::operator>=(const bigint& other) const
{
	if (this->number.size() > other.number.size())
			return true;
	if (this->number.size() == other.number.size())
			return (this->number >= other.number);

	return false;
}

bool	bigint::operator<=(const bigint& other) const
{
	return (other >= *this);
}

		
bool	bigint::operator==(const bigint& other) const
{
	return (this->number == other.number);
}

bool	bigint::operator!=(const bigint& other) const
{
	return (this->number != other.number);
}



		// shifter
bigint	bigint::operator<<(unsigned int shift)
{
	bigint temp(*this);
	while (shift)
	{
		temp.number.push_back('0');
		shift--;
	}

	return temp;
}

bigint	bigint::operator>>(unsigned int shift)
{
	if (shift >= this->number.size())
		return (bigint("0"));

	bigint temp(*this);
	while(shift)
	{
		temp.number.resize(temp.number.size() - 1);
		shift--;
	}
	return temp;
}

		
bigint	bigint::operator<<=(unsigned int shift)
{
	*this = *this << shift;
	return *this;
}

bigint	bigint::operator>>=(unsigned int shift)
{
	*this = *this >> shift;
	return *this;
}

std::ostream&	operator<<(std::ostream& os, bigint toPrint)
{
	os << toPrint.getNum();
	return os;
}
