#pragma once
#include <iostream>
#include <windows.h>
#include "Direction.h"
class Point
{
public:
	int x = 0;
	int y = 0;
	char sym;

	Point()
	{
	
	}
	Point(int _x, int _y, char _sym)
	{
		x = _x;
		y = _y;
		sym = _sym;
	}
	Point(const Point& p)
	{
		x = p.x;
		y = p.y;
		sym = p.sym;
	}

	void Move(int offset, Direction direction)
	{
		if (direction == RIGHT)
		{
			x = x + offset;
		}
		else if (direction == LEFT)
		{
			x = x - offset;
		}
		else if (direction == UP)
		{
			y = y - offset;
		}
		else if (direction == DOWN)
		{
			y = y + offset;
		}
	}
	
	bool IsHit(Point p)
	{
		return p.x == this->x && p.y == this->y;
	}
	void gotoxy(short x, short y)
	{
		HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
		COORD position = { x, y };
		SetConsoleCursorPosition(hStdout, position);
	}
	void DrawPoint()
	{
		gotoxy(x, y);
		std:: cout << sym;
	}
	void Clear()
	{
		sym = ' ';
		DrawPoint();
	}
};

