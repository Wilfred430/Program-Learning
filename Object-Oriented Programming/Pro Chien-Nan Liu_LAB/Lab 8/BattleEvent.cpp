#include "BattleEvent.h"
#include "Player.h"
#include <iostream>
using namespace std;
void BattleEvent::start(Player &player, Monster &monster) {
    int monsterInitialHealth;
     monsterInitialHealth = monster.getHealth();
    while (player.isAlive() && monster.isAlive()) {
    monster.print();
    player.print();
    player.attack(monster);
    monster.attack(player);
    }
}