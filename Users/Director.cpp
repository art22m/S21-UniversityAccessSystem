//
// Created by Artem Murashko on 07.03.2021.
//

#include "Director.h"

Director::Director(std::string name, int age, std::string email, std::string alias,
                   int salary, int numberOfDroppedStudents) : User(name, age, email, alias, Access::red) {
        this -> salary = salary;
        this -> numberOfDroppedStudents = numberOfDroppedStudents;
}

int Director::getSalary() {
    return salary;
}

int Director::getNumberOfDroppedStudents() {
    return numberOfDroppedStudents;
}

void Director::getAdditionalInfo() {
    std::cout << "\n-------| Additional information for " << getName() << " |-------\n";
    std::cout << "[1] Salary: " << getSalary() << std::endl;
    std::cout << "[2] Number of dropped students: " << getNumberOfDroppedStudents() << std::endl;
}