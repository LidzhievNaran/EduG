
#include <iostream>
#include <deque>
using namespace std;
#include <time.h>
int main() {
    clock_t start, end;
    start = clock();
    deque<int> buffer;
    for (int i =0; i < 1000; i ++) {
        for (int j = 1; j < 1000; j++) {
            buffer.push_front(j);
        }
        do {
            buffer.pop_back();
        } while (buffer.size());
    }
    end = clock();
    cout << start<< ":" << end<< endl;

}



