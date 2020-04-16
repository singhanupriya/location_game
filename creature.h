#ifndef CREATURE_H
#def CREATUE_H
#include<string>
#include "point.h"

#include<iostream>


class Creature{
	
	std::string m_name;
	Point m_point;
	
	Creature(std::string name, const Point &point)
	{
		m_name=name;
		m_point=point;
	}
	
	friend std::ostream& operator<<(std::ostream &out, const Creature &creature);
	
	void moveTo(int x,int y)
	{
		m_point.setTo(x,y);
	}
	
};


std::ostream& operator<<(std::ostream &out, const Creature &creature)
{
	out<<creature.m_name<<" is at "<<creature.m_point;
}


#endif
