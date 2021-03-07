cmake_minimum_required(VERSION 3.17)
project(PSS_HW2)

set(CMAKE_CXX_STANDARD 14)

add_executable(PSS_HW2 main.cpp Users/User.cpp Users/User.h AccessLevels/Access.h Users/Student.cpp Users/Student.h Users/Professor.cpp Users/Professor.h Users/LabEmployee.cpp Users/LabEmployee.h Users/Director.cpp Users/Director.h Users/Admin.cpp Users/Admin.h Rooms/Room.cpp Rooms/Room.h Rooms/RoomType.h UniversityAccessSystem.h)