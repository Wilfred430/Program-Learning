#include "LivingEntity.h"
#include <iostream>
using namespace std;
LivingEntity::LivingEntity(std::string _name, int _health,int _damage):name(_name), health( _health), damage(_damage){}

bool LivingEntity::takeDamage(int damage) {
	this->health -= damage;
   int a = this->getHealth();
   if(a <= 0){
     this->health = 0;
   	 return 0;
   }else{
   	return 1;
   }
}

bool LivingEntity::isAlive() {
	if(this->getHealth() <= 0){
		return false;
	}else{
		return true;
	}
}


std::string LivingEntity::getName() const {
    return this->name;
}
int LivingEntity::getHealth()const{
    return this->health;
}
void LivingEntity::print()const{
std::cout << "\n=== Monster Stats ===" << std::endl;
    std::cout << "Name: " << name<< std::endl;
    std::cout << "Health: " <<health<< std::endl;
     cout<<"====================="<<endl<<endl;}