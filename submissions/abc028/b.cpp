#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    vector<int> cnt(6, 0);
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'A') cnt[0]++;
        if (s[i] == 'B') cnt[1]++;
        if (s[i] == 'C') cnt[2]++;
        if (s[i] == 'D') cnt[3]++;
        if (s[i] == 'E') cnt[4]++;
        if (s[i] == 'F') cnt[5]++;
    }
    for (int i = 0; i < 5; i++) {
        cout << cnt[i] << " ";
    }
    cout << cnt[5] << endl;
    return 0;
}
