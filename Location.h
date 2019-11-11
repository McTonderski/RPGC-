//
// Created by Maciej on 11/10/2019.
//

#ifndef RPG2_LOCATION_H
#define RPG2_LOCATION_H

#include <iostream>
#include <vector>
#include <memory>
#include "Item.h"


class Location {
private:
    std::vector<std::unique_ptr<Item>> itemsInLocation;
    std::string name;
public:
    Location(std::string name);
    void takeItem();
    void dropItem();
    ~Location();
};


#endif //RPG2_LOCATION_H
