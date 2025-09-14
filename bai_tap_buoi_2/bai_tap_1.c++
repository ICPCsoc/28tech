#include <iostream>
#include <cmath>

int main (void) {
    std :: ios::sync_with_stdio(false);
    std :: cin.tie(nullptr);
    int s1, s2, s3;
    std :: cin >> s1 >> s2 >> s3;
    double a = sqrt(1.0 * (s1 * s3) / s2);
    double b = sqrt(1.0 * (s1 * s2) / s3);
    double c = sqrt(1.0 * (s3 * s2) / s1);
    int sum = 4 *(a + b + c);
    std :: cout << sum << std :: endl;
    return 0;
}