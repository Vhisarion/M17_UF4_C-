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
}
float LifestealEnemy::getAttack() {
	return BaseEnemy::getAttack();
}

void LifestealEnemy::Attack(BasePlayer &player) {
	player.ReceiveDamage(attack);
	life += attack;
}
