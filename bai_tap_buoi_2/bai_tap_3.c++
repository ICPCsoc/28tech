#include <iostream>

int main (void) {
    long long m, n, x;
    std :: cin >> m >> n >> x;
    std :: cout << ((m + x - 1) / x) * ((n + x - 1) / x) << std :: endl;
    return 0;
}