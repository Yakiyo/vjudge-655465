#include <iostream>
#include <vector>

int main(){
    int num{}, moves{ 0 };
    std::cin >> num;
    std::vector<int> arr;
    for (int i = 0; i < num; i++) {
        int j{};
        std::cin >> j;
        arr.push_back(j);
    }
    // convert std::size_t to int for convenience tho
    // this is unsafe as it can overflow
    int len{ (int) arr.size() };

    // we only do stuff from 2nd item, cz the first one has no previous item
    for (int i = 1; i < len; i++) {
        int a{ arr[i - 1] };
        int b{ arr[i] };
        if (b >= a) continue;
        moves += a - b;
        arr[i] = a;
    }
    std::cout << moves << std::endl;
    return 0;
}