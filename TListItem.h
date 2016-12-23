#pragma once
#include <cstdlib>
#include <iostream>
#include "Kvad.h"
#include "Romb.h"
#include "Trape.h"
#include <memory>
#include "Figure.h"
class TListItem {
public:
 TListItem(const std::shared_ptr<Figure>& kvad);

 TListItem(const TListItem& orig);

 friend std::ostream& operator<<(std::ostream& os, const TListItem& obj);


 std::shared_ptr<TListItem> SetNext(std::shared_ptr<TListItem> &next);
 std::shared_ptr<TListItem> GetNext();
 std::shared_ptr<Kvad> GetKvad() const;
 std::shared_ptr<Trape> GetTrap() const;
 virtual ~TListItem();
private:
 std::shared_ptr<Figure> kvadr;
 

 std::shared_ptr<TListItem> next;
};
