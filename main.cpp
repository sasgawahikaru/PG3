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
				printf("����\n");
				printf("������");
			}
			else
			{
				printf("�\n");
				printf("�O��");
			}
		}
		if (i % 2 == 1)
		{
			if (num % 2 == 0)
			{
				printf("����\n");
				printf("�O��");
			}
			else
			{
				printf("�\n");
				printf("������");
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

	printf("�������Ǝv���Ȃ�0,2,4,6,8�� ����Ǝv���Ȃ�1,3,5,7,9��������ENTER\n");
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
				printf("����\n");
				printf("������");
			}
			else
			{
				printf("�\n");
				printf("�O��");
			}
		}
		if (i % 2 == 1)
		{
			if (num % 2 == 0)
			{
				printf("����\n");
				printf("�O��");
			}
			else
			{
				printf("�\n");
				printf("������");
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
//	printf("�������Ǝv���Ȃ�0,2,4,6,8�� ����Ǝv���Ȃ�1,3,5,7,9��������ENTER\n");
//	scanf_s("%d", &i);
//	PFunc p;
//	p = callback;
//	setTimeout(p, 3);
//	return 0;
//}