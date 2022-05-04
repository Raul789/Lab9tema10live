//
// Created by yoonl on 5/1/2022.
//

#include "RepoInMemory.h"
#include "vector"
#include <stdexcept>

RepoInMemory::RepoInMemory() =default;

void RepoInMemory::addTicket(Ticket t) {
    this->tickets.push_back(t);
}

int RepoInMemory::getSize(){
    return tickets.size();
}

vector<Ticket> RepoInMemory::getAll(){
    return tickets;
}

Ticket RepoInMemory::getById(int i) {
    for(Ticket &t: tickets){
        if(t.getId() == i)
            return t;
    }
    throw runtime_error("No entity with specified id found");

}

void RepoInMemory::deleteTicket(Ticket t){
    Ticket toDelete = getById(t.getId());
    for(int i=0;i<tickets.size();i++)
    {
        if(tickets[i].getId() == t.getId())
            tickets.erase(tickets.begin()+i);
    }
}

void RepoInMemory::showAllCode(string cd) {

    for(int i=0;i<tickets.size();i++)
    {
        if(tickets[i].getCod() == cd)
            cout<<tickets[i]<<endl;
    }
}

void RepoInMemory::updateTicket(Ticket oldt,Ticket newt) {
    for(int i=0;i< this->tickets.size();i++)
    {
        if(this->tickets[i] == oldt)
        {
            this->tickets.erase(tickets.begin()+i);
            this->tickets.insert(tickets.begin()+i,newt);
        }
    }
}

RepoInMemory::~RepoInMemory() = default;