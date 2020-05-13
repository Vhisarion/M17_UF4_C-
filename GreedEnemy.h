#pragma once
#include "BaseEnemy.h"
class GreedEnemy : public BaseEnemy
{
public:

	GreedEnemy();
	GreedEnemy(float custom_life, float custom_attack);
	~GreedEnemy();

	void TakeDamage(float damage) override;
	float getLife();
	float getAttack();
	void Attack(BasePlayer& player);
};

