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

    std::sort(nums.begin(), nums.end());

    for (int i = 1; i <= n; i++) {
        if (!(std::binary_search(nums.begin(), nums.end(), i))) {
            std::cout << i;
            return 0;
        }
    }
    return 1;
}