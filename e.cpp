#include <iostream>

int main() {
    int n{}, k{};
    int res{ 0 };

    std::cin >> n >> k;

    for (int i = 1; i <= n; i++) {
        int a{};
        std::cin >> a;
        if ((a % k) == 0) res++;
    }
    std::cout << res;

    return 0;
}