#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    string s[n];
    int p[n];
    for (int i = 0; i < n; i++) {
        cin >> s[i] >> p[i];
    }
    vector<pair<int, int>> ans(n);
    for (int i = 0; i < n; i++) {
        int cnt = 0;
        int rank = 5;
        for (int j = 0; j < n; j++) {
            if (i != j && s[i] < s[j]) {
                cnt++;
            } else if (i != j && s[i] == s[j] && p[i] > p[j]) {
                cnt++;
            }
        }
        // cout << cnt << endl;
        ans[i] = make_pair(cnt, i + 1);
    }
    sort(ans.begin(), ans.end(), greater<>());
    for (int i = 0; i < n; i++) cout << ans[i].second << endl;
    return 0;
}
