#include <iostream>

int sumDigits(int n) {
    int m{}, sum{ 0 };
    while(n > 0) {
        m = n % 10;
        sum = sum + m;
        n = n/10;
    }
    return sum;
}

int main(){
    int turns{};

    std::cin >> turns;
    for (int i = 1; i <= turns; i++) {
        int n{};
        std::cin >> n;
        std::cout << sumDigits(n) << std::endl;
    }
    
    return 0;
}