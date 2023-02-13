#include <bits/stdc++.h>
using namespace std;

int main() {
    int l;
    string s;
    cin >> s;

    l = s.length();

    if (s.at(l - 1) == 'T') {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
