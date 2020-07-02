#include <iostream>
#include <windows.h>
#include "Point.h"
#include "HorizontalLine.h"
#include "VerticalLine.h"
#include <vector>
#include "conio.h"
#include "Snake.h"
#include "FoodCreator.h"
#include <ctime>
using namespace std;



int main()
{
	srand(time(NULL));
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

		FoodCreator foodCreator(50, 20, '$'); 
		Point food = foodCreator.CreateFood();
		food.DrawPoint(); 
		while (true)
		{
			
			if (snake.Eat( food ))
			{
				food = foodCreator.CreateFood();
				food.DrawPoint();

			}
			else
			{
				snake.Move();
			}
		
			Sleep(150);
			snake.HandleKey();
		}
	


	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	return 0;
}

