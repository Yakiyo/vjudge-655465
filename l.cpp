#include <iostream>
#include <cstdint>
using namespace std;

bool findOddDiv(int64_t n) {
    // if num itself is odd, then it itself is an odd divisor
    if (!((n % 2) == 0)) return true;
    for (int64_t i = 3; i < n; i += 2) {
        if ((n % i) == 0) return true;
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
        cout << "\n\n";
    }
    return 0;
}