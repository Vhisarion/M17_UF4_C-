#include "EnrageEnemy.h"
EnrageEnemy::EnrageEnemy() {
	BaseEnemy::BaseEnemy();
}

EnrageEnemy::~EnrageEnemy() {
	BaseEnemy::~BaseEnemy();
}

EnrageEnemy::EnrageEnemy(float custom_life, float custom_attack) {
	life = custom_life;
	attack = custom_attack;
}


float EnrageEnemy::getLife() {
	return BaseEnemy::getLife();

}
void EnrageEnemy::TakeDamage(float damage) {
	BaseEnemy::TakeDamage(damage);

	if (life < 5) {
		attack += 1.0f;
	}
}
float EnrageEnemy::getAttack() {
	return BaseEnemy::getAttack();
}
void EnrageEnemy::Attack(BasePlayer &player) {
	BaseEnemy::Attack(player);
}
