
#include <iostream>
#include <fstream>
using namespace std;
int main(int arcg, char *argv[]) {
    fstream f;
    char cstring[256];
    f.open("whats_up.txt", ios::in);
    while (!f.eof())
    {
        f.getline(cstring, sizeof(cstring));
        cout << cstring << endl;
    }
    f.close();
}



