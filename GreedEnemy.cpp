#include "GreedEnemy.h"
GreedEnemy::GreedEnemy() {
	BaseEnemy::BaseEnemy();
}

GreedEnemy::~GreedEnemy() {
	BaseEnemy::~BaseEnemy();
}

GreedEnemy::GreedEnemy(float custom_life, float custom_attack) {
	life = custom_life;
	attack = custom_attack;
}


float GreedEnemy::getLife() {
	return BaseEnemy::getLife();

}
void GreedEnemy::TakeDamage(float damage) {
	BaseEnemy::TakeDamage(damage);
}
float GreedEnemy::getAttack() {
	return BaseEnemy::getAttack();
}

void GreedEnemy::Attack(BasePlayer& player) {
	player.ReceiveDamage(attack);
	player.losePoints(1);
}
