//
// Created by yoonl on 5/1/2022.
//

#ifndef LAB910_SERVICE_H
#define LAB910_SERVICE_H
#include "Ticket.h"
#include "RepoInFile.h"
#include "RepoInMemory.h"

class Service {
private:
    RepoFile repo;
public:
Service();
Service(RepoFile &r);
~Service();
void addTicket(Ticket t);
void deleteTicket(Ticket c);
void updateTicket(Ticket oldt,Ticket newt);
void showAllCode(string cd);
std::vector<Ticket> getAllTicket();
Ticket getById(int id);
};


#endif //LAB910_SERVICE_H
