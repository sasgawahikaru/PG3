#pragma once

class Enemy
{
public:
	Enemy();
	~Enemy();

public:
	void Approach();
	void Shoot();
	void GetAway();

	void Update();
	void Draw();

private:
	static void (Enemy::* pFuncTable[])();
	int phase_;
};