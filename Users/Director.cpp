//
// Created by Artem Murashko on 07.03.2021.
//

#include "Director.h"

Director::Director(std::string name, int age, std::string email, std::string alias,
                   int salary,  std::string favoriteCafe) : User(name, age, email, alias, Access::red) {
        this -> salary = salary;
        this -> favoriteCafeName = favoriteCafe;
}

int Director::getSalary() {
    return salary;
}

std::string Director::getFavoriteCafeName() {
    return favoriteCafeName;
}

void Director::getAdditionalInfo() {
    std::cout << "\n-------| Additional information for " << getName() << " |-------\n";
    std::cout << "[1] Salary: " << getSalary() << std::endl;
    std::cout << "[2] Favorite Cafe Name: " << getFavoriteCafeName() << std::endl;
}