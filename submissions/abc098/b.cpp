#include <bits/stdc++.h>
using namespace std;

int chk(string a, string b) {
    int ans = 0;
    for (char c = 'a'; c <= 'z'; c++) {
        bool founda = false, foundb = false;
        for (int i = 0; i < a.length(); i++) {
            if (a[i] == c) {
                founda = true;
            }
        }
        for (int j = 0; j < b.length(); j++) {
            if (b[j] == c) {
                foundb = true;
            }
        }
        if (founda && foundb) ans++;
    }
    return ans;
}

int main() {
    int n;
    string s;
    cin >> n >> s;

    int ans = 0;
    for (int i = 0; i <= n; i++) {
        int num = chk(s.substr(0, i), s.substr(i));
        ans = max(ans, num);
    }
    cout << ans << endl;
    return 0;
}
