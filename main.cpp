#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<functional>

//int i;
//typedef void (*PFunc)(int*);
//
//void callback(int* s)
//{
//	srand((unsigned int)time(NULL));
//	int num = rand() % 6 + 1;
//	printf("%d\n", num);
//	if (i % 2 == 0)
//	{
//		if (num % 2 == 0)
//		{
//			printf("偶数\n");
//			printf("当たり");
//		}
//		else
//		{
//			printf("奇数\n");
//			printf("外れ");
//		}
//	}
//	if (i % 2 == 1)
//	{
//		if (num % 2 == 0)
//		{
//			printf("偶数\n");
//			printf("外れ");
//		}
//		else
//		{
//			printf("奇数\n");
//			printf("当たり");
//		}
//	}
//}
//void setTimeout(PFunc p, int second)
//{
//	Sleep(second * 1000);
//
//	p(&second);
//}

typedef void (*PFunc)(int*);


//void callback(int* s) {
	int main(int argc, const char* argv[])
	{
		int a;
		printf("偶数だと思うなら偶数値を 奇数だと思うなら奇数値を入力してENTER\n");
		scanf_s("%d", &a);
			srand((unsigned int)time(NULL));

			std::function<int()>saikoro = []() {return rand() % 6 + 1; };
			int num = saikoro();
			printf("%d\n", num);
			if (a % 2 == 0)
			{
				if (num % 2 == 0)
				{
					printf("偶数\n");
					printf("当たり");
				}
				else
				{
					printf("奇数\n");
					printf("外れ");
				}
			}
			if (a % 2 == 1)
			{
				if (num % 2 == 0)
				{
					printf("偶数\n");
					printf("外れ");
				}
				else
				{
					printf("奇数\n");
					printf("当たり");
				}
			}
		return 0;
	}
	//void setTimeout(PFunc p, int second)
	//{
	//	Sleep(second * 1000);

	//	p(&second);
	//}


//typedef void (*PFunc)(int*);
//
//int i;
//void callback(int* s)
//{
//	for (int a = 0; a < 1; a++)
//		srand((unsigned int)time(NULL));
//	{
//		int num = rand() % 6 + 1;
//		printf("%d\n", num);
//		if (i % 2 == 0)
//		{
//			if (num % 2 == 0)
//			{
//				printf("偶数\n");
//				printf("当たり");
//			}
//			else
//			{
//				printf("奇数\n");
//				printf("外れ");
//			}
//		}
//		if (i % 2 == 1)
//		{
//			if (num % 2 == 0)
//			{
//				printf("偶数\n");
//				printf("外れ");
//			}
//			else
//			{
//				printf("奇数\n");
//				printf("当たり");
//			}
//		}
//	}
//}
//void setTimeout(PFunc p, int second)
//{
//	Sleep(second * 1000);
//
//	p(&second);
//}
//int main(int argc, const char* argv[]) {
//
//	std::function<int(int)>fx = [&](int i) {return i + 1; };
//	auto fx2 = [&](int i) {return i + 1; };
//
//	[]() {printf("偶数だと思うなら偶数値を 奇数だと思うなら奇数値を入力してENTER\n"); }();
//	scanf_s("%d", &i);
//	PFunc p;
//	p = callback;
//	setTimeout(p, 3);
//	return 0;
//
//}
//int main()
//{
//
//	PFunc p;
//	p = callback;
//	setTimeout(p, 3);
//	return 0;
//}