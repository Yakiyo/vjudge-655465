/**
 * Same concept as problem no. F
 * 
 * FIXME: Wrong answer of test 3, what the hell is test 3 REEEEEEEEEEEEEEEE!
 */

#include <iostream>
#include <cmath>

int main()
{
    int n{};
    std::cin >> n;
    
    double num{ std::pow(5.0, 1.0 * n) };
    // std::cout << num << std::endl;
    // the last digit of `num`
    int a{ (int)std::fmod(num, 10) };
    // truncate last digit
    num = num / 10;
    // the second last digit of `num`
    int b{ (int)std::fmod(num, 10) };

    std::cout << b << a << std::endl;

    return 0;
}