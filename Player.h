#include <iostream>
#include <string>
#ifndef WIRTUALNE_ZOO_PLAYER_H
#define WIRTUALNE_ZOO_PLAYER_H

enum bron {KAMIEN, NOZYCE,  PAPIER };
class Player
{
    std::string imie;

public:
    bron atak (int n);
    explicit Player(const std::string &i = " imie ");
    virtual bron ruch() ;
    std::string name()  {
        return imie;
    }

};

#endif
