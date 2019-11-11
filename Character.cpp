//
// Created by Maciej on 11/10/2019.
//

#include "Character.h"

std::string Character::getInfo() {
    ///todo print Character informations
    return "aaa";
}

Character::Character() {
    ///todo remember that it's all abstract
}

void Character::manipulateHP(int amount) {
    this->hp += amount;
}

bool Character::isDead() {
    return this->hp <= 0;
}

void Character::pickItem() {

}

void Character::dropItem() {

}

void Character::printInventory() {

}
