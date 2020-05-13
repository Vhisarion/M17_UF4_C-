#pragma once

class BasePlayer
{

protected:
	float life;
	int points;

public:

	BasePlayer();
	BasePlayer(float custom_life, int custom_points);
	~BasePlayer();
	virtual void ReceiveDamage(float damage); //Metode virtual
	virtual void ApplyDamage(BasePlayer &player, float damage);
	float getLife();
	void losePoints(int amount);
	void gainPoints(int amount);
	void heal(float amount);
	int getPoints();
};

