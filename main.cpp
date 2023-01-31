#include<stdio.h>
#include <iostream>
#include "Enemy.h"
using namespace std;

int main()
{
	Enemy enemy1;
	Enemy enemy2;
	Enemy enemy3;

	enemy1.Draw();
	enemy2.Draw();
	enemy3.Draw();
	printf("---\n");

	enemy2.SetDeath();
	printf("“G‚Íˆêl€‚ñ‚¾\n");
	printf("---\n");

	enemy1.Draw();
	enemy2.Draw();
	enemy3.Draw();
	printf("---\n");

	enemy1.Update();
	enemy2.Update();
	enemy3.Update();
	printf("---\n");
	enemy1.Draw();
	enemy2.Draw();
	enemy3.Draw();
	printf("---\n");
	return 0;

}