//
// Created by yoonl on 5/1/2022.
//

#include "Service.h"
#include "RepoInFile.h"

Service::Service(RepoFile &r) {
    this->repo = r;
}

Service::Service() = default;

void Service::addTicket(Ticket t) {
    repo.add_to_file(t);
}

void Service::deleteTicket(Ticket c) {
    repo.delete_from_file(c);
}

void Service::updateTicket(Ticket oldt,Ticket newt) {
    repo.update_file(oldt,newt);
}

std::vector<Ticket> Service::getAllTicket() {
    return  repo.get_all_file();
}

Ticket Service::getById(int id) {
    return repo.getById(id);
}

Service::~Service() = default;

void Service::showAllCode(string cd) {
    repo.showAllCode(cd);
}