#include <iostream>
#include <vector>

int main(){
    std::vector<int> bills {100, 20, 10, 5, 1};
    int n{};
    std::cin >> n;
    int count{ 0 };
    for (int i = 0; i < 5; i++) {
        int bill = bills[i];
        if (bill > n) continue;
        count += n/bill;
        n = n % bill;
        if (n == 0) break;
    }

    std::cout << count << std::endl;
    return 0;
}