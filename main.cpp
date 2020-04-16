#include<iostream>
#include<string>
#include "point.h"
#include "creature.h"

int main()
{
	std::string name;
	std::cout<<"Enter the name of the creature: ";
	std::getline(std::cin, name);
	Creature creature(name,{0,0});
	
	while(true)
	{
		
		std::cout<<creature<<"\n";
		std::cout<<"Enter new X location for the creature: (-1 to exit)";
		int x=0;
		std::cin>>x;
		if(x==-1)
		{
			break;
		}
		
		std::cout<<"\n"; 
		std::cout<<"Enter new Y location for the creature: (-1 to exit)";
		int y=0;
		std::cin>>y;
		if(y==-1)
		{
			break;
		}
		
		creature.moveTo(x,y);
		
		
	}
	
	
	return 0;
}
