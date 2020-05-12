// ExempleClasse.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "BaseEnemy.h"
#include "EnrageEnemy.h"
#include "BasePlayer.h"

using namespace std;


int main()
{
	BasePlayer player(300.0f);
	EnrageEnemy enemy = EnrageEnemy(200.0f, 40.0f);
    
        std::cout << R"(
.___________.____    ____ .______    _______  _______  __    _______  __    __  .___________.
|           |\   \  /   / |   _  \  |   ____||   ____||  |  /  _____||  |  |  | |           |
`---|  |----` \   \/   /  |  |_)  | |  |__   |  |__   |  | |  |  __  |  |__|  | `---|  |----`
    |  |       \_    _/   |   ___/  |   __|  |   __|  |  | |  | |_ | |   __   |     |  |     
    |  |         |  |     |  |      |  |____ |  |     |  | |  |__| | |  |  |  |     |  |     
    |__|         |__|     | _|      |_______||__|     |__|  \______| |__|  |__|     |__|     
                                                                                             
                                                                       
)" << '\n';

	cout << "Player hp: " << player.getLife() << " - Enemy atk: " << enemy.getAttack() << "\n";

	player.ReceiveDamage(enemy.getAttack());

	cout << "Player hp: " << player.getLife() << " - Enemy hp: " << enemy.getLife() << "\n";
	system("pause");

}


