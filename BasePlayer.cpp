#include "BasePlayer.h"

BasePlayer::BasePlayer() {
	life = 100.0f;
	points = 0.0f;
}

BasePlayer::BasePlayer(float custom_life) {
	life = custom_life;
	points = 0.0f;
}

BasePlayer::BasePlayer(float custom_life, int custom_points) {
	life = custom_life;
	points = custom_points;
}
BasePlayer::~BasePlayer() {

}

void BasePlayer::ReceiveDamage(float damage) {
	life -= damage;
}

void BasePlayer::ApplyDamage(BasePlayer &player, float damage) {
	player.ReceiveDamage(damage);
}

float BasePlayer::getLife() {
	return life;
}

void BasePlayer::losePoints(int amount) {
	points -= amount;
	if (points < 0)
		points = 0;
}

void BasePlayer::gainPoints(int amount) {
	points += amount;
}

void BasePlayer::heal(float amount) {
	life += amount;
}

int BasePlayer::getPoints() {
	return points;
}

