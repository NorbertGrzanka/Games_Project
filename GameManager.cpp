#include <iostream>
#include "GameManager.h"

GameControl::GameControl(Player &p1, Player &p2)
        : player1(&p1), player2(&p2)
{
}
std::string GameControl::wybor_broni(bron b)
{
    if (b == bron ::PAPIER) return "papier";
    if (b == bron::KAMIEN) return "kamien";
    if (b == bron::NOZYCE) return "nozyce";

}

void GameControl::play()
{
    std::cout<<"\n=================Gra Ze Zwierzakami================="<<std::endl;
    bron p1 = player1->ruch();
    bron p2 = player2->ruch();
    std::cout << "W grze bierze udzial " << player1->name() << " i " << player2->name() << std::endl;
    std::cout << "Gracz " << player1->name() << " wybral " << wybor_broni(p1) << std::endl;
    std::cout << "Gracz " << player2->name() << " wybral " << wybor_broni(p2) << std::endl;
    if (winner(p1, p2) == "REMIS")
    {
        std::cout << "REMIS \n";
    }
    else
    {
        std::cout << "Gra konczy sie zwyciestwem " << winner(p1, p2) << std::endl;
    }
}
std::string GameControl::winner(bron p1, bron p2) {
    {
        switch (p1) {
            case bron::PAPIER: {
                if (p2 == bron::PAPIER) return "REMIS";
                if (p2 == bron::KAMIEN) return player1->name();
                if (p2 == bron::NOZYCE) return player2->name();

            }
                break;
            case bron::KAMIEN: {
                if (p2 == bron::PAPIER) return player2->name();
                if (p2 == bron::KAMIEN) return "REMIS";
                if (p2 == bron::NOZYCE) return player1->name();

            }
                break;
            case bron::NOZYCE: {
                if (p2 == bron::PAPIER)  return player1->name();
                if (p2 == bron::KAMIEN) return player2->name();
                if (p2 == bron::NOZYCE) return "REMIS";
            }
                break;
            default:
                break;
        }
    }
}
