#include <iostream>

using namespace std;

class Player
{
public:
	Player(int pancakes);
	int getEaten();
	int getMostEaten(Player p1, Player p2, Player p3, Player p4, Player p5, Player p6, Player p7, Player p8, Player p9, Player p10);


private:
	int eaten = 0;
};


