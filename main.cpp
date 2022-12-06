#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<functional>
#include<vector>
#include<list>
#include<string>
//using namespace std;

typedef struct cell {
	int val;
	struct cell* next;
}CELL;


void create(CELL* list, int val)
{

	CELL* newCell;

	newCell = (CELL*)malloc(sizeof(CELL));

	newCell->val = val;
	newCell->next = nullptr;

	newCell->next = nullptr;
	while (list->next != nullptr) {
		list = list->next;
	}
	list->next = newCell;
}
void index(CELL* list) {
	while (list->next != nullptr) {
		list = list->next;
		printf("%d\n", list->val);
	}
}

int main()
{
	int val;
	CELL head;
	head.next = nullptr;

	while (true)
	{
		printf("D‚«‚È”Žš‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
		scanf_s("%d", &val);
		printf("\n");

		create(&head, val);

		index(&head);
	}
	//	printf("%d",val);
	return 0;
}















//typedef struct cell
//{
//	char str[8];
//	struct cell* next;
//}CELL;
//
//void create();
//void index();
//
//int main()
//{
//	char str[8];
//	CELL head;
//	head.next = nullptr;
//	while (true)
//	{
//		scanf_s("%s", str, 8);
//
//		void create(CELL * endCell, const char* buf)
//		{
//			CELL* newCell;
//
//			newCell->str = (CELL*)malloc(sizeof(CELL));
//			strcpy_s(newCell->str, 8, buf);
//
//			newCell->str->head.next = nullptr;
//			while (endCell->head.next != nullptr) {
//				endCell->ptr = endCell->head.next;
//			}
//			endCell->str = newCell->str;
//		}
////			create(&head, val);
//
////		index(&head);
//	}
//	return 0;
//}









//int main()
//{
//
//	//std::list<int>list{ 1,3,5,7,10 };
//	//for (std::list<int>::iterator itr = list.begin(); itr != list.end(); ++itr)
//	//{
//	//	if (*itr == 3) {
//	//		itr = list.insert(itr, 0);
//	//		++itr;
//	//	}
//	//	printf("%d\n", *itr);
//	//}
//	//printf("%d\n", list);
//
//	std::list<const char *>stations =
//	{
//		"Tokyo","Kanda","Akihabara",
//		"Okachimachi","Ueno","Uguisudani",
//		"Nippori","Tabata","Komagome","Sugamo",
//		"Otsuka","Ikebukuro","Mejiro","Takadanobaba",
//		"Shin-Okubo","Shinjuku","Yoyogi","Harajuku",
//		"Shibuya","Ebisu","Meguro","Gotanda",
//		"Osaki","Shinagawa","Tamachi","Hamamatsucho",
//		"Shimbashi","Yurakucho"
//
//	};
//	printf("--- 1970 ---\n");
//	for (auto itr = stations.begin(); itr != stations.end(); itr++)
//	{
//		printf("%s\n", *itr);
//	}
//	/////////////////
//	//1971”N"Nishi-Nippori"’Ç‰Á
//	//"tabata"‚ð’T‚µ’Ç‰Á‚·‚é
//	for (auto itr = stations.begin(); itr != stations.end(); itr++)
//	{
//		if (strcmp(*itr, "Tabata") == 0)
//		{
//			stations.insert(itr, "Nishi-Nippori");
//
//			break;
//		}
//	}
//	printf("--- 2019 ---\n");
//	for (auto itr = stations.begin(); itr != stations.end(); ++itr)
//	{
//		printf("%s\n", *itr);
//	}
//	/////////////////
//	//2020"Takanawa-Gateway"’Ç‰Á
//	//"Tamachi"‚ð’T‚µ’Ç‰Á‚·‚é
//
//	for (auto itr = stations.begin(); itr != stations.end(); itr++)
//	{
//		if (strcmp(*itr, "Tamachi") == 0)
//		{
//			itr = stations.insert(itr, "Takanawa-Gateway");
//			itr++;
//		}
//	}
//	printf("--- 2022 ---\n");
//	for (auto itr = stations.begin(); itr != stations.end(); itr++)
//	{
//		printf("%s\n", *itr);
//	}
//	return 0;
//}



//
//int main()
//{
//
//	std::list<const char *>food =
//	{"banana","apple","orange"};
//	printf("--- 1970 ---\n");
//	for (auto itr = food.begin(); itr != food.end(); itr++)
//	{
//		printf("%s\n", *itr);
//	}
//	/////////////////
//	//1971”N"Nishi-Nippori"’Ç‰Á
//	//"tabata"‚ð’T‚µ’Ç‰Á‚·‚é
//	//for (auto itr = stations.begin(); itr != stations.end(); itr++)
//	//{
//	//	if (strcmp(*itr, "Tabata") == 0)
//	//	{
//	//		stations.insert(itr, "Nishi-Nippori");
//
//	//		break;
//	//	}
//	//}
//	return 0;
//}
