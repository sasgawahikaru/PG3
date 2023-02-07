#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<functional>
#include<vector>
#include<string>
#include"test.h"

int main()
{
	int input;
	int scene = 0;
	while (true)
	{
		printf("0:text 1:continue ==>");
		scanf_s("%d", &input);
		if (input == 0)break;
		TestSingleton::GetInstance()->ChangeScene(scene);
		scene += 1;
		if (scene == 4)
		{
			scene = 0;
		}
	}
	return 0;

}

