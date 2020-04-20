
#include "DonkeyPlayer.h"

DonkeyPlayer::DonkeyPlayer(const std::string &n) : Player (n) {

}
bron DonkeyPlayer::ruch() {

    return Player::atak(2);
}