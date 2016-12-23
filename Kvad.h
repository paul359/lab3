#pragma once
#include <cstdlib>
#include <iostream>
#include<memory>
#include "Figure.h"

class Kvad : public Figure {
public:
 Kvad();
 Kvad(size_t i);
 Kvad(const Kvad& orig);
  void   Print() override; 
 friend std::ostream& operator<<(std::ostream& os, const Kvad& obj);
 friend std::istream& operator>>(std::istream& is, Kvad& obj);
 Kvad& Kvad::operator=(const Kvad& right);
 virtual ~Kvad();
private:
 size_t side_a;
};
