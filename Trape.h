#pragma once
#include <cstdlib>
#include <iostream>
#include<memory>
#include "Figure.h"
class Trape
{
public:
	Trape(void);

 Trape(size_t i, size_t j, size_t k);
 Trape(const Trape& orig);

 friend std::ostream& operator<<(std::ostream& os, const Trape& obj);
 friend std::istream& operator>>(std::istream& is, Trape& obj);
 Trape& Trape::operator=(const Trape& right);
 virtual ~Trape();
private:
 size_t side_a;//очнование
 size_t side_b;//меньш осн
	size_t side_c;//бок сторона
};