//
// Created by Артём Мурашко on 21.03.2021.
//

#ifndef PSS_HW2_GUEST_H
#define PSS_HW2_GUEST_H

#include "User.h"

class Guest : public User {
public:
    Guest(std::string name, int age, std::string email, std::string alias, std::string organization);

public:
    std::string getOrganization();
    void getAdditionalInfo();

private:
    std::string organization;

};


#endif //PSS_HW2_GUEST_H
