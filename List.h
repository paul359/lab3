#pragma once
#include "Kvad.h"
#include "Romb.h"
#include "Trape.h"
#include "TListItem.h"
#include <memory>
class TList
{
public:
	TList();
	TList(const TList& orig);
	void add(std::shared_ptr<Figure>  &&kvad, int num);
	void add(std::shared_ptr<Romb>  && sq,int num) ;
		void add(std::shared_ptr<Trape>  && trap,int num); 
	void dell(int num);
	friend std::ostream& operator<<(std::ostream& os,const TList& list);
	bool empty();
	
	virtual ~TList();
private:
		std::shared_ptr<TListItem> head;

};
