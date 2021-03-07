//
// Created by Артём Мурашко on 07.03.2021.
//

#include "Room.h"

Room::Room(std::string number, RoomType type) {
    this -> number = number;
    this -> type = type;
    switch (type) {
        case RoomType::classRoom :  accessLevel = Access::green; break;
        case RoomType::conferenceRoom : accessLevel = Access::green; break;

        case RoomType::lectureRoom : accessLevel = Access::yellow; break;
        case RoomType::cabinet : accessLevel = Access::yellow; break;

        case RoomType::directorCabinet : accessLevel = Access::red; break;
    }
}

std::string Room::getNumber() {
    return number;
}

RoomType Room::getType() {
    return type;
}

Access Room::getAccessLevel() {
    return accessLevel;
}

std::string Room::getTypeString() {
    switch (type) {
        case RoomType::classRoom : return "Class room"; break;
        case RoomType::cabinet : return "Cabinet"; break;
        case RoomType::directorCabinet : return "Director cabinet"; break;
        case RoomType::conferenceRoom : return "Conference room"; break;
        case RoomType::lectureRoom : return "Lecture room"; break;
    }
}

void Room::grantAccess(User &user) {
    if (user.getAccessLevel() >= getAccessLevel()) {
        std::cout << std::endl << "User " << user.getName() << " has already access to room " << getNumber() << std::endl;
        return;
    }

    for (const auto& i : grantedAccessUsers) {
        if (i == user.getEmail()) {
            std::cout << std::endl << "User " << user.getName() << " has already access to room " << getNumber() << std::endl;
            return;
        }
    }

    grantedAccessUsers.push_back(user.getEmail());
    std::cout << std::endl << "User " << user.getName() << " was given access to " << getNumber() << " " << getTypeString() << std::endl;
}