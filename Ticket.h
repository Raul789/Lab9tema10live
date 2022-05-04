//
// Created by yoonl on 5/1/2022.
//

#ifndef LAB910_TICKET_H
#define LAB910_TICKET_H
#include <iostream>
#include <string>

using namespace std;
class Ticket {
private:
    int id;
    int zi;
    int pret;
    string cod;
public:
    /***
     *   Constructor fara parametri
     */
     Ticket();
     /***
      *  Constructor cu parametri
      */
     Ticket(string cod,int id,int zi,int pret);
     /***
     *   Copy Constructor
     */
     Ticket(const Ticket& t);
     /***
     *   Destructor
     */
     ~Ticket();
    int getId();
     /***
     *   getter pentru pret
     */
     int getPret();
     /***
     *   getter pentru zi
     */
     int getZi();
    /***
    *   getter pentru cod
    */
     string getCod();
     /***
     *    setter la cod
     */
     void setCod(std::string cod);
     /***
     *    setter la pret
     */
    void setPret(int pret);
    /***
     *    setter la zi
     */
     void setZi(int zi);
     /***
     *    setter la id
     */
     void setId(int id);
     /***
     *    overload op atribuire
     */
     Ticket operator=(const Ticket t);
     /***
      *   overload op comparare
      */
      bool operator==(const Ticket &t) const;
    /**
   *
   *    overload op inegalitate
   */
    bool operator!=(const Ticket &t) const;
    /**
     *
     * overload op <
     */
    bool operator<(const Ticket &t) const;
    /**
     *
     * overload op >
     */
    bool operator>(const Ticket &t) const;
    /**
     *
     * overload op <=
     */
    bool operator<=(const Ticket &t) const;
    /**
     * overload op >=
     */
    bool operator>=(const Ticket &t) const;
    /**
     *
     * overload op afisare
     */
    friend std::ostream &operator<<(std::ostream &os, Ticket &t);
};


#endif //LAB910_TICKET_H
