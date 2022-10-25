#include<stdlib.h>
#include<list>
#include<vector>

using namespace std;

int main()
{

	std::list<int>{1, 2, 3};
	//vector<int>b;

	//b.push_back(40);
	//b.push_back(50);
	//b.push_back(77);

	//int size = b.size();
	//for (int i = 0; i < size; i++)
	//{
	//	printf("%d\n", b[i]);
	//}

	system("pause");
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
