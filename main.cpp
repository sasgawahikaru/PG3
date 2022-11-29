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
		"Nippori","Tabata",
	};

	printf("--- 1970 ---\n");
	for (auto itr = stations.begin(); itr != stations.end(); itr++)
	{
		printf("%s\n", *itr);
	}
	for (auto itr = stations.begin(); itr != stations.end(); itr++)
	{
		//if (*itr == "Tabata")
		if (strcmp( *itr,"Tabata")==0)
		{
			stations.insert(itr, "Nishi-Nippori");
			stations.push_back("Komagome");
			stations.push_back("Sugamo");
			stations.push_back("Otsuka");
			stations.push_back("Ikebukuro");
			stations.push_back("Mejiro");
			stations.push_back("Takadanobaba");
			stations.push_back("Shin-Okubo");
			stations.push_back("Shinjuku");
			stations.push_back("Yoyogi");
			stations.push_back("Harajuku");
			stations.push_back("Shibuya");
			stations.push_back("Ebisu");
			stations.push_back("Meguro");
			stations.push_back("Gotanda");
			stations.push_back("Osaki");
			stations.push_back("Shinagawa");
			stations.push_back("Tamachi");
			stations.push_back("Hamamatsucho");
			stations.push_back("Shimbashi");
			stations.push_back("Yurakucho");
			break;
		}
	}
	/////////////////
	//1971”N"Nishi-Nippori"’Ç‰Á
	//"tabata"‚ð’T‚µ’Ç‰Á‚·‚é
	printf("--- 2019 ---\n");
	for (auto itr = stations.begin(); itr != stations.end(); ++itr)
	{
		printf("%s\n", *itr);
	}
	for (auto itr = stations.begin(); itr != stations.end(); itr++)
	{
		//if (*itr == "Tabata")
		if (strcmp(*itr, "Tabata") == 0)
		{
			break;
		}
	}
	for (auto itr = stations.begin(); itr != stations.end(); itr++)
	{
		if (strcmp(*itr, "Tamachi") == 0)
		{
			itr = stations.insert(itr, "Takanawa-Gateway");
			itr++;
		}
	}
	/////////////////
	//2020"Takanawa-Gateway"’Ç‰Á
	//"Tamachi"‚ð’T‚µ’Ç‰Á‚·‚é
	printf("--- 2022 ---\n");
	for (auto itr = stations.begin(); itr != stations.end(); itr++)
	{
		printf("%s\n", *itr);
	}
	return 0;
}

/*vector<int>e = { 1,2,3 };

vector<int>::iterator it;

it = e.begin();

cout << *it << endl;

it++;

cout << *it << endl;*/

//std::list<int>lst(33, 4);
//std::list<int>::iterator itr;
//itr = lst.begin();
//itr = lst.end();
//itr--;
//itr--;

//std::list<int>lst;
//for (auto itr = lst.begin(); itr != lst.end(); ++itr)
//{
//	std::cout << *itr << "\n";
//}

//list<int>lst{ 114,514,364 };
//lst.push_front(7);
//lst.push_back(777);
//for (int i = 0; i < 5; i++)
//{
//	lst.push_front(i);
//}
//for (int i = 0; i < 5; i++)
//{
//	lst.push_back(i);
//}

//list<int>list{ 1,3,5,7,10 };
//for (std::list<int>::iterator itr = list.begin(); itr != list.end(); ++itr)
//{
//	if (*itr == 3)
//	{
//		itr = list.insert(itr, 0);
//		++itr;
//	}
//}
//printf("%f", list);
