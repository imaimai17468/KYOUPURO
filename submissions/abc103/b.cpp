#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    for (int i = 0; i < s.size(); i++) {
        rotate(s.begin(), s.begin() + 1, s.end());
        if (s == t) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
