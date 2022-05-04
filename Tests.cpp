//
// Created by yoonl on 5/1/2022.
//

#include "Tests.h"
#include <cassert>
#include "Ticket.h"
#include "RepoInMemory.h"

void testAll(){
    testTicketGet();
    testTicketSet();
    testTicketSet();
    testRepoInMemoryAdd();
    testRepoInMemoryDelete();
    testRepoInMemoryGetAll();
    testRepoInMemoryUpdate();
}

void testTicketGet(){
    Ticket t("CJ",1,10,100);
    assert(t.getId() == 1);
    assert(t.getPret() == 100);
    assert(t.getCod()=="CJ");
    assert(t.getZi() == 10);
}

void testTicketSet(){
    Ticket t;
    t.setId(1);
    t.setZi(31);
    t.setPret(120);
    t.setCod("AB");
    assert(t.getId() == 1);
    assert(t.getZi() == 31);
    assert(t.getPret() == 120);
}

void testRepoInMemoryAdd(){
    RepoInMemory repoInMemory;
    Ticket t("CJ",1,12,60);
    Ticket l("AB",2,19,76);
    repoInMemory.addTicket(t);
    repoInMemory.addTicket(l);
    assert(repoInMemory.getAll().size() == 2);
    assert(repoInMemory.getAll()[0] == t);
}

void testRepoInMemoryDelete(){
    RepoInMemory repoInMemory;
    Ticket t("CJ",1,12,60);
    Ticket l("AB",2,19,76);
    repoInMemory.addTicket(t);
    repoInMemory.addTicket(l);
    repoInMemory.deleteTicket(t);
    assert(repoInMemory.getAll().size() == 1);
}

void testRepoInMemoryUpdate(){
    RepoInMemory repoInMemory;
    Ticket t("CJ",1,12,60);
    Ticket l("AB",2,19,76);
    Ticket z("IS",3,20,120);
    repoInMemory.addTicket(t);
    repoInMemory.addTicket(l);
    repoInMemory.addTicket(z);
    repoInMemory.updateTicket(z,l);
    assert(repoInMemory.getAll()[2].getId() == 2);
    assert(repoInMemory.getAll()[2].getZi() == 19);
    assert(repoInMemory.getAll()[2].getPret() == 76);
    assert(repoInMemory.getAll()[2].getCod()=="AB");
}


void testRepoInMemoryGetAll(){
    RepoInMemory repoInMemory;
    Ticket t("CJ",1,12,60);
    Ticket l("AB",2,19,76);
    repoInMemory.addTicket(t);
    repoInMemory.addTicket(l);
    assert(repoInMemory.getAll().size() == 2);
    assert(repoInMemory.getAll()[0] == t);
}

