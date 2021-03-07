//
// Created by Artem Murashko on 07.03.2021.
//

#ifndef PSS_HW2_LABEMPLOYEE_H
#define PSS_HW2_LABEMPLOYEE_H

#include "User.h"

class LabEmployee : public User {
public:
    LabEmployee(std::string name, int age, std::string email, std::string alias, int salary, std::string labName, std::string favoriteCafeName);

public:
    int getSalary();
    std::string getLabName();
    std::string getFavoriteCafeName();
    void getAdditionalInfo();

private:
    int salary;
    std::string labName; // Name of laboratory
    std::string favoriteCafeName;
};

#endif //PSS_HW2_LABEMPLOYEE_H
