#pragma once

class BasePlayer
{

protected:
	float life;

public:

	BasePlayer();
	BasePlayer(float custom_life);
	~BasePlayer();
	virtual void ReceiveDamage(float damage); //Metode virtual
	virtual void ApplyDamage(BasePlayer &player, float damage);
	float getLife();

};

