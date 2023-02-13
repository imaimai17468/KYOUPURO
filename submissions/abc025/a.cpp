#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int n;
    cin >> s >> n;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++) {
        for (int j = 0; j < s.size(); j++) {
            cnt++;
            if (cnt == n) {
                cout << s[i] << s[j] << endl;
            }
        }
    }
    return 0;
}
