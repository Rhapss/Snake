#include <iostream>
#include <windows.h>
#include "Point.h"
#include "HorizontalLine.h"
#include "VerticalLine.h"
#include <vector>
#include "conio.h"
#include "Snake.h"
using namespace std;



int main()
{
	system("mode con cols=51 lines=21");

	HorizontalLine Top (0, 50, 0, '#');
	HorizontalLine Bottom(0, 50, 20, '#');
	VerticalLine Left (0, 20, 0, '#');
	VerticalLine Right(0, 20, 50, '#');
	Top.DrawLine();
	Bottom.DrawLine();
	Left.DrawLine();
	Right.DrawLine();

		Point p(4, 5, '0');
		Snake snake(p, 4, RIGHT);
		snake.DrawLine();
		while (true)
		{
			snake.HandleKey();
			snake.Move();
			Sleep(300);
		}
	


	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	return 0;
}

