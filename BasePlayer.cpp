#include "BasePlayer.h"

BasePlayer::BasePlayer() {
	life = 100.0f;
}

BasePlayer::BasePlayer(float custom_life) {
	life = custom_life;
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

