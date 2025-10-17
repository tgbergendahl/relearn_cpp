#include "player.h"
#include <iostream>

int main() {
    Player ronaldo("Cristiano Ronaldo", "Real Madrid", "Striker", 36);
    ronaldo.displayInfo();
    std::cout << std::endl;
    ronaldo.setTeam("Manchester United");
    ronaldo.nextYear();
    ronaldo.setPosition("LW");
    ronaldo.displayInfo();
}