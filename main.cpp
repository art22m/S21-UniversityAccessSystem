#include <iostream>
#include "UniversityAccessSystem.h"

using namespace std;

/*
 * students —> class room, conference room <—> green level
 * lab employees —> class room, conference room <—> green level
 * professors —> green level rooms + lecture room, cabinet <—> yellow level
 * director —> green + yellow level rooms +director cabinet <—> red level
 * admins -> all rooms <—> red level
 */


/*--------------- Students ---------------*/
vector <Student> studentsList = {
    Student("Alastair Weber", 18, "al.weber@uni.com", "@alweb", 13000, "B20-01", 4.43),
    Student("Grady Holmes", 19, "g.holmes@uni.com", "@grad", 8543, "B19-03", 3.2),
    Student("Isla-Rose Gillespie", 18, "is.rose@uni.com", "@roseis", 12122, "B20-03", 4.43),
    Student("Zhane Grey", 20, "z.grey@uni.com", "@greyzha", 20000, "B18-04", 5),
    Student("Keeva Gutierrez", 20, "k.gutierrez", "@keeva", 9960, "B18-02", 3.7),
    Student("Brandi Curry", 20, "b.curry@uni.com", "@brand12", 13000, "B18-04", 4.43),
    Student("Jenny Shaw", 20, "j.shaw@uni.com", "@jenk4ik", 11200, "B18-03", 3.90),
    Student("Naomi Valencia", 20, "m.valencia@uni.com", "@valenc", 12900, "B18-02", 4.2),
    Student("Margie Chandler", 19, "m.chandler@uni.com", "@mergkom", 3000, "B19-04", 2.4),
    Student("Garry Ellwood", 19, "g.ellwood@uni.com", "@garell", 7000, "B19-03", 3.1),
    Student("Shanae Stark", 19, "s.stark@uni.com", "@shastark", 8900, "B19-02", 3.6),
    Student("Romario Carr", 19, "r.carr@uni.com", "@carrmen", 12700, "B19-01", 4.22),
    Student("Orlaith Jacobs", 18, "o.jacob@uni.com", "@kekorla", 12500, "B20-04", 4.11),
    Student("Issac Phan", 18, "i.phan@uni.com", "@issacne", 18000, "B20-02", 4.80),
    Student("Harriet Hardy", 18, "h.hardy@uni.com", "@tomhardy", 12100, "B20-03", 4.23),
    Student("Nahla Gonzales", 18, "n.gonzales@uni.com", "@nahhonza", 5600, "B20-01", 3.12),
};


/*--------------- Lab Employees ---------------*/
vector <LabEmployee> labEmployeesList = {
        LabEmployee("Andrew Cuevas", 23, "andcu@mail.ru", "@andcu", 50000, "AI Lab", "Coffee++"),
        LabEmployee("Anya Dougherty", 34, "hamilton@gmail.com", "@hamilton", 94000, "Robotic", "Cava"),
        LabEmployee("Maha Kaufman", 22, "ismail@aol.com", "@ismail", 25000, "Robotic Lab", "Makedonia"),
        LabEmployee("Amelia-Mae Hopkins", 24, "helger@icloud.com", "@helger", 32000, "AI Lab", "StarBucks"),
        LabEmployee("Kobie Keeling", 39, "giafly@aol.com", "@giafly", 150000, "Computer Vision Lab", "MacDonalds"),
        LabEmployee("Josef Bain", 34, "gtewari@mac.com", "@gtewari", 48000, "Cyber Security Lab", "Meat & Fish"),
        LabEmployee("Sumaya Grainger", 26, "psharpe@gmail.com", "@psharpe", 75000, "Cyber Security Lab", "InnoMax"),
        LabEmployee("Gabrielle Rollins", 43, "treit@mac.com", "@treit", 50000, "Software Engineering Lab", "GreenLine")
};


/*--------------- Professors ---------------*/
vector <Professor> professorsList = {
        Professor("Ellesha O'Brien", 35, "e.brien@uni.com", "@ellesob", 100000, "Discrete Math", "How does a rabbi make coffee? Hebrews it!"),
        Professor("Walter Braun", 45, "w.braun@uni.com", "@wbraun", 150000, "Calculus", "Talk is cheap? Have you ever talked to a lawyer?"),
        Professor("Geraldine Gilliam", 54, "g.gilliam@uni.com", "@gilliamm", 200000, "Theoretical Computer Science", "Two artists had an art contest. It ended in a draw!"),
        Professor("Maxime Madden", 65, "m.madden@uni.com", "@madden", 250000, "Data Structures & Algorithms", "You know what I saw today? Everything I looked at."),
};


/*--------------- Admins ---------------*/
Admin admin_first("Bertie Moody", 30, "b.moody@uni.com", "@moody", 70000);
Admin admin_second("Kester Zamora", 35, "k.zamora@uni.com", "@zamora", 75000);


/*--------------- Director ---------------*/
Director director_main("Ruari Reeve", 52, "r.reeve@uni.com", "@reeve", 500000, 120);


/*--------------- Rooms ---------------*/
vector <Room> roomsList = {
        Room("313", RoomType::classRoom),
        Room("412-A", RoomType::classRoom),
        Room("105", RoomType::lectureRoom),
        Room("108", RoomType::lectureRoom),
        Room("208", RoomType::conferenceRoom),
        Room("209-B", RoomType::conferenceRoom),
        Room("401", RoomType::cabinet),
        Room("402", RoomType::cabinet),
        Room("444", RoomType::directorCabinet),
};

int main() {
    // Example for the Student with index 4
    studentsList[4].getMainInfo();
    studentsList[4].getAdditionalInfo();

    roomsList[3].tryToEnter(studentsList[4]); // Can't enter, Student can't enter Lecture Room =(
    admin_first.grantAccessToRoom(roomsList[3], studentsList[4]); // Admin give the access for entering Lecture's Room
    admin_first.grantAccessToRoom(roomsList[3], studentsList[4]); // Let's try it again
    roomsList[3].tryToEnter(studentsList[4]); // Now student can enter 108 room =)
    roomsList[2].tryToEnter(studentsList[4]); // But can't enter another Lecture Room

    /* --------------------------------------------------------------------------------------------------- */

    // Example for the Lab Employee with index 5
    labEmployeesList[5].getMainInfo();
    labEmployeesList[5].getAdditionalInfo();

    roomsList[2].tryToEnter(labEmployeesList[5]); // Green Level can't enter Lecture Room
    roomsList[5].tryToEnter(labEmployeesList[5]); // Class Room has Green Level Access
    roomsList[7].tryToEnter(labEmployeesList[5]); // Green Level can't enter Cabinet
    admin_second.changeAccessLevel(labEmployeesList[5], Access::yellow); // Change access level from Green to Yellow
    roomsList[2].tryToEnter(labEmployeesList[5]); // Yellow Level can enter Lecture Room
    roomsList[7].tryToEnter(labEmployeesList[5]); // Green Level can enter Cabinet

    /* --------------------------------------------------------------------------------------------------- */

    // Example for the Professor with index 0
    professorsList[0].getMainInfo();
    professorsList[0].getAdditionalInfo();

    cout << endl << professorsList[0].getFavoriteJoke() << endl; // Let's read the joke once again

    roomsList[0].tryToEnter(professorsList[0]);
    roomsList[2].tryToEnter(professorsList[0]);
    roomsList[4].tryToEnter(professorsList[0]);
    roomsList[6].tryToEnter(professorsList[0]);
    roomsList[8].tryToEnter(professorsList[0]); // Professors can't enter only director's cabinet

    /* --------------------------------------------------------------------------------------------------- */

    // Example for the Director
    director_main.getMainInfo();
    director_main.getAdditionalInfo();

    roomsList[0].tryToEnter(director_main);
    roomsList[2].tryToEnter(director_main);
    roomsList[4].tryToEnter(director_main);
    roomsList[6].tryToEnter(director_main);
    roomsList[8].tryToEnter(director_main); // Director can enter any room

    admin_first.grantAccessToRoom(roomsList[0], director_main); // Let's try to give access to Class Room for director
    return 0;
}