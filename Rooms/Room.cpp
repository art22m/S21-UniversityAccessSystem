//
// Created by Artem Murashko on 07.03.2021.
//

#include "Room.h"

Room::Room(std::string number, RoomType type) {
    this -> number = number;
    this -> type = type;

    // Assign the access level depending on the type of room
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

Access Room::getAccessLevel() {
    return accessLevel;
}

RoomType Room::getType() {
    return type;
}

std::string Room::getTypeString() {
    switch (getType()) {
        case RoomType::classRoom : return "Class room";
        case RoomType::cabinet : return "Cabinet";
        case RoomType::directorCabinet : return "Director cabinet";
        case RoomType::conferenceRoom : return "Conference room";
        case RoomType::lectureRoom : return "Lecture room";
    }
}

void Room::grantAccess(User &user) {
    // Checking if User has less access level that Room access level
    if (user.getAccessLevel() >= getAccessLevel()) {
        std::cout << std::endl << "User " << user.getName() << " has already access to " << getTypeString() << " " << getNumber() << std::endl;
        return;
    }

    // Checking if User not in granted access for the room
    for (const auto& i : grantedAccessUsers) {
        if (i == user.getEmail()) {
            std::cout << std::endl << "User " << user.getName() << " has already access to " << getTypeString() << " " << getNumber() << std::endl;
            return;
        }
    }

    grantedAccessUsers.push_back(user.getEmail());
    std::cout << std::endl << "User " << user.getName() << " was given access to " << getNumber() << " " << getTypeString() << std::endl;
}

void Room::tryToEnter(User &user) {
    // Checking if user has granted access
    for (const auto& i : grantedAccessUsers) {
        if (i == user.getEmail()) {
            std::cout << "\n" << user.getName() << " has granted access \n";
            std::cout << user.getName() << " entered the room " << getNumber() << " successfully \n";
            return;
        }
    }

    if (user.getAccessLevel() >= getAccessLevel()) {
        std::cout << "\n" << user.getName() << " entered the room " << getNumber() << " successfully \n";
    } else {
        std::cout << "\n" << user.getName() << " does not have access to the room " << getNumber() << "\n";
    }
}