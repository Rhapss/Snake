#pragma once
#include <list>
#include "Point.h"

class Figure
{
protected:
	
public:
	std::list <Point> pList;
	void DrawLine()
	{
		for (Point p : pList)
		{
			p.DrawPoint();
		}
	}
};

