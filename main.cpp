
#include "GameManager.h"
#include "ElephantPlayer.h"
#include "DonkeyPlayer.h"
#include "MonkeyPlayer.h"
#include "HumanPlayer.h"
int main()
{
    HumanPlayer czlowiek("Jendrzej ");
    ElephantPlayer slon ("Dumbo") ;
    DonkeyPlayer osiol;
    MonkeyPlayer malpa;
    GameControl mgr(osiol,czlowiek );
    mgr.play();
}