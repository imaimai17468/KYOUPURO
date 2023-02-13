#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int count = 0;
    for (int i = 1; i < s.size() + 1; i++) {
        if (s[i - 1] == s[i]) {
            count++;
            if (s[i - 1] == '0') {
                s[i] = '1';
            } else {
                s[i] = '0';
            }
        }
    }
    cout << count << endl;
    return 0;
}
