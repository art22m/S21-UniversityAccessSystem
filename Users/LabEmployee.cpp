//
// Created by Artem Murashko on 07.03.2021.
//

#include "LabEmployee.h"

LabEmployee::LabEmployee(std::string name, int age, std::string email, std::string alias, int salary, std::string labName,
                         std::string favoriteCafeName) : User(name, age, email, alias, Access::green) {
    this -> salary = salary;
    this -> labName = labName;
    this -> favoriteCafeName = favoriteCafeName;
}

int LabEmployee::getSalary() {
    return salary;
}

std::string LabEmployee::getLabName() {
    return labName;
}

std::string LabEmployee::getFavoriteCafeName() {
    return favoriteCafeName;
}

void LabEmployee::getAdditionalInfo() {
    std::cout << "\n-------| Additional information for " << getName() << " |-------\n";
    std::cout << "[1] Salary: " << getSalary() << std::endl;
    std::cout << "[2] Laboratory Name: " << getLabName() << std::endl;
    std::cout << "[3] Favorite Cafe Name: " << getFavoriteCafeName() << std::endl;
}