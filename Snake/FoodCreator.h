#pragma once
#include "Point.h"
#include "Random.h"
class FoodCreator
{
public:
	int mapWidht;
	int mapHeight;
	char sym;

	Random random;

	FoodCreator(int mapWidth, int mapHeight, char sym)
	{
		this->mapWidht = mapWidth;
		this->mapHeight = mapHeight;
		this->sym = sym;
	}
	Point CreateFood()
	{
		int x = random.getRandom(2, mapWidht - 2);
		int y = random.getRandom(2, mapHeight - 2);
		return Point(x, y, sym);
	}
	
};

