//
// Created by Artem Murashko on 07.03.2021.
//

#ifndef PSS_HW2_USER_H
#define PSS_HW2_USER_H

#include <string>
#include <iostream>
#include "../AccessLevels/Access.h"

class User {
protected:
    User(std::string name, int age, std::string email, std::string alias, Access accessLevel);

public:
    std::string getName();
    std::string getEmail();
    std::string getAlias();
    std::string getAccessLevelString();
    void getMainInfo();
    int getAge();
    Access getAccessLevel();

private:
    std::string name;
    std::string email;
    std::string alias;
    int age;
    Access accessLevel;

    friend class Admin; // give access to all fields of User class for Admin class
};

#endif //PSS_HW2_USER_H