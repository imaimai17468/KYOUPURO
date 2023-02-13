#include <bits/stdc++.h>
using namespace std;

bool chk(string s) {
    int n = s.size();
    if (n % 2 != 0) return false;
    return (s.substr(0, n / 2) == s.substr(n / 2));
}

int main() {
    string s;
    cin >> s;
    for (int i = s.size() - 1;; i--) {
        if (chk(s.substr(0, i))) {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}
