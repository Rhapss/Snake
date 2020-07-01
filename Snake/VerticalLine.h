#pragma once

#include <vector>
#include "Point.h"
#include "Figure.h"

class VerticalLine : public Figure
{
public:
	VerticalLine(int yTop, int yBottom, int x, char sym)
	{
		for (int y = yTop; y <= yBottom; y++)
		{
			Point p(x, y, sym);
			pList.push_back(p);
		}
	}
};

