#include <iostream>

#include "FightStrategy.h"

int main() {
    auto fightStrategy = new FightStrategy();
    std::cout<<fightStrategy->getLuck();
    return 0;
}