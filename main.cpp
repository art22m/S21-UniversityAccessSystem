#include <iostream>
#include <string>
#include "Users/Student.h"
#include "Users/Admin.h"

using namespace std;

int main() {

    Student artem_m("Artem", 18, "artmurashko@mail.ru", "@art22m", 1231, "B20-02", 4.5);

    artem_m.getMainInfo();

    Admin ivan_k("Ivan", 25, "123@mail.ru", "@ivvan", 12000);

    ivan_k.changeAccessLevel(artem_m, Access::yellow);

    artem_m.getMainInfo();
    artem_m.getAdditionalInfo();

    return 0;
}
