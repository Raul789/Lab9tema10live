//
// Created by yoonl on 5/1/2022.
//

#include <cstring>
#include "Ticket.h"

Ticket::Ticket() {
    this->id = 0;
    this->zi = 0;
    this->cod = "";
    this->pret = 0;
}

Ticket::Ticket(string cod1, int id,int zi, int pret) {
    this->id = id;
    this->zi = zi;
    this->pret = pret;
    this->cod =move(cod1);
}

Ticket::Ticket(const Ticket &t) {
    this->pret = t.pret;
    this->zi = t.zi;
    this->id = t.id;
    this->cod = t.cod;
}

Ticket::~Ticket() {
        this->cod = "";
}

string Ticket::getCod()  {
    return this->cod;
}

int Ticket::getZi(){
    return this->zi;
}

int Ticket::getPret() {
    return this->pret;
}

int Ticket::getId() {
    return this->id;
}

void Ticket::setId(int id) {
    this->id = id;
}

void Ticket::setPret(int pret) {
    this->pret = pret;
}

void Ticket::setZi(int zi) {
    this->zi = zi;
}

void Ticket::setCod(std::string cod) {
    this->cod = cod;
}

bool Ticket::operator==(const Ticket &t) const{
    return this->id == t.id && this->zi == t.zi && this->pret == t.pret && cod == t.cod;
}

bool Ticket::operator!=(const Ticket &t) const {
    return !(t == *this);
}

bool Ticket::operator<(const Ticket &t) const {
    bool ok = false;
    if(cod == t.cod)
    {
        if(this->pret <t.pret)
            ok = true;
    }
    return ok;
}

bool Ticket::operator>(const Ticket &t) const {
    return t < *this;
}

bool Ticket::operator<=(const Ticket &t) const {
    return !(t < *this);
}

bool Ticket::operator>=(const Ticket &t) const {
    return !(*this < t);
}

std::ostream &operator<<(std::ostream &os,Ticket &t){
    os <<"Ticket ID: "<< t.id<<" Ticket Day: "<< t.zi<<" Ticket Price: "<<t.pret<<" Ticket Code: "<<t.cod<<std::endl;
    return os;
}

Ticket Ticket::operator=(const Ticket t) {
    if(this != &t)
    {
        this->cod = t.cod;
        this->pret = t.pret;
        this->zi = t.zi;
        this->id = t.id;
    }
    return *this;
}

