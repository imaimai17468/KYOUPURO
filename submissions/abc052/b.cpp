#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    int x = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'I') x++;
        ans = max(ans, x);
        if (s[i] == 'D') x--;
    }
    cout << ans << endl;
    return 0;
}
