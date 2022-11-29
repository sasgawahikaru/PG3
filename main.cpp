#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<functional>
#include<vector>
#include<list>
#include<string>
using namespace std;

int main()
{

	//std::list<int>list{ 1,3,5,7,10 };
	//for (std::list<int>::iterator itr = list.begin(); itr != list.end(); ++itr)
	//{
	//	if (*itr == 3) {
	//		itr = list.insert(itr, 0);
	//		++itr;
	//	}
	//	printf("%d\n", *itr);
	//}
	//printf("%d\n", list);

	std::list<const char *>stations =
	{
		"Tokyo","Kanda","Akihabara",
		"Okachimachi","Ueno","Uguisudani",
		"Nippori","Tabata","Komagome","Sugamo",
		"Otsuka","Ikebukuro","Mejiro","Takadanobaba",
		"Shin-Okubo","Shinjuku","Yoyogi","Harajuku",
		"Shibuya","Ebisu","Meguro","Gotanda",
		"Osaki","Shinagawa","Tamachi","Hamamatsucho",
		"Shimbashi","Yurakucho"

	};
	printf("--- 1970 ---\n");
	for (auto itr = stations.begin(); itr != stations.end(); itr++)
	{
		printf("%s\n", *itr);
	}
	/////////////////
	//1971”N"Nishi-Nippori"’Ç‰Á
	//"tabata"‚ð’T‚µ’Ç‰Á‚·‚é
	for (auto itr = stations.begin(); itr != stations.end(); itr++)
	{
		if (strcmp(*itr, "Tabata") == 0)
		{
			stations.insert(itr, "Nishi-Nippori");

			break;
		}
	}
	printf("--- 2019 ---\n");
	for (auto itr = stations.begin(); itr != stations.end(); ++itr)
	{
		printf("%s\n", *itr);
	}
	/////////////////
	//2020"Takanawa-Gateway"’Ç‰Á
	//"Tamachi"‚ð’T‚µ’Ç‰Á‚·‚é

	for (auto itr = stations.begin(); itr != stations.end(); itr++)
	{
		if (strcmp(*itr, "Tamachi") == 0)
		{
			itr = stations.insert(itr, "Takanawa-Gateway");
			itr++;
		}
	}
	printf("--- 2022 ---\n");
	for (auto itr = stations.begin(); itr != stations.end(); itr++)
	{
		printf("%s\n", *itr);
	}
	return 0;
}
