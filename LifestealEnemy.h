#pragma once
#include "BaseEnemy.h"
class LifestealEnemy : public BaseEnemy
{
public:

	LifestealEnemy();
	LifestealEnemy(float custom_life, float custom_attack);
	~LifestealEnemy();

	void TakeDamage(float damage) override;
	float getLife();
	float getAttack();
	void Attack(BasePlayer &player);
};

