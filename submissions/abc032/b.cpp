#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int n;
    cin >> s >> n;
    set<string> ss;
    if (n > s.size()) {
        cout << 0 << endl;
        return 0;
    }
    for (int i = 0; i < s.size() - n + 1; i++) {
        ss.insert(s.substr(i, n));
    }
    cout << ss.size() << endl;
    return 0;
}
