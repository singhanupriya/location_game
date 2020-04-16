#ifndef POINT_H
#def POINT_H

#include<iostream>

class Point()
{
	int m_x=0,m_y=0;
	
	public:
		Point()=default;
		
		Point(int x,int y)
		{
			m_x=x;
			m_y=y;
			
		}
		
		friend std::ostream& opertaor<<(std::ostream &out, const Point &point);
		
		void setTo(int x,int y)
		{
			m_x=x;
			m_y=y
		}
		
};



std::ostream& opertaor<<(std::ostream &out, const Point &point)
{
	out<<"("<<point.m_x<<","<<point.m_y<<")";
	
}



#endif
