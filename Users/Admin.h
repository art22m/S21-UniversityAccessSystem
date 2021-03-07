//
// Created by Артём Мурашко on 07.03.2021.
//

#ifndef PSS_HW2_ADMIN_H
#define PSS_HW2_ADMIN_H

#include "User.h"

class Admin : public User {
public:
    Admin(std::string name, int age, std::string email, std::string alias, int salary);

public:
    void changeAccessLevel(User& user, Access accessLevel);
    void getAdditionalInfo();
    int getSalary();

private:
    int salary;
};

#endif //PSS_HW2_ADMIN_H
