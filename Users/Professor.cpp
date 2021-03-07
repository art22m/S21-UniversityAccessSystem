//
// Created by Artem Murashko on 07.03.2021.
//

#include "Professor.h"

Professor::Professor(std::string name, int age, std::string email, std::string alias, int salary, std::string subject,
                     std::string favoriteJoke) : User(name, age, email, alias, Access::yellow) {
    this -> salary = salary;
    this -> subject = subject;
    this -> favoriteJoke = favoriteJoke;
}

int Professor::getSalary() {
    return salary;
}

std::string Professor::getSubject() {
    return subject;
}

std::string Professor::getFavoriteJoke() {
    return favoriteJoke;
}

void Professor::getAdditionalInfo() {
    std::cout << "\n-------| Additional information for " << getName() << " |-------\n";
    std::cout << "[1] Salary: " << getSalary() << std::endl;
    std::cout << "[2] Subject taught: " << getSubject() << std::endl;
    std::cout << "[3] Favorite Joke: " << getFavoriteJoke() << std::endl;
}