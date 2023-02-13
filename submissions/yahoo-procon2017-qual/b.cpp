#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int n, k, ans = 0;
    cin >> n >> k;
    long long int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);

    for (int i = 0; i < k; i++)
        ans = ans + a[i] + i;

    cout << ans << endl;
}
