#include <ctime>
#include "ElephantPlayer.h"
#include <iostream>
ElephantPlayer::ElephantPlayer(const std::string &n): Player(n){
}

bron ElephantPlayer::ruch() {

int i = rand () % 10 + 1 ;
if(i == 1 or i == 2 )
    return atak(1);
else if (i>=3 and i<=6)
    return atak(2);
else if (i>=7 and i<=10)
    return atak(3);

}