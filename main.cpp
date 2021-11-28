
#include <iostream>
#include <vector>
int main() {
    int MaxVec = 5;
    std::vector<int> arr(MaxVec);
    std::vector<int> arr1(MaxVec);
    for (int i =0; i < MaxVec; i++){
        std::cin>> arr[i];
    }
    for (int i =0; i < MaxVec; i++){
        std::cin>> arr1[i];
    }
    std::vector<int>::iterator it = arr.begin();
    std::vector<int>::iterator it1 = arr1.begin();

//    arr.erase(arr.begin()+3);
//    while(it != arr.end()){
//        std::cout<< *it << std::endl;
//        it++;
//    }
//    it = arr.begin();
//    arr.clear();
//    swap(arr, arr1);
    while(it != arr.end()){
        std::cout<< *it << std::endl;
        it++;
    }

    while(it1 != arr1.end()){
        std::cout<< *it1 << std::endl;
        it1++;
    }
    return 0;
}


