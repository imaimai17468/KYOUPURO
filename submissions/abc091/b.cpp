#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    string s[n];
    for (int i = 0; i < n; i++) cin >> s[i];
    cin >> m;
    string t[m];
    for (int i = 0; i < m; i++) cin >> t[i];

    vector<int> ans(n, 0);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (s[i] == s[j]) {
                ans[i]++;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (s[i] == t[j]) {
                ans[i]--;
            }
        }
    }
    sort(ans.begin(), ans.end(), greater<int>());
    if (ans[0] < 0)
        cout << '0' << endl;
    else
        cout << ans[0] << endl;
    return 0;
}
