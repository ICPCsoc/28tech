#include <iostream>
using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;

    // Kiểm tra 3 trường hợp chia hợp lệ:
    if (b != 0 && a == b * c) {
        // a / b == c  ⇔ a == b * c  (và b ≠ 0)
        cout << "/";
    }
    else if (c != 0 && b == c * a) {
        // b / c == a ⇔ b == c * a  (và c ≠ 0)
        cout << "/";
    }
    else if (a != 0 && c == a * b) {
        // c / a == b ⇔ c == a * b  (và a ≠ 0)
        cout << "/";
    }
    else {
        cout << "NOSOL"; 
        // Không thỏa mãn bất kỳ điều kiện nào
    }
    return 0;
}