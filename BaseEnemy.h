#pragma once
#include "BasePlayer.h"

class BaseEnemy
{

protected: 
	float life;
	float attack;

public:

	BaseEnemy();
	BaseEnemy(float custom_life, float custom_attack);
	~BaseEnemy();
	virtual void TakeDamage(float damage); //Metode virtual
	 float getLife();
	 float getAttack();
	 void Attack(BasePlayer &player);
};

