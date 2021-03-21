//
// Created by Артём Мурашко on 21.03.2021.
//

#include "Guest.h"

Guest::Guest(std::string name, int age, std::string email, std::string alias, std::string organization) : User(name, age, email, alias, Access::blue) {
    this -> organization = organization;
}

std::string Guest::getOrganization() {
    return organization;
}

void Guest::getAdditionalInfo() {
    std::cout << "\n-------| Additional information for " << getName() << " |-------\n";
    std::cout << "[1] Organization name: " << getOrganization() << std::endl;
}