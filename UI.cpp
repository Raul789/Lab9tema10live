//
// Created by yoonl on 5/1/2022.
//

#include "UI.h"
#include "Ticket.h"
#include "istream"
#include "Service.h"

UI::UI() = default;

UI::UI(const Service &service1) {
    this->service = service1;
}

void PrintMenu(){
    std::cout<<"----------Ticket box------------"<<std::endl;
    std::cout<<"1)Add a ticket"<<std::endl;
    std::cout<<"2)Delete a ticket"<<std::endl;
    std::cout<<"3)Modify a ticket"<<std::endl;
    std::cout<<"4)Show all tickets registered"<<std::endl;
    std::cout<<"5)Show all the tickets with a specific code: "<<std::endl;
    std::cout<<"6)Exit"<<std::endl;
}

void UI::RunMenu() {
    bool ok = true;
    int option;
    while(ok) {
        PrintMenu();
        std::cout<<"Introduceti optiunea: "<<std::endl;
        std::cin>>option;
        if(option == 1)
        {
            addTicket();
        }
        else if(option == 2)
        {
            deleteTicket();
        }
        else if(option == 3)
        {
            updateTicket();
        }
        else if(option == 4)
        {
            showAll();
        }
        else if(option == 5)
        {
            showAllCod();
        }
        else if(option == 6)
            break;
        else
                std::cout<<"Optiunea introdusa este incorecta!"<<std::endl;

    }
}

void UI::addTicket() {
    int id,zi,pret;
    string cod;
    cout<<"Ticket Code: "<<endl;
    cin>>cod;
    cout<<"Ticket ID: "<<endl;
    cin>> id;
    cout<<"Ticket Day: "<<endl;
    cin>>zi;
    cout<<"Ticket Price: "<<endl;
    cin>>pret;

    Ticket t(cod,id,zi,pret);
    service.addTicket(t);
}

void UI::showAll() {
    for(auto &t:service.getAllTicket())
    {
        cout<<" Ticket Code: "<<t.getCod() <<" Ticket ID: "<< t.getId()<<" Ticket Day: "<< t.getZi()<<" Ticket Price: "<<t.getPret()<<std::endl;
    }
}

void UI::deleteTicket() {
    int id;
    cout<<"Enter an id of a ticket you want to delete: ";
    cin>>id;
    for(auto &t:service.getAllTicket())
    {
        if(id == t.getId())
            service.deleteTicket(t);
    }
}

void UI::updateTicket() {
    int idd;
    cout<<"Enter an id of a ticket you want to update: ";
    cin>>idd;
    int id,zi,pret;
    string cod;
    cout << "Give the new id: ";
    cin >> id;
    cout << "Give the new code of the ticket: ";
    cin >> cod;
    cout << "Give the new price of the ticket: ";
    cin >> pret;
    cout << "Give the new day of the ticket: ";
    cin >> zi;
    Ticket newt(cod,id,zi,pret);
    for(auto &t:service.getAllTicket())
    {
        if(idd == t.getId()){
            service.updateTicket(t,newt);
        }
    }

}
void UI::showAllCod() {
    string cd;
    cout<<"Enter a code to see all the tickets : ";
    cin>>cd;
    service.showAllCode(cd);
}