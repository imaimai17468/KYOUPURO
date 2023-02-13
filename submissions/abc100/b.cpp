#include <bits/stdc++.h>
using namespace std;

int main() {
    int d, n;
    cin >> d >> n;
    int ans;
    ans = pow(100, d);
    if (n == 100) n++;
    ans *= n;
    cout << ans << endl;
    return 0;
}
