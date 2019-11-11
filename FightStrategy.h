//
// Created by Maciej on 11/10/2019.
//

#ifndef RPG2_FIGHTSTRATEGY_H
#define RPG2_FIGHTSTRATEGY_H

#include <random>


class FightStrategy {
private:
    int roundNumber;
    double luck = ((double) rand() / 100.0);

public:
    FightStrategy();
    void nextRound();
    void printRound();
    double getLuck();

};


#endif //RPG2_FIGHTSTRATEGY_H
