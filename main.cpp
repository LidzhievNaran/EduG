
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    ifstream f;
    string s;
    f.open("whats_up.txt", ios::in);
    while(!f.eof())
    {
        getline(f, s);
        cout << s << endl;
    }
    f.close();
}



