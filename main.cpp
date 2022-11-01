#include<stdio.h>#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<functional>

typedef void (*PFunc)(int*);

int i;
int main(int argc, const char* argv[]) {
	for (int a = 0; a < 1; a++)
		srand((unsigned int)time(NULL));
	{
		int num = rand() % 6 + 1;
		printf("%d\n", num);
		if (i % 2 == 0)
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
		if (i % 2 == 1)
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
		std::function<int(int)>fx = [](int num) {return num % 2 == 1; };
		if (i % 2 == 1)
		{
			auto fx2 = [](int num) {return num % 2 == 0; };
		}
	}
}
void setTimeout(PFunc p, int second)
{
	Sleep(second * 1000);

	p(&second);
}
int main()
{

	printf("偶数だと思うなら0,2,4,6,8を 奇数だと思うなら1,3,5,7,9を押してENTER\n");
	scanf_s("%d", &i);
	PFunc p;
	p = callback;
	setTimeout(p, 3);
	return 0;
}



typedef void (*PFunc)(int*);

int i;
void callback(int* s)
{

	for (int a = 0; a < 1; a++)
		srand((unsigned int)time(NULL));
	{
		int num = rand() % 6 + 1;
		printf("%d\n", num);
		if (i % 2 == 0)
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
		if (i % 2 == 1)
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
	}
}
//void setTimeout(PFunc p, int second)
//{
//	Sleep(second * 1000);
//
//	p(&second);
//}
//int main()
//{
//
//	printf("偶数だと思うなら0,2,4,6,8を 奇数だと思うなら1,3,5,7,9を押してENTER\n");
//	scanf_s("%d", &i);
//	PFunc p;
//	p = callback;
//	setTimeout(p, 3);
//	return 0;
//}