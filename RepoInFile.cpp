//
// Created by yoonl on 5/3/2022.
//

#include "RepoInFile.h"

RepoFile::RepoFile() = default;

RepoFile::RepoFile(string fname) {
    this->filename = fname;
    ifstream f(fname);
    while (f.is_open()) {
        int id,zi, pret;
        string cod;
        f >>cod>>id>>zi>>pret;
        if(!cod.empty())
        {
            Ticket t(cod,id,zi,pret);
            tickets.push_back(t);
        }
        if(f.eof())
            f.close();
    }
}

RepoFile::~RepoFile() {
    fstream  f(filename);
    if(f.is_open())
        f.close();
}

void RepoFile::add_to_file(Ticket &t) {
    this->addTicket(t);
    this->save_to_File();
}


void RepoFile::delete_from_file(Ticket &t) {
    this->deleteTicket(t);
    this->save_to_File();

}

void RepoFile::update_file(Ticket &oldt,Ticket &newt) {
    this->updateTicket(oldt,newt);
    this->save_to_File();
}

void RepoFile::save_to_File() {
    ofstream g(this->filename);
    for (auto &t:tickets){
        g << t.getCod() << " " << to_string(t.getId()) << " " << to_string(t.getZi()) << " " << to_string(t.getPret()) << endl;
    }
    g.close();
}

void RepoFile::showAllCode(string cd) {
    for (auto &t:tickets){
        if(t.getCod() == cd)
            cout<<t<<endl;
    }
}


vector<Ticket> RepoFile::get_all_file() {
    return tickets;
}
