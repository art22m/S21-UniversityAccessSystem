//
// Created by Артём Мурашко on 07.03.2021.
//

#ifndef PSS_HW2_ROOM_H
#define PSS_HW2_ROOM_H

#include "../Users/User.h"
#include "../AccessLevels/Access.h"
#include "RoomType.h"

#include <string>
#include <vector>

class Room {
public:
    Room(std::string number, RoomType type);

public:
    std::string getNumber();
    RoomType getType();
    Access getAccessLevel();
    std::string getTypeString();

private:
    void grantAccess(User &user);

private:
    std::string number; // e.g. 303, 108, 308A ...
    RoomType type; // e.g. class room, lecture room, conference room, ...
    Access accessLevel; // shows what level of access can open the room
    std::vector <std::string> grantedAccessUsers; // Users with granted access
    friend class Admin;
};


#endif //PSS_HW2_ROOM_H
