//
// Created by Artem Murashko on 07.03.2021.
//

#ifndef PSS_HW2_DIRECTOR_H
#define PSS_HW2_DIRECTOR_H

#include "User.h"

class Director : public User {
public:
    Director(std::string name, int age, std::string email, std::string alias, int salary, std::string favoriteCafe);

public:
    int getSalary();
    std::string getFavoriteCafeName();
    void getAdditionalInfo();
private:
    int salary;
    std::string favoriteCafeName;
};

#endif //PSS_HW2_DIRECTOR_H
