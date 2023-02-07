#include "test.h"
#include <stdio.h>

int ChangeScene;
int sceneNo = ChangeScene;
TestSingleton::TestSingleton()
{

}
TestSingleton::~TestSingleton()
{}

TestSingleton* TestSingleton::GetInstance()
{
	static TestSingleton instance;

	return &instance;
}
void TestSingleton::ChangeScene(int sceneNo)
{
	if (sceneNo == 0)
	{
		printf("Title\n");
	}
	if (sceneNo == 1)
	{
		printf("NewGame\n");
	}
	if (sceneNo == 2)
	{
		printf("GamePlay\n");
	}
	if (sceneNo == 3)
	{
		printf("Gameclear\n");
	}

}