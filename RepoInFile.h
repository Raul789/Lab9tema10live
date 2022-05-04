//
// Created by yoonl on 5/3/2022.
//

#ifndef LAB910_REPOINFILE_H
#define LAB910_REPOINFILE_H

#include <string>
#include <fstream>
#include "RepoInMemory.h"
#pragma once
using namespace std;

class RepoFile: public RepoInMemory {
private:
    string filename;
public:
    RepoFile();
    RepoFile(string fname);
    ~RepoFile();
    void add_to_file(Ticket &t);
    void delete_from_file(Ticket &t);
    void update_file(Ticket &oldt, Ticket &newt);
    void save_to_File();
    void showAllCode(string cd);
    vector<Ticket> get_all_file();
};

#endif //LAB910_REPOINFILE_H
