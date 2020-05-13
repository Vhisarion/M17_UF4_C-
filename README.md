# TYPE FIGHT

### Funcionament

El joc comença amb una petita historieta, i seguidament s'expliquen les normes del joc.

Consisteix en una sèrie de combats en els que el jugador va guanyant punts cada cop que derrota un enemic. 
Si se li acaba la vida, perd i es mostren els resultats a la pantalla.
Cada 5 enemics derrotats, el jugador es cura 5 punts de vida.

El sistema d'atac constiteix en premer la tecla generada aleatoriament que apareix a la pantalla.
El jugador té un temps determinat per realitzar el seu atac, si tarda massa, l'enemic l'ataca i perd punts de vida.
Si prem la tecla incorrecte, també perd un punt de vida.

Existeixen diferents enemics:

##### Base Enemy
Enemic bàsic, no té res d'especial.
Atk: 1
Hp: 3

##### Lifesteal Enemy
Cada cop que fa mal al player, ell també es cura.
Atk: 1
Hp: 6

##### Greedy Enemy
Cada cop que fa mal al player, li resta 1 punt de la puntuació.
Atk: 1
Hp: 10

##### Enrage Enemy
Enemic enfadat, cada cop que rep mal quan està a manys de la meitat de la vida, guanya +1 d'atac.
Atk: 1
Hp: 10


Per calcular el temps que tens per premer la tecla, s'utilitza la funció següent on x = nombre d'enemics derrotats

![Formula per calcular el temps d'atac](https://i.imgur.com/kNJ6hMh.png)
