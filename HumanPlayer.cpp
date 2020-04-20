#include <iostream>
#include "HumanPlayer.h"
#include "Player.h"

 HumanPlayer::HumanPlayer(const std::string &n, const std::string &s) : Player(n), name2(s)
 {
     wybor = 0;
 }
 bron HumanPlayer::ruch () {

     std::cout << "Wybierz Czym Grasz: " << std::endl;
     std::cout << "1. PAPIER " << std::endl;
     std::cout << "2. KAMIEN " << std::endl;
     std::cout << "3. NOZYCE " << std::endl;
     std::cin >> wybor;
         ruchHuman(wybor);

         return Player::atak(wybor);

     }

void HumanPlayer::ruchHuman(int x) const {
    if ((x != 1) and (x != 2) and (x != 3)) {

        std::cout << "Zla opcja. Sproboj pownownie : \n";
exit(0);

    }
}