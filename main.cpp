#include <iostream>
#include <Windows.h>

#include "Player.h"

using namespace std;

int main()
{
	/*
	*
	*Declared variables
	*
	*/



	/*
	*
	*
	*Creating objects
	*
	*/
	Player global(0);

	Player num1(5);
	Player num2(1);
	Player num3(8);
	Player num4(6);
	Player num5(11);
	Player num6(6);
	Player num7(7);
	Player num8(3);
	Player num9(13);
	Player num10(0);

	global.getMostEaten(num1, num2, num3, num4, num5, num6, num7, num8, num9, num10);

	Sleep(5000);


}

