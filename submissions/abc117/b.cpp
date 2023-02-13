#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i, sum = 0;
    cin >> n;
    vector<int> l(n, 0);
    for (i = 0; i < n; i++) {
        cin >> l[i];
    }

    sort(l.begin(), l.end(), greater<int>());

    for (i = 1; i < n; i++) {
        sum += l[i];
        // cout << l[i] << endl;
    }
    if (l[0] < sum)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
