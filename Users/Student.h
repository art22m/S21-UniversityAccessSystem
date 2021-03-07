//
// Created by Artem Murashko on 07.03.2021.
//

#ifndef PSS_HW2_STUDENT_H
#define PSS_HW2_STUDENT_H

#include "User.h"

class Student : public User {
public:
    Student(std::string name, int age, std::string email, std::string alias, int scholarship, std::string group, double GPA);

public:
    int getScholarship();
    double getGPA();
    std::string getGroup();
    void getAdditionalInfo();

private:
    int scholarship;
    std::string group;
    double GPA;
};

#endif //PSS_HW2_STUDENT_H