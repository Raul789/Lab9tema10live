//
// Created by yoonl on 5/1/2022.
//

#ifndef LAB910_REPOINMEMORY_H
#define LAB910_REPOINMEMORY_H

#include "Ticket.h"
#include <vector>
using namespace std;

class RepoInMemory {
protected:
    vector<Ticket> tickets;
public:
    /***
     *  Constructor fara parametri
     */
     RepoInMemory();
     /***
     *  Destructor
     */
     ~RepoInMemory();
     /***
      * Adaugam un bilet in repository
      */
     void addTicket(Ticket t);
     /**
     * Getter pt size la vector
     */
     int getSize();
     /***
     * Getter pentru toate entitatile din vector
     */
     vector<Ticket> getAll();
     /***
     * Obtinem bilet dupa un id dat
     */
     Ticket getById(int i);
     /***
     * Stergem un bilet din vector
     */
     void deleteTicket(Ticket t);
     /***
     * Updatam un bilet
     */
     void updateTicket(Ticket oldt,Ticket newT);
     /***
     * Afisam toate biletele cu un anumit cod
     */
     void showAllCode(string cd);

};


#endif //LAB910_REPOINMEMORY_H
