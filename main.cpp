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
///	int ChangeScene = 0;
	//int sceneNo = ChangeScene;
	//printf("0~3‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢,‚»‚êˆÈŠO‚ÍI—¹\n");
	//scanf_s("%d", &ChangeScene);

	//	printf("%d",val);

//	if (ChangeScene == 0) {
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
//	}


	//	TestSingleton*p=TestSingleton::GetInstance();
	//	p->Hello();
	return 0;

}

