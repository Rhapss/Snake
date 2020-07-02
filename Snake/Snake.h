#pragma once
#include <vector>
#include "Figure.h"
#include "Point.h"
#include "Direction.h"
class Snake : public Figure
{
public:

	Direction direction;
	Snake(Point tail, int length, Direction _direction)
	{
		direction = _direction;
		for (int i = 0; i < length; i++)
		{
			Point p(tail);
			p.Move(i, direction);
			pList.push_back(p);
		}
	}
	void Move()
	{
		Point tail = pList.front();
		pList.pop_front();
		Point head = GetNextPoint();
		pList.push_back(head);

		tail.Clear();
		head.DrawPoint();
	}

	Point GetNextPoint()
	{
		Point head = pList.back();
		Point nextPoint = head;
		nextPoint.Move(1, direction);
		return nextPoint;
	}
	void HandleKey()

	{
		int pressedKey;
		if ( _kbhit() )
		{
			while (_kbhit())
			{
				pressedKey = _getch();
				switch (pressedKey)
				{
				case 75:
					direction = LEFT;
					break;
				case 72:
					direction = UP;
					break;
				case 77:
					direction = RIGHT;
					break;
				case 80:
					direction = DOWN;
					break;
				}
			}
		}
	}

	bool Eat(Point food)
	{
		Point head = GetNextPoint();
		if (head.IsHit(food))
		{
			food.sym = head.sym;
			pList.push_back(food);
			return true;
		}
		else
		{
			return false;
		}
	}
};

