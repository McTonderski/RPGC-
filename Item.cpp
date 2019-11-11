//
// Created by Maciej on 11/10/2019.
//

#include "Item.h"

Item::Item(std::string name, int lifetime, int damage) {
    this->name = name;
    this->lifetime = lifetime;
    this->initialLifetime = lifetime;
    this->damage = damage;
}

void Item::decreaseLifetime() {
    this->lifetime--;
}

void Item::repair() {
    this->lifetime = initialLifetime;
}

Item::~Item() {
    std::cout<<"Item: "<<this->name<<" Got destroyed"<<std::endl;
}
