#pragma once
#include <cstdlib>
#include <iostream>
#include<memory>
#include "Figure.h"
class Romb
{
public:
	Romb(void);

 Romb(size_t i, size_t j);
 Romb(const Romb& orig);

 friend std::ostream& operator<<(std::ostream& os, const Romb& obj);
 friend std::istream& operator>>(std::istream& is, Romb& obj);
 Romb& Romb::operator=(const Romb& right);
 virtual ~Romb();
private:
 size_t side_a;
 size_t side_b;
};