
#ifndef WIRTUALNE_ZOO_DONKEYPLAYER_H
#define WIRTUALNE_ZOO_DONKEYPLAYER_H


#include "Player.h"

class DonkeyPlayer : public Player  {

public:
    DonkeyPlayer(const std::string &i = " OSIOL ");
    virtual bron ruch();

};


#endif //WIRTUALNE_ZOO_DONKEYPLAYER_H
