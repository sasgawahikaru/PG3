#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<functional>
#include<vector>
#include<list>
#include<string>
#include"test.h"

int main()
{
	int ChangeScene = 0;
	int sceneNo = ChangeScene;
	printf("0~3‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢,‚»‚êˆÈŠO‚ÍI—¹\n");
	scanf_s("%d", &ChangeScene);

	//	printf("%d",val);

	if (ChangeScene == 0) {
		TestSingleton::GetInstance()->SceneManager0();
	}
	if (ChangeScene == 1) {
		TestSingleton::GetInstance()->SceneManager1();
	}
	if (ChangeScene == 2) {
		TestSingleton::GetInstance()->SceneManager2();
	}
	if (ChangeScene == 3) {
		TestSingleton::GetInstance()->SceneManager3();
	}
	//	TestSingleton*p=TestSingleton::GetInstance();
	//	p->Hello();
	return 0;

}
