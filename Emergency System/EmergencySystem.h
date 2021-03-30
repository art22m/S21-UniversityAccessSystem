//
// Created by Артём Мурашко on 21.03.2021.
//

#ifndef PSS_HW2_EMERGENCYSYSTEM_H
#define PSS_HW2_EMERGENCYSYSTEM_H

#include <iostream>

class EmergencySystem {
public:
    EmergencySystem();

public:
     static bool isEmergency();

protected:
    void setEmergency(bool condition);

private:
    void getHelp();

public:
    static bool emergency;
};


#endif //PSS_HW2_EMERGENCYSYSTEM_H
