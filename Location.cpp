//
// Created by Maciej on 11/10/2019.
//

#include "Location.h"

Location::Location(std::string name) {
    this->name = move(name);
}

void Location::takeItem() {

}

void Location::dropItem() {

}

Location::~Location() {
    std::cout<<"Location:" <<this->name<<" is no longer available"<<std::endl;
}
