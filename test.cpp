//#include "test.h"
//#include <stdio.h>
//
//int ChangeScene;
//int sceneNo = ChangeScene;
//TestSingleton::TestSingleton()
//{
//
//}
//TestSingleton::~TestSingleton()
//{}
//
//TestSingleton* TestSingleton::GetInstance()
//{
//	static TestSingleton instance;
//
//	return &instance;
//}
//void TestSingleton::scanf()
//{
//
//	scanf_s("%d", &ChangeScene);
//}
//void TestSingleton::ChangeScene(int sceneNo)
//{
//	printf("Title\n");
//	scanf_s("%d", &ChangeScene);
//}
//
//void TestSingleton::SceneManager3()
//{
//	printf("Gameclear\n");
//	scanf_s("%d", &ChangeScene);
//	if (ChangeScene == 0) {
//		TestSingleton::GetInstance()->SceneManager0();
//	}
//	if (ChangeScene == 1) {
//		TestSingleton::GetInstance()->SceneManager1();
//	}
//	if (ChangeScene == 2) {
//		TestSingleton::GetInstance()->SceneManager2();
//	}
//	if (ChangeScene == 3) {
//		TestSingleton::GetInstance()->SceneManager3();
//	}
//}