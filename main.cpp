
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
        //Для удаления элемента из списка используется функция erase().
        //Ее единственный параметр — итератор, указывающий на элемент спи-
        //ска, который требуется удалить. Поскольку этот итератор будет недей-
        //ствителен после удаления, функция erase() возвращает итератор, ко-
        //торый указывает на следующий за удаленным элемент. Он необходим,
        //если список требуется просматривать далее после удаления элемента.
    }
    for (lIter = count.begin(); lIter!= count.end(); lIter++){
        cout << *lIter << endl;
    }
}




