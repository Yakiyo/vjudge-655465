#include <iostream>

int main(){
    // a = limak
    // b = bob
    // c = no. of years
    int a{}, b{}, c{ 0 };
    std::cin >> a >> b;
    while (a <= b) {
        c++;
        a = a * 3;
        b = b * 2;
    }
    std::cout << c << std::endl;
    return 0;
}