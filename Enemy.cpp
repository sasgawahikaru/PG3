#include"Enemy.h"
#include<stdio.h>

void (Enemy::* Enemy::pFuncTable[])() =
{
	&Enemy::Approach,
	&Enemy::Shoot,
	&Enemy::GetAway,
};

Enemy::Enemy()
{
	phase_ = 0;
}
Enemy::~Enemy()
{}

void Enemy::Approach()
{
	printf("‹ß‚Ã‚­\n");
}

void Enemy::Shoot()
{
	printf("ŽËŒ‚\n");
}

void Enemy::GetAway()
{
	printf("“¦‚°‚é\n");
}
void Enemy::Update()
{
	printf("phase_:%d\n", phase_);

	(this->*pFuncTable[phase_])();

	phase_++;
	
	if (phase_>2)
		{
			phase_ = 0;
		}
}

void Enemy::Draw()
{
	printf("(enemy Draw)\n");
}
