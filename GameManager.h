
#ifndef WIRTUALNE_ZOO_GAMEMANAGER_H
#define WIRTUALNE_ZOO_GAMEMANAGER_H


#include "Player.h"

class GameControl
{
    Player *player1;
    Player *player2;
    std::string winner(bron p1, bron p2);
    std::string wybor_broni(bron w);

public:
    GameControl(Player &p1, Player &p2);
    void play();

};




#endif //WIRTUALNE_ZOO_GAMEMANAGER_H
