#include <iostream>

int main() {
    int turns{};
    std::cin >> turns;

    for (int i = 1; i <= turns; i++) {
        int a{}, b{};
        std::cin >> a >> b;
        if ((a + b) >  6) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }

    return 0;
}