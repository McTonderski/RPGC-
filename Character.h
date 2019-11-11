//
// Created by Maciej on 11/10/2019.
//

#ifndef RPG2_CHARACTER_H
#define RPG2_CHARACTER_H

#include <iostream>
#include <vector>
#include <memory>


class Character {
private:
    int hp;
    int mp;
    int money;
    int speed;
    int strength;
    std::vector<std::unique_ptr<int>> inventory;

public:
    Character();
    virtual std::string getInfo();
    virtual void manipulateHP(int amount);
    virtual bool isDead();
    virtual void pickItem();
    virtual void dropItem();
    virtual void printInventory();
};


#endif //RPG2_CHARACTER_H
