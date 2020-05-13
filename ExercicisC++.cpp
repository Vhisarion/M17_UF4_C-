// ExempleClasse.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "BaseEnemy.h"
#include "EnrageEnemy.h"
#include "ExercicisC++.h"
using namespace std;


int notMain()
{

    BasePlayer player;
    EnrageEnemy rageEnemy;
    player = BasePlayer(300.0f, 0.0f);
    rageEnemy = EnrageEnemy(200, 40);
    cout << "Exercici 4: " << endl;
    cout << "Inicial: Enemy=" << rageEnemy.getLife() << " Player=" << player.getLife() << endl;
    player.ApplyDamage(player, rageEnemy.getAttack());
    cout << "Final: Enemy=" << rageEnemy.getLife() << " Player=" << player.getLife() << endl << flush;
    system("pause");
    return 0;
    
}


