#include <iostream>
#include <vector>
#include <cstdint>
#include <cmath>
using namespace std;

bool findOddDiv(int64_t n) {
    // if num itself is odd, then it itself is an odd divisor
    if (!((n % 2) == 0)) return true;
    
    vector<int64_t> divs{};
    int64_t root{ (int64_t) sqrt(n) + 1 };
    for (int64_t i = 2; i <= root; i++) {
        if (!(n % i == 0)) continue;
        int64_t j = n/i;
        if ((i == 1) || (j == 1)) continue;
        if (!(i % 2 == 0) || !(j % 2 == 0)) {
            return true;
        }
    }

    return false;
}

int main(){
    int cases{};
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        int64_t n{};
        cin >> n;
        if (findOddDiv(n)) {
            cout << "YES";
        } else {
            cout << "NO";
        }
    }
    return 0;
}