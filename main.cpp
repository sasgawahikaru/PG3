#include<stdio.h>

int Recursive(int n) {
	if (n <= 1) {
		return 1;
	}
	return (n * 2 - 50);
}

int main() {
	int n = 100;
	int result;


	result = Recursive(n);
	printf("%d‚ÌŠKæ = %d\n", n,result);

	return (0);
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
//	return printf("”šˆÈŠO‚Í“ü—Í‚Å‚«‚Ü‚¹‚ñ");
//}
//int main() {
//
//	printf("%d\n", Min<int>(3, 4));
//	printf("%f\n", Min<float>(3.2f, 4.2f));
//	printf("%c\n", Min<char>('a','a'));
//	printf("%f\n", Min<double>(3.2, 4.2));
//	return 0;
//}
