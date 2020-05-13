#pragma once
#include "BaseEnemy.h"
class EnrageEnemy : public BaseEnemy
{
public:

	EnrageEnemy();
	EnrageEnemy(float custom_life, float custom_attack);
	~EnrageEnemy();

	void TakeDamage(float damage) override;
	float getLife();
	float getAttack();
	void Attack(BasePlayer &player);
};

