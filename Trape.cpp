#include "Trape.h"
#include <iostream>
#include <cmath>
#include<memory>
Trape::Trape() {
}
Trape::Trape(size_t i, size_t j,size_t k) : side_a(i), side_b(j),side_c(k) {
 //std::cout << "Kvad created: " << side_a << std::endl;
}
Trape::Trape(const Trape& orig) {
 //std::cout << "Kvad copy created" << std::endl;
 side_a = orig.side_a;
 side_b = orig.side_b;
 side_c  = orig.side_c;

}

Trape& Trape::operator=(const Trape& right) {
 if (this == &right) return *this;
 //std::cout << "Kvad copied" << std::endl;
 side_a = right.side_a;
 side_b = right.side_b;
 side_c = right.side_c;
 return *this;
}




Trape::~Trape() {
// std::cout << "Kvad deleted" << std::endl;
}
std::ostream& operator<<(std::ostream& os, const Trape& obj) {
 os << "a=" << obj.side_a; 
  os << "b=" << obj.side_b; 
   os << "c=" << obj.side_c; 
 return os;
}
std::istream& operator>>(std::istream& is, Trape& obj) {
 is >> obj.side_a;
 is >> obj.side_b;
 is >> obj.side_c;
 return is;
}


