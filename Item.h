//
// Created by Maciej on 11/10/2019.
//

#ifndef RPG2_ITEM_H
#define RPG2_ITEM_H

#include <iostream>

class Item {
private:
    std::string name;
    int initialLifetime;
    int lifetime;
    int damage;
public:
    Item(std::string name, int lifetime, int damage);
    void decreaseLifetime();
    void repair();
    ~Item();
};


#endif //RPG2_ITEM_H
