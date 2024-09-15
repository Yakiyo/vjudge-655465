#include <iostream>

int main() {
    int x{};
    int y{};

    std::cin >> x >> y;
    if (x > y) {
        std::cout << x - y;
    } else {
        std::cout << x + y;
    }
    std::cout << std::endl;
}