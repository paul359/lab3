#include "Kvad.h"
#include <iostream>
#include <cmath>
#include<memory>
Kvad::Kvad() {
}
Kvad::Kvad(size_t i) : side_a(i) {
 //std::cout << "Kvad created: " << side_a << std::endl;
}
Kvad::Kvad(const Kvad& orig) {
 //std::cout << "Kvad copy created" << std::endl;
 side_a = orig.side_a;

}

Kvad& Kvad::operator=(const Kvad& right) {
 if (this == &right) return *this;
 //std::cout << "Kvad copied" << std::endl;
 side_a = right.side_a;

 return *this;
}

void Kvad::Print() {     std::cout << "a=" << side_a  << std::endl;  
} 


Kvad::~Kvad() {
// std::cout << "Kvad deleted" << std::endl;
}
std::ostream& operator<<(std::ostream& os, const Kvad& obj) {
 os << "a=" << obj.side_a; 
 return os;
}
std::istream& operator>>(std::istream& is, Kvad& obj) {
 is >> obj.side_a;
 return is;
}
