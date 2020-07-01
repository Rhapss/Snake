#pragma once

#include <vector>
#include "Point.h"
#include "Figure.h"

class HorizontalLine : public Figure
{
public:
	HorizontalLine(int xLeft, int xRight, int y, char sym)
	{
		for (int x = xLeft; x <= xRight; x++)
		{
			Point p (x, y, sym);
			pList.push_back(p);
		}
	}
};

