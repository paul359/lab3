#include "Romb.h"
#include <iostream>
#include <cmath>
#include<memory>
Romb::Romb() {
}
Romb::Romb(size_t i, size_t j) : side_a(i), side_b(j) {
 //std::cout << "Kvad created: " << side_a << std::endl;
}
Romb::Romb(const Romb& orig) {
 
 side_a = orig.side_a;
 side_b = orig.side_b;

}

Romb& Romb::operator=(const Romb& right) {
 if (this == &right) return *this;
 
 side_a = right.side_a;
 side_b = right.side_b;

 return *this;
}




Romb::~Romb() {

}
std::ostream& operator<<(std::ostream& os, const Romb& obj) {
 os << "a=" << obj.side_a; 
  os << "b=" << obj.side_b; 
 return os;
}
std::istream& operator>>(std::istream& is, Romb& obj) {
 is >> obj.side_a;
  is >> obj.side_b;
 return is;
}