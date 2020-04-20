#include "Player.h"
#ifndef WIRTUALNE_ZOO_HUMANPLAYER_H
#define WIRTUALNE_ZOO_HUMANPLAYER_H


class HumanPlayer : public Player {

std::string name2;
int wybor ;

public:

    void ruchHuman (int x) const;
    HumanPlayer(const std::string &n = "Imie ",const std::string &s = "2 Imie");
    virtual bron ruch();

};


#endif //WIRTUALNE_ZOO_HUMANPLAYER_H
