// ExempleClasse.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "BaseEnemy.h"
#include "EnrageEnemy.h"
#include "BasePlayer.h"
#include <Windows.h>
#include <chrono>

using namespace std;


int main()
{
	BasePlayer player(10.0f);
	EnrageEnemy enemy = EnrageEnemy(200.0f, 40.0f);
    string intro1 = "It's another night in your room. I don't know for how long I've been debugging this application, but the first rays of sun sneak into my room.";
    
        cout << R"(
    .___________.____    ____ .______    _______                 _______  __    _______  __    __  .___________.
    |           |\   \  /   / |   _  \  |   ____|               |   ____||  |  /  _____||  |  |  | |           |
    `---|  |----` \   \/   /  |  |_)  | |  |__                  |  |__   |  | |  |  __  |  |__|  | `---|  |----`
        |  |       \_    _/   |   ___/  |   __|                 |   __|  |  | |  | |_ | |   __   |     |  |     
        |  |         |  |     |  |      |  |____                |  |     |  | |  |__| | |  |  |  |     |  |     
        |__|         |__|     | _|      |_______|               |__|     |__|  \______| |__|  |__|     |__|     
                                                                                             
                                                                       
)" << '\n';

        string s = "It's another night in your room. I don't know for how long I've been debugging this application, but the first rays of sun sneak into my room.";

        for (int i = 0; i < s.size(); i++) {
            cout << s[i];
            Sleep(10);
        }



        //cout << "It's another night in your room. I don't know for how long I've been debugging this application, but the first rays of sun sneak into my room." << endl;
        
        Sleep(5000);

        cout << "The letters on the screen start blurring away in front of me, as I lose control and slam my head on the keyboard. " << endl;

        Sleep(3000);

        cout << R"(
            
              __,aaPPPPPPPPaa,__
          ,adP"""'          `""Yb,_
       ,adP'                     `"Yb,
     ,dP'     ,aadPP"""""YYba,_     `"Y,
    ,P'    ,aP"'            `""Ya,     "Y,
   ,P'    aP'     _________     `"Ya    `Yb,
  ,P'    d"    ,adP""""""""Yba,    `Y,    "Y,
 ,d'   ,d'   ,dP"            `Yb,   `Y,    `Y,
 d'   ,d'   ,d'    ,dP""Yb,    `Y,   `Y,    `b
 8    d'    d'   ,d"      "b,   `Y,   `8,    Y,
 8    8     8    d'    _   `Y,   `8    `8    `b
 8    8     8    8     8    `8    8     8     8
 8    Y,    Y,   `b, ,aP     P    8    ,P     8
 I,   `Y,   `Ya    """"     d'   ,P    d"    ,P
 `Y,   `8,    `Ya         ,8"   ,P'   ,P'    d'
  `Y,   `Ya,    `Ya,,__,,d"'   ,P'   ,P"    ,P
   `Y,    `Ya,     `""""'     ,P'   ,d"    ,P'
    `Yb,    `"Ya,_          ,d"    ,P'    ,P'
      `Yb,      ""YbaaaaaadP"     ,P'    ,P'   
        `Yba,                   ,d'    ,dP'    
           `"Yba,__       __,adP"     dP"
               `"""""""""""""'
            )" << endl;


	

}


