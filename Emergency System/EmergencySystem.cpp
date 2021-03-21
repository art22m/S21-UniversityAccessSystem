//
// Created by Артём Мурашко on 21.03.2021.
//

#include "EmergencySystem.h"

EmergencySystem::EmergencySystem() {
    this -> emergency = false;
}

bool EmergencySystem::isEmergency() {
    return emergency;
}

void EmergencySystem::setEmergency(bool condition) {
    if (condition == emergency) {
        std::cout << "Error: The system is already" << (condition ? " on\n" : " off\n");
        return;
    }
    emergency = condition;

    if (condition)
        getHelp();
}

// Here you can process the actions of the system
void EmergencySystem::getHelp() {
    std::cout << "*Emergency System calling 911...*\n";
}


