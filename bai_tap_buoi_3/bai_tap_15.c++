#include "bits/stdc++.h" 

using namespace std;

int main (void) {
    long long a;
    cin >> a;
    int sum1 = 0;
    int sum2 = 0;
    while (a != 0){
        if (a % 2 == 0){
            sum1++;
            a /= 10;
        }
        else {
            sum2++;
            a /= 10;
        }
    }
    cout << sum1 << " " << sum2 << endl;
    return 0;
}