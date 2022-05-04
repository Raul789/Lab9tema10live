//
// Created by yoonl on 5/1/2022.
//

#ifndef LAB910_UI_H
#define LAB910_UI_H

#include <cstring>
#include "Service.h"

class UI {
private:
    Service service;
public:
    UI();
    UI(const Service &service1);
    void RunMenu();
    void addTicket();
    void deleteTicket();
    void updateTicket();
    void showAll();
    void showAllCod();
};


#endif //LAB910_UI_H
