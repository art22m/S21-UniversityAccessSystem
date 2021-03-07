# UniversityAcessSystem
Programming Software System Course
Homework 2

TA: https://github.com/l1va



#### *Simpliﬁcations and assumptions:*
- We have next user types: students, professors, lab employees, director, admins
- We have rooms: class room, lecture room, conference room, cabinet, director cabinet
- We have next access level: green, yellow, red, no level
- By default user has his access level for rooms but admins can grant additional custom access to any room



#### *Requirements:*

-  Use OOP.

-  Generate some users (at least 1 director, 2 admins, 4 professors, 8 employees, 16 students should exist in the system).

- Show diﬀerent examples of system usage in the main function.( For example: Professor Shilov trying to open director cabinet and got no access)

- Try to implement the system as real as you can. It means users has names, rooms has room numbers, professors have favorite joke. You can skip most unnecessary data (like photo), but add at least one to show that the system is real.

- There should be Readme.md ﬁle in the root folder with the project description, how to run the code, all dependencies installation and versions, maybe other instructions.
- Use C++
- Do not put all code in one ﬁle.
- The code should be readable, easily modiﬁable, easy extendable.
- If something was not mentioned - it means on your choice.



#### *Main idea*

We have four level of access. The larger the number, the more access it have:	
1. NO_LEVEL

2. GREEN

3. YELLOW

4. RED

   

Students and Employees have GREEN access level, Professors have YELLOW access level, 
Directors and Admins have RED access level.

Also we have rooms. Each room has it's own access level. For example, to enter the room with YELLOW access level, you need to be YELLOW or higher access level.



| User Type    | Access Level | Access to rooms                                        |
| ------------ | ------------ | ------------------------------------------------------ |
| Student      | GREEN        | Class room, conference room                            |
| Lab employee | GREEN        | Class room, conference room                            |
| Professor    | YELLOW       | Class room, conference room, Cabinet                   |
| Director     | RED          | Class room, conference room, Cabinet, Director Cabinet |
| Admin        | RED          | Class room, conference room, Cabinet, Director Cabinet |



Admins can grant access for a specific room, as well as raise the user's access level.

Each user type has 4 basic data (name, age, email, telegram alias) and additional info (it is different for each user type).

Classes include void functions on which you can play out various situations of interaction between users and rooms.




#### *Dependencies*

- C++ 14
- CMake 3.17



#### *How to run the code*

[1] Download source from GitHub 

[2] Open terminal

[2] Type command to install gcc

[3] Go to that folder where you've download source

[4] Compile the program using the following command:

​		 **gcc main.cpp**

[5] To run the program type the following command

​		**./a.out**

