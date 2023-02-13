#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, dig;
    cin >> n;
    dig = n % 111;
    n = n - dig;
    if (dig == 0)
        cout << n << endl;
    else
        cout << n + 111 << endl;
    return 0;
}
