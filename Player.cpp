#include <iostream>
#include "Player.h"

using namespace std;


Player::Player(int pancakes)
{
	cout << "[SYSTEM] Player object created" << endl;
	eaten = pancakes;
}

int Player::getEaten()
{
	return eaten;
}

int Player::getMostEaten(Player p1, Player p2, Player p3, Player p4, Player p5, Player p6, Player p7, Player p8, Player p9, Player p10)
{
	int i1 = p1.getEaten();
	int i2 = p2.getEaten();
	int i3 = p3.getEaten();
	int i4 = p4.getEaten();
	int i5 = p5.getEaten();
	int i6 = p6.getEaten();
	int i7 = p7.getEaten();
	int i8 = p8.getEaten();
	int i9 = p9.getEaten();
	int i10 = p10.getEaten();

	int list[] = { i1, i2, i3, i4, i5, i6, i7, i8, i9, i10 };
	int holder = -1;

	for (int x = 0; x < 11; x++)
	{
		if (list[x] > list[x + 1])
		{
			holder = list[x + 1];
			list[x + 1] = list[x];
			list[x] = holder;

		}

	}

	for (int x = 0; x < 11; x++)
	{
		cout << list[x] << endl;
	}

	return 1;
}

