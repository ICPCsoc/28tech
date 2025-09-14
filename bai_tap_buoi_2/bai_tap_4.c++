#include <iostream>

int main (void) {
    int a, b ,k;
    std :: cin >> a >> b >> k;
    long long half = k / 2;
    if (k % 2 == 0) {
        cout << (a - b) * half;
    }
    else {
        cout << (a - b) * k / half;
    }
    return 0;
}