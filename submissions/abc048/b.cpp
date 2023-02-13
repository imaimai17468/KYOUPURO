#include <bits/stdc++.h>
using namespace std;

int main(void) {
    long long int a, b, x;
    cin >> a >> b >> x;
    if (a == 0)
        cout << b / x + 1 << endl;
    else
        cout << b / x - (a - 1) / x << endl;
    return 0;
}
