// Bài 2. Tính toán giá trị biểu thức
// Cho biểu thức A(x) = x3 + 3x2 + x + 1
// Với giá trị của x được nhập từ bàn phím, tính và in ra giá trị của biểu thức trên
// Input
// Số nguyên dương x không quá 105
// .

// Output
// Kết quả của biểu thức A(x)
#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int a;
    cin >> a;
    cout << (double) pow(a,3) + 3 * pow(a,2) + a + 1 << endl;
    return 0;
}