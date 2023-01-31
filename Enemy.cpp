#include"Enemy.h"
#include<stdio.h>

bool Enemy::isAllAlive = false;
Enemy::Enemy()
{
	isAlive = true;
	isAllAlive = true;
}

Enemy::~Enemy()
{
}

bool Enemy::IsAlive()
{
	return isAlive;
}

void Enemy::SetDeath()
{
	isAlive = false;
	isAllAlive = false;
}

void Enemy::Update()
{
	if (isAllAlive==false)
	{
		isAlive = false;

	}
}

void Enemy::Draw()
{
	if (IsAlive())
	{
		printf("敵の表示\n");
	}
	if(isAlive==false)
	{
		printf("死んでいる\n");
	}
}
