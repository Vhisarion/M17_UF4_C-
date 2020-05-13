// ExempleClasse.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "BaseEnemy.h"
#include "EnrageEnemy.h"
#include "LifestealEnemy.h"
#include "BasePlayer.h"
#include <Windows.h>
#include <chrono>
#include <conio.h>
#include "GreedEnemy.h"
#include <thread>
#include <mutex>
#include <condition_variable>

using namespace std;

std::ostream& red_on(std::ostream& os)
{
    return os << "\033[0;1;31m";
}

std::ostream& color_off(std::ostream& os)
{
    return os << "\033[0;1;0m";
}

std::ostream& green_on(std::ostream& os)
{
    return os << "\033[0;1;32m";
}

std::ostream& yellow_on(std::ostream& os)
{
    return os << "\033[0;1;33m";
}

std::ostream& purple_on(std::ostream& os)
{
    return os << "\033[0;1;35m";
}

void printMessage(string s, int ms) {
    for (int i = 0; i < s.size(); i++) {
        cout << s[i];
        if (s[i] == '.')
            Sleep(ms + 300);
        else if (s[i] == ',')
            Sleep(ms + 100);
        Sleep(ms);
    }
}
void printMessage(string s) {
    for (int i = 0; i < s.size(); i++) {
        cout << s[i];
        if (s[i] == '.')
            Sleep(400);
        else if (s[i] == ',')
            Sleep(150);
        Sleep(40);
    }
}





int main()
{
    
        cout << R"(
    .___________.____    ____ .______    _______                 _______  __    _______  __    __  .___________.
    |           |\   \  /   / |   _  \  |   ____|               |   ____||  |  /  _____||  |  |  | |           |
    `---|  |----` \   \/   /  |  |_)  | |  |__                  |  |__   |  | |  |  __  |  |__|  | `---|  |----`
        |  |       \_    _/   |   ___/  |   __|                 |   __|  |  | |  | |_ | |   __   |     |  |     
        |  |         |  |     |  |      |  |____                |  |     |  | |  |__| | |  |  |  |     |  |     
        |__|         |__|     | _|      |_______|               |__|     |__|  \______| |__|  |__|     |__|     
                                                                                             
                                                                       
)" << '\n';
        
        
        printMessage("It's another night in your room.\n");
        Sleep(1000);
        printMessage("You don't know for how long you've been debugging this application, but the first rays of sun are sneaking in.\n");
        Sleep(1000);
        printMessage("The letters on the screen start blurring away in front of you, as you lose consciousness and slam your head on the keyboard.\n\n");
        Sleep(1000);
        printMessage("You wake up after an unknown amount of time. Is this... your room?\n");
        Sleep(1000);
        printMessage("N...no, definitely not. But, where are you?\n");
        Sleep(1000);
        printMessage("The room suddenly turns black.\n");
        Sleep(700);
        printMessage("You feel something moving around you, but you can't see anything.\n");
        Sleep(1000);
        printMessage("You hear a voice...\n");
        Sleep(200);
        cout << "\033[0;1;32m";
        printMessage("You feel like you're going to have a bad time.", 100);
        cout << "\033[0m";
        Sleep(1000);
        cout << endl << endl << endl << endl;
        printMessage("Welcome to TypeFight!\n\n");
        Sleep(500);
        printMessage("You will face different enemies. To defeat them, press the key that appears on screen.\n");
        Sleep(1000);
        printMessage("Enemies with the same color have similar special properties, such as "); cout << red_on; printMessage("Lifesteal "); cout << color_off; printMessage("or "); cout << yellow_on; printMessage("Greed"); cout << color_off; printMessage(".\n");
        cout << yellow_on; printMessage("Good luck!"); cout << color_off;
        cout << endl << endl;
        system("pause");
        
        BasePlayer player(10.0f, 0);
        player = BasePlayer(10.0f, 0);
        EnrageEnemy enemyEnrage;
        LifestealEnemy enemyLifesteal;
        GreedEnemy enemyGreed;
        BaseEnemy enemyBase;
        BaseEnemy* enemy;
        char letter;
        int kills = 0;
        long attackTime;
        char input;

        // Time to press key = -log(kills+1)+2   
        
        
        srand(time(NULL));

        // Main game loop
        while (player.getLife() > 0) {
            // Calculate time to press key
            attackTime = long(((-log(kills + 1)) + 2.5)*1000);

            // Generate random enemy
            int n = (rand() % 4);
            switch (n) {
                case 0:
                    enemyBase = BaseEnemy(3, 1);
                    enemy = &enemyBase;
                    printMessage("A normal weak enemy appears!\n");
                    break;
                case 1:
                    enemyEnrage = EnrageEnemy(10, 1);
                    enemy = &enemyEnrage;
                    printMessage("An enraged enemy appears!\n");
                    break;
                case 2:
                    enemyLifesteal = LifestealEnemy(6, 1);
                    enemy = &enemyLifesteal;
                    printMessage("A lifesteal enemy appears!\n");
                    break;
                default:
                    enemyGreed = GreedEnemy(10, 1);
                    enemy = &enemyGreed;
                    printMessage("A greedy enemy appears!\n");
                    break;
            }
            Sleep(1000);
            enemy->setAttack(1);

            
            
            // Battle loop
            while (enemy->getLife() > 0 && player.getLife() > 0) {
                // Prepare timer for attackTime;
                letter = 'a' + rand() % 26;
                cout << letter << "    " << green_on << "HP: " << player.getLife() << "    " << red_on << "HP: " << enemy->getLife() << color_off;
                auto start = chrono::steady_clock::now();
                input = _getch();
                auto end = std::chrono::steady_clock::now();
                long timeElapsed = chrono::duration_cast<chrono::milliseconds>(end - start).count();
                cout << "\r";

                if (timeElapsed > attackTime)
                {
                    enemy->Attack(player);
                    cout << red_on << " Too late! HIT!" << color_off << " - Remaining hp:" << player.getLife() << endl << letter << "\r";
                }
                else if (input == letter) {
                    enemy->TakeDamage(1);
                    cout << green_on << "You HIT the enemy!" << color_off << " - Remaining hp:" << enemy->getLife() << endl;
                }
                else {
                    enemy->Attack(player);
                    cout << red_on << "Wrong key! HIT!" << color_off << " - Remaining hp:" << player.getLife() << endl;
                }
                

            }
            player.gainPoints(1);
            kills++;
            if (enemy->getLife() <= 0) {
                kills++;
                if (kills % 5 == 0) {
                    player.heal(5.0f);
                    cout << green_on << "You've defeated " << kills << " enemies! +5HP" << color_off;
                }
                switch (n) {
                    case 0:
                        printMessage("The normal weak enemy has been defeated!\n");
                        break;
                    case 1:
                        printMessage("The "); cout << purple_on; printMessage("enraged enemy"); cout << color_off;; printMessage(" has been defeated!\n");
                        break;
                    case 2:
                        printMessage("The "); cout << red_on; printMessage(" lifesteal enemy "); cout << color_off; printMessage(" has been defeated!\n");
                        break;
                    default:
                        printMessage("The "); cout << yellow_on; printMessage(" greed enemy "); cout << color_off; printMessage(" has been defeated!\n");
                        break;
                    }
                Sleep(1000);
            }
        }

        cout << endl << endl << red_on << "YOU DIED!" << color_off << endl << "Monsters defeated: " << kills << endl << "Score: " << player.getPoints() << endl << yellow_on << "THANKS FOR PLAYING!" << color_off << endl << endl;

        cout << R"(
    .___________.____    ____ .______    _______                 _______  __    _______  __    __  .___________.
    |           |\   \  /   / |   _  \  |   ____|               |   ____||  |  /  _____||  |  |  | |           |
    `---|  |----` \   \/   /  |  |_)  | |  |__                  |  |__   |  | |  |  __  |  |__|  | `---|  |----`
        |  |       \_    _/   |   ___/  |   __|                 |   __|  |  | |  | |_ | |   __   |     |  |     
        |  |         |  |     |  |      |  |____                |  |     |  | |  |__| | |  |  |  |     |  |     
        |__|         |__|     | _|      |_______|               |__|     |__|  \______| |__|  |__|     |__|     
                                                                                             
                                                                       
)" << '\n';

        system("pause");

}




