#include "TListItem.h"
#include <iostream>



TListItem::TListItem(const std::shared_ptr<Figure>& kvad) {
 this->kvadr = kvad;
 this->next = nullptr;
 //std::cout << "lst item: created" << std::endl;
}



TListItem::TListItem(const TListItem& orig) {
 this->kvadr = orig.kvadr;
 this->next = orig.next;
// std::cout << "lst item: copied" << std::endl;
}


std::shared_ptr<TListItem> TListItem::SetNext(std::shared_ptr<TListItem> &next) {
 std::shared_ptr<TListItem> old = this->next;
 this->next = next;
 return old;
}
//std::shared_ptr<Figure> TListItem::GetKvad() const {
// return this->kvadr;
//}

std::shared_ptr<TListItem> TListItem::GetNext() {
 return this->next;
}
TListItem::~TListItem() {
// std::cout << "lst item: deleted" << std::endl;
// delete next;
}
//std::ostream& operator<<(std::ostream& os, const TListItem& obj) {
 //os << "[" << *obj.kvadr << "]" << std::endl;
 //return os;
//}

