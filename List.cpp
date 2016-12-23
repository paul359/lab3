#include "List.h"

TList::TList() : head(nullptr) {
}
TList::TList(const TList& orig) {
 head = orig.head;
}
std::ostream& operator<<(std::ostream& os, const TList& list) {
 std::shared_ptr<TListItem> item = list.head;

 while(item!=nullptr)
 {
 os << *item;
 item = item->GetNext();
 }

 return os;
}
void TList::add(std::shared_ptr<Figure>  && kvadr,int num) {
	num--;
	std::shared_ptr<TListItem>  newIt( new TListItem(kvadr));
	if(head==nullptr)
	{

		newIt->SetNext(head);
		 head = newIt;
	}
	else
	{
		std::shared_ptr<TListItem> curr = head;
		for(int i=1;(i<num) && (curr->GetNext()!=nullptr);i++)
		{
			curr=curr->GetNext();
			
		}
	
		if(num == 0)
		{
			
			newIt->SetNext(head);
			head = newIt;
		}
		else
		{
			
			if(curr->GetNext()!=nullptr)
			{
				
				newIt->SetNext(curr->GetNext());
				curr->SetNext(newIt);
			}
			else
			{
				
			 curr->SetNext(newIt);
			
			}
		
		}
	}
	
}




bool TList::empty() {
 return head == nullptr;
}


void TList::dell(int num) {
	std::shared_ptr<TListItem> curr = head;
	std::shared_ptr<TListItem> ptr;
	Kvad result;
	
	for(int i=1;(i<num) && (curr->GetNext()!=nullptr);i++)
		{
			curr=curr->GetNext(); 
			 
		}
	if(curr!=nullptr)
	{
		
		if(curr==head)
		{
			head=head->GetNext(); 
			
		//	curr->GetKvad();

		//	curr->SetNext(nullptr);
			//delete(curr);
			curr=head;
		}
		else
		{
			
			ptr=head;
			
			while(ptr->GetNext()!=curr)
				{
		
				ptr=ptr->GetNext();
			}
			ptr->SetNext(curr->GetNext());
		//	curr->GetKvad();

	//		curr->SetNext(nullptr);
		//	delete(curr);
		curr=ptr;
		
		}
	}

}

TList::~TList() {
	
//	delete head;
	
}
