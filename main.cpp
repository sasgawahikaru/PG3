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
//	return printf("数字以外は入力できません");
//}
//int main() {
//
//	printf("%d\n", Min<int>(3, 4));
//	printf("%f\n", Min<float>(3.2f, 4.2f));
//	printf("%c\n", Min<char>('a','a'));
//	printf("%f\n", Min<double>(3.2, 4.2));
//	return 0;
//}
