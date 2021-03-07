//
// Created by Артём Мурашко on 07.03.2021.
//

#include "Admin.h"

Admin::Admin(std::string name, int age, std::string email, std::string alias, int salary) : User(name, age, email, alias, Access::red) {
    this -> salary = salary;
}

int Admin::getSalary() {
    return salary;
}

void Admin::changeAccessLevel(User &user, Access accessLevel) {
    std::cout << std::endl << getName() << " changed access from " << user.getAccessLevelString();
    user.accessLevel = accessLevel;
    std::cout << " to " << user.getAccessLevelString() << " for " << user.getName() << std::endl;
}

void Admin::getAdditionalInfo() {
    std::cout << "\n-------| Additional information for " << getName() << " |-------\n";
    std::cout << "[1] Salary: " << getSalary() << std::endl;
}

