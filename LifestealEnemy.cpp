#include "LifestealEnemy.h"
LifestealEnemy::LifestealEnemy() {
	BaseEnemy::BaseEnemy();
}

LifestealEnemy::~LifestealEnemy() {
	BaseEnemy::~BaseEnemy();
}

LifestealEnemy::LifestealEnemy(float custom_life, float custom_attack) {
	life = custom_life;
	attack = custom_attack;
}


float LifestealEnemy::getLife() {
	return BaseEnemy::getLife();

}
void LifestealEnemy::TakeDamage(float damage) {
	BaseEnemy::TakeDamage(damage);

	if (life < 50.0f) {
		attack *= 2.0f;
	}
}
float LifestealEnemy::getAttack() {
	return BaseEnemy::getAttack();
}

void LifestealEnemy::Attack(BasePlayer &player) {
	player.receiveDamage(attack);
}
