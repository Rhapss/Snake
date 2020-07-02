#pragma once
#include <ctime>
#include <cstdlib>
class Random
{
public:

	int getRandom(int min, int max)
	{
		int newPos = min + rand() % max;
		return newPos;
	}
};

