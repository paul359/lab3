#include <iostream>
#include "Kvad.h"
#include "Romb.h"
#include "Trape.h"
#include "TListItem.h"
#include "List.h"

int main(int argc, char** argv) {
	
	
	TList list;
	char cmd[255]/* arg*/;
	do {
		
		std::cout<<" ' + ' - add item "<<std::endl;
		std::cout<<" ' - ' - delete item "<<std::endl;
	
		std::cout<<" ' q ' - exit "<<std::endl;
		std::cout<<"Enter command"<<std::endl;
		std::cout<<"Enter kind of figure:"<<std::endl;
					std::cout<<"r - romb"<<std::endl;
						std::cout<<"t-trap"<<std::endl;
							std::cout<<"k-kvad"<<std::endl;
		std::cin>>cmd;
	
		if(cmd[0]=='+')
		{
				

			if(cmd[1]=='k')
			{
			Kvad a; 
			std::cout<<"Enter side"<<std::endl;
			
			std::cin>>a;
			std::cout<<"Enter position"<<std::endl;
			int b;
			 std::cin>>b;
			list.add(std::shared_ptr<Kvad> (new Kvad(a)), b);
			std::cout << list;
			}

			
			if(cmd[1]=='r')
			{
			Romb a; 
			std::cout<<"Enter diags"<<std::endl;
			
			std::cin>>a;
			std::cout<<"Enter position"<<std::endl;
			int b;
			 std::cin>>b;
			//list.add(std::shared_ptr<Romb> (new Romb(a)), b);
			std::cout << list;
			}
			
			if(cmd[1]=='t')
			{
			Trape a; 
			std::cout<<"Enter two sides and high"<<std::endl;
			
			std::cin>>a;
			std::cout<<"Enter position"<<std::endl;
			int b;
			 std::cin>>b;
			//list.add(std::shared_ptr<Trape> (new Trape(a)), b);
			std::cout << list;
			}
		
		}
		if(cmd[0]=='-')
		{
			
			std::cout<<"Enter position"<<std::endl;
			int b;
			 std::cin>>b;
			 if(list.empty()==true){
				 std::cout<<"List is empty"<<std::endl;
			
			 }
			 else
			 {
				list.dell(b);
			std::cout << list;
			 }
		
		}
		
	}
	while(cmd[0]!='q');
	
	

 system("pause");
 return 0;
}
