#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string ans;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0' || s[i] == '1') {
            ans.push_back(s[i]);
        } else {
            int len = ans.size();
            ans = ans.substr(0, len - 1);
        }
    }
    cout << ans << endl;
    return 0;
}
