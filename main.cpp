
#include <iostream>
#include <list>
using namespace std;
int main() {
    list<int> source = {0,1,2,3,2,4,3,6,36};
    list<int>::iterator source_begin = source.begin()++;
    list<int>::iterator source_end = source.end();
    list<int> target ;
    list<int>::iterator pos = target.end();
    target.splice(pos, source, source_begin, source_end);//перемещаем все элементы source  в  target
    for (pos = target.begin(); pos!= target.end(); pos++){
        cout << *pos << endl;
    }
}





