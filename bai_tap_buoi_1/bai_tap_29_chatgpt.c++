#include <iostream> 
// Thư viện nhập xuất cơ bản
using namespace std;

int main() {
    double a, b;
    cin >> a >> b;  // Nhập vào 2 số thực a và b

    // Nếu a > b thì hoán đổi để luôn có a <= b
    if (a > b) swap(a, b);

    // Tìm số nguyên nhỏ nhất >= a
    int L = (int)a; 
    // Lấy phần nguyên của a
    if (a > (int)a) 
    // Nếu a có phần thập phân (ví dụ 2.3 → L phải là 3)
        L = (int)a + 1;

    // Tìm số nguyên lớn nhất <= b
    int R = (int)b; 
    // Lấy phần nguyên của b
    if (b < 0 && b != (int)b) 
    // Nếu b là số âm và có phần thập phân (ví dụ -2.5)
        R = (int)b - 1;

    // Tính số lượng số nguyên trong đoạn [L, R]
    int count = 0;
    if (L <= R)
        count = R - L + 1;

    cout << count; 
    // In ra kết quả
    return 0;
}