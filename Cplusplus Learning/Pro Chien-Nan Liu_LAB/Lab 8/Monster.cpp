#include "Monster.h"
#include "Player.h"
#include <iostream>

using namespace std;

Monster::Monster(std::string _name, int _health, int _damage) : LivingEntity(_name, _health, _damage) { this->getexperience = 0.5*this->getHealth(); }

BossMonster::BossMonster(std::string _name, int _health, int _damage) : Monster(_name, _health, _damage) {}

FlyingMonster::FlyingMonster(std::string _name, int _health, int _damage) : Monster(_name, _health, _damage) {}

GroundMonster::GroundMonster(std::string _name, int _health, int _damage) : Monster(_name, _health, _damage) {}

MagicMonster::MagicMonster(std::string _name, int _health, int _damage) : Monster(_name, _health, _damage) {}

void Monster::attack(Player &player) {
  if(this->isAlive())
  {
    cout << this->name << " attacks for " << this->damage << " damage!" << endl;
    cout << player.getName() << " takes " << this->damage << " damage!" << endl;
    player.takeDamage(this->damage);
    if(player.getHealth() == 0){
          cout<<player.getName()<<" has been defeated!"<<endl;
    }
  }
}

int Monster::getExperience() {
    // Assuming health is a member variable of Monster
    // Calculate experience based on monster's health
    return getexperience;
}
