
#include <iostream>
#include <fstream>
using namespace std;
int main() {
    long a = 183477256783;
    fstream f;
    f.open("test.dat", ios::out);
    f << "этот код записывается в файл" << endl;
    f.close();
    f.open("test.dat", ios::app);
    f << "i wanna be the boshy " << a << endl;

    f.close();
}



