//
// Created by Artem Murashko on 07.03.2021.
//

#ifndef PSS_HW2_PROFESSOR_H
#define PSS_HW2_PROFESSOR_H

#include "User.h"

class Professor : public User {
public:
    Professor(std::string name, int age, std::string email, std::string alias, int salary, std::string subject, std::string favoriteJoke);

public:
    int getSalary();
    std::string getSubject();
    std::string getFavoriteJoke();
    void getAdditionalInfo();

private:
    int salary;
    std::string subject; // subject taught
    std::string favoriteJoke;
};

#endif //PSS_HW2_PROFESSOR_H
