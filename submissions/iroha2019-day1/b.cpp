#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    string s;
    cin >> s >> k;
    for (int i = 0; i < k; i++) {
        rotate(s.begin(), s.begin() + 1, s.end());
    }
    cout << s << endl;
    return 0;
}
