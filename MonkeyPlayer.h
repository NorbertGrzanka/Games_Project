#include "Player.h"
#include <iostream>
#include <string>
#ifndef WIRTUALNE_ZOO_MONKEYPLAYER_H
#define WIRTUALNE_ZOO_MONKEYPLAYER_H


class MonkeyPlayer : public Player {

public:

    MonkeyPlayer(const std::string &i = " MALPA ");
    virtual bron ruch();
};


#endif //WIRTUALNE_ZOO_MONKEYPLAYER_H
