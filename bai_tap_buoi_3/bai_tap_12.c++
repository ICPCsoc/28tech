#include "bits/stdc++.h" 

using namespace std;

int main (void) {
    long long a;
    cin >> a;
    int sum = 0;
    if (a == 0) {
        sum = 1;
    }
    else {while (a != 0){
        sum++;
        a /= 10;
    }}
    cout << sum << endl;
    return 0;
}