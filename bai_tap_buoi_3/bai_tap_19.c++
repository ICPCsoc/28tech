#include <iostream>

using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    long long sum = 1;
    for (int i = 1; i < a; i++) {
        sum *= 10;
    }
    int end = sum * 10;
    for (int i = sum; i < end; i++) {
        if (i % b == 0) {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
