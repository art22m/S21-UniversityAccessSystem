//
// Created by Артём Мурашко on 07.03.2021.
//

#include "User.h"

User::User(std::string name, int age, std::string email, std::string alias, Access accessLevel) {
    this -> name = name;
    this -> age = age;
    this -> email = email;
    this -> alias = alias;
    this -> accessLevel = accessLevel;
}

std::string User::getName() {
    return name;
}

std::string User::getEmail() {
    return email;
}

std::string User::getAlias() {
    return alias;
}

int User::getAge() {
    return age;
}

void User::getMainInfo() {
    std::cout <<  "\n-------| Information |-------\n" <<
           "(1) Name: " << getName() << "\n" <<
           "(2) Age: " << std::to_string(getAge()) << "\n" <<
           "(3) Email: " << getEmail() << "\n" <<
           "(4) Telegram alias: " << getAlias() << "\n" <<
           "(5) Access level: " << getAccessLevelString() << "\n";
}

std::string User::getAccessLevelString() {
    switch (getAccessLevel()) {
        case Access::no_level :
            return "NO LEVEL";
        case Access::blue :
            return "BLUE";
        case Access::green :
            return "GREEN";
        case Access::yellow :
            return "YELLOW";
        case Access::red :
            return "RED";
    }
}

Access User::getAccessLevel() {
    return accessLevel;
}