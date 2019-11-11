//
// Created by Maciej on 11/10/2019.
//

#include "FightStrategy.h"

double FightStrategy::getLuck() {
    return this->luck;
}

void FightStrategy::nextRound() {
    this->roundNumber++;
}

FightStrategy::FightStrategy() {
    this->roundNumber = 0;
}

void FightStrategy::printRound() {
//todo print characters information using statistics;
}
