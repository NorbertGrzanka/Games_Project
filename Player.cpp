
#include "Player.h"
 Player::Player(const std::string &i) : imie(i)  {
}

bron Player::ruch() {

}

bron Player::atak(int n) {

    switch (n) {
        case 1:
            return bron::KAMIEN;
        case 2:
            return bron::PAPIER;
        case 3:
            return bron::NOZYCE;
        default:
            break;
    }
}
