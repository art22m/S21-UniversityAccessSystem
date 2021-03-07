//
// Created by Artem Murashko on 07.03.2021.
// This file is needed in order to include many files in one line in main.cpp
//

#ifndef PSS_HW2_UNIVERSITYACCESSSYSTEM_H
#define PSS_HW2_UNIVERSITYACCESSSYSTEM_H

// Include all files from the Users folder
#include "Users/User.h"
#include "Users/Admin.h"
#include "Users/Director.h"
#include "Users/Professor.h"
#include "Users/LabEmployee.h"
#include "Users/Student.h"

// Include all file from Rooms folder
#include "Rooms/Room.h"
#include "Rooms/RoomType.h"

/*
 * Don't need to include AccessLevels/Access.h since
 * Users/User.h and Rooms/Room.h have already included it
*/

#endif //PSS_HW2_UNIVERSITYACCESSSYSTEM_H