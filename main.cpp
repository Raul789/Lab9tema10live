#include <iostream>
#include "Tests.h"
#include "UI.h"

int main() {
    testAll();
    fstream f;
    f.open("fname1", ios:: in);
    f.open("fname1", ios:: out);

    //RepoFile repo(R"(C:Users\yoonl\Desktop\Lab910\fname1)");
    RepoFile repo("fname1");
    Service service(repo);
    UI ui(service);
    ui.RunMenu();

    return 0;
}
