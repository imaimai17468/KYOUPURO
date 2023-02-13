#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string s;
    cin >> s;

    int right = 0;
    int left = s.size() + 1;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'A') {
            left = min(left, i);
        }
        if (s[i] == 'Z') {
            right = max(right, i);
        }
    }
    // cout << right << left << endl;
    cout << right - left + 1 << endl;
    return 0;
}
