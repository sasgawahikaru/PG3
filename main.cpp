#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

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

//template<typename Type>
//Type add(Type a, Type b) {
//	return static_cast<Type>(a + b);
//}
//template<typename Type>
//Type Min(Type a, Type b) {
//	if (a < b)
//	{
//		return static_cast<Type>(a);
//	}
//	if (a > b)
//	{
//		return static_cast<Type>(b);
//	}
//}
//template<>
//char Min<char>(char a, char b)
//{
//	return printf("�����ȊO�͓��͂ł��܂���");
//}
//int main() {
//
//	printf("%d\n", Min<int>(3, 4));
//	printf("%f\n", Min<float>(3.2f, 4.2f));
//	printf("%c\n", Min<char>('a','a'));
//	printf("%f\n", Min<double>(3.2, 4.2));
//	return 0;
//}
