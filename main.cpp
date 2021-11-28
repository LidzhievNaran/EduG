
#include <iostream>
#include <list>
using namespace std;
int main() {
    list<int> source = {0,1,2,3};
    list<int>::iterator source_begin = source.begin()++;
    list<int> target = {100,200};
    list<int>::iterator pos = target.end();
    target.splice(pos, source);
    for (pos = target.begin(); pos!= target.end(); pos++){
        cout << *pos << endl;
    }
}





