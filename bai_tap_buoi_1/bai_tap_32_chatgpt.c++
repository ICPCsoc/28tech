#include <iostream>
using namespace std;

int main() {
    long long a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    // Gán 5 số vào 5 biến
    long long min1 = a; // min1 là nhỏ nhất
    if (b < min1) min1 = b;
    if (c < min1) min1 = c;
    if (d < min1) min1 = d;
    if (e < min1) min1 = e;

    // Gán min2 là giá trị lớn bất kỳ (khác min1)
    long long min2 = 1e18; // giá trị lớn tạm thời

    // Tìm số nhỏ thứ 2 (lớn hơn min1)
    if (a != min1 && a < min2) min2 = a;
    if (b != min1 && b < min2) min2 = b;
    if (c != min1 && c < min2) min2 = c;
    if (d != min1 && d < min2) min2 = d;
    if (e != min1 && e < min2) min2 = e;

    cout << min2;
    return 0;
}