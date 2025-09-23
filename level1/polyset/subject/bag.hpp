#pragma once

class bag {                                         // it is our abstract class that will be inherited by our other classes
public:
	virtual void insert (int) = 0;                  // 
	virtual void insert (int *, int) = 0;
	virtual void print() const = 0;
	virtual void clear() = 0;
};
