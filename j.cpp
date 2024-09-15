#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    int n {};
    std::cin >> n;
    std::vector<int> nums;

    for (int i = 1; i < n; i++) {
        int j{};
        std::cin >> j;
        nums.push_back(j);
    }

    for (int i = 1; i <= n; i++) {
        if (!(std::find(nums.begin(), nums.end(), i) != nums.end())) {
            std::cout << i;
            return 0;
        }
    }
    return 1;
}