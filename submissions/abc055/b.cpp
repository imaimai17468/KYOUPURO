#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007

int main() {
    int n;
    cin >> n;
    long long pow = 1;

    for (int i = 1; i <= n; i++) {
        pow = (pow * i) % mod;
    }
    cout << pow << endl;
    return 0;
}
