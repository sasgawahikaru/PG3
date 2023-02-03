#include <stdio.h>
#include "Circle.h"
#include "Rectangle.h"
int main()
{
//	Circle circle;

//	circle.size();
//	circle.draw();

	IShape* shape[5]{};
	shape[0] = new Circle();
	shape[1] = new Circle();
	shape[2] = new Rectangle();
	shape[3] = new Circle();
	shape[4] = new Rectangle();
	for (int i = 0; i < 5; i++)
	{
		shape[i]->size();
		shape[i]->draw();
	}
	for (auto p : shape)
	{
		delete p;
	}
	return 0;

}
