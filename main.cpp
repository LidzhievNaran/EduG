
#include <iostream>
#include <deque>
using namespace std;
#include <time.h>
int main() {
    deque<int> arr = {1,2,3,4,5};
    arr.push_front(6);
    for (int i =0; i < arr.size(); i ++){
        cout << arr[i]<< endl;
    }
    arr.pop_front();
    for (int i =0; i < arr.size(); i ++){
        cout << arr[i]<< endl;
    }
}




