//
// Created by Artem Murashko on 07.03.2021.
//

#include "Student.h"

Student::Student(std::string name, int age, std::string email, std::string alias, int scholarship,
                 std::string group, double GPA) : User(name, age, email, alias, Access::green) {
    this -> scholarship = scholarship;
    this -> group = group;
    this -> GPA = GPA;
}

int Student::getScholarship() {
    return scholarship;
}

std::string Student::getGroup() {
    return group;
}

double Student::getGPA() {
    return GPA;
}

void Student::getAdditionalInfo() {
    std::cout << "\n-------| Additional information for " << getName() << " |-------\n";
    std::cout << "[1] Scholarship: " << getScholarship() << std::endl;
    std::cout << "[2] Group Number: " << getGroup() << std::endl;
    std::cout << "[3] GPA: " << getGPA() << std::endl;
}