#include "Enemy.h"
#include <stdio.h>

int main()
{
	Enemy enemy;
	int input;
	while (true)
	{
		printf("0:text 1:continue ==>");
		scanf_s("%d" ,&input);
		if (input == 0)break;
		enemy.Update();
		enemy.Draw();
	}
	return 0;

}
