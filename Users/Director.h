//
// Created by Artem Murashko on 07.03.2021.
//

#ifndef PSS_HW2_DIRECTOR_H
#define PSS_HW2_DIRECTOR_H

#include "User.h"

class Director : public User {
public:
    Director(std::string name, int age, std::string email, std::string alias, int salary, int numberOfDroppedStudents);

public:
    int getSalary();
    int getNumberOfDroppedStudents();
    void getAdditionalInfo();

private:
    int numberOfDroppedStudents;
    int salary;
};

#endif //PSS_HW2_DIRECTOR_H