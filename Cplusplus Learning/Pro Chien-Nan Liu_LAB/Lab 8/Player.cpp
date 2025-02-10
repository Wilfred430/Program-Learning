#include "Player.h"
#include <iostream>
using namespace std;

Player::Player(std::string _name, int _health, int _damage) : LivingEntity(_name, _health, _damage), experience(0), level(1) {}

void Player::attack(Monster &monster) {
    cout << name << " attacks for " << damage << " damage!" << endl;
    cout << monster.getName() << " takes " << this->damage << " damage!" << endl;
    monster.takeDamage(damage);
    if (monster.getHealth() == 0) {
      cout<<monster.getName()<<" has been defeated!"<<endl;
      this->gainExperience(monster.getExperience());
    }
}

void Player::gainExperience(int amount) {
    cout << this->name << " gains " << amount << " experience!" << endl;
    this->experience += amount;
    if (experience >= this->level * this->level * 20) {
        this->levelUp();
    }
}

void Player::restoreHealth(int amount) {
    cout << name << " restores " << amount << " health!" << endl;
    health += amount;
}

void Player::levelUp() {
    level++;
    int healthIncrease = level * 20;
    health += healthIncrease;
    //restoreHealth(healthIncrease);
    damage = level * 20;
    cout << name << " levels up to level " << level << "!" << endl;
    //experience = 0;
}

void Player::print() const {
    cout << "\n=== Player Stats ===" << endl;
    cout << "Name: " << name << endl;
    cout << "Health: " << health << endl;
    cout << "Level: " << level << endl;
    cout << "Experience: " << experience << endl;
    cout << "Attack damage: " << damage << endl;
    cout << "===================" << endl << endl;
}

