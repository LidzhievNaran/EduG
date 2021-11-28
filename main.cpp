
#include <iostream>
#include <set>
using namespace std;
void show(set<int> &count){
    set<int>::iterator iter;
    for (iter = count.begin(); iter!= count.end(); ++iter){
        cout << *iter<< " - ";
    }
    cout << endl;
}
//&
int main() {
    set<int> count;
    int new_number;
    srand(0);
    for (int i = 0;i < 10; i++){
        new_number = rand()%9 +1;
        count.insert(new_number);
        cout << new_number << " - ";
    }
    cout << endl;
    show(count);
    count.erase(4);
    show(count);
}






