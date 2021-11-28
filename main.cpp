
#include <iostream>
#include <list>
using namespace std;
int main() {
    list<int> count;
    list<int>::iterator lIter;
    srand(0);
    for (int i = 0; i < 10; i++ ){
        count.push_back (rand() % 9 +1);
    }
    for (lIter = count.begin() ; lIter!= count.end(); lIter++){
        cout <<*lIter << endl;
    }
    //перед каждым числом 8 добваить - 1, удалить каждое число 2
    for (lIter = count.begin(); lIter!= count.end(); lIter++){
        if (8==*lIter){
            count.insert(lIter, -1);
        }
        else if(2==*lIter){
            lIter = count.erase(lIter);
        }
        //
    }
    for (lIter = count.begin(); lIter!= count.end(); lIter++){
        cout << *lIter << endl;
    }
}




