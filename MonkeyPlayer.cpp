#include <ctime>
#include "MonkeyPlayer.h"

MonkeyPlayer::MonkeyPlayer(const std::string &n) : Player(n) {
srand(time(NULL));
}

bron MonkeyPlayer::ruch() {
int wybiera = rand () % 3 + 1;

return Player::atak(wybiera);
}