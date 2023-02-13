#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int t;
    cin >> s >> t;
    int x = 0, y = 0;
    int que = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'L') x--;
        if (s[i] == 'R') x++;
        if (s[i] == 'U') y--;
        if (s[i] == 'D') y++;
        if (s[i] == '?') que++;
    }

    if (t == 1) {
        cout << abs(x) + abs(y) + que << endl;
        return 0;
    } else {
        if (que <= abs(x) + abs(y)) {
            cout << abs(x) + abs(y) - que << endl;
            return 0;
        } else if ((que - abs(x) - abs(y)) % 2 == 0) {
            cout << 0 << endl;
            return 0;
        } else {
            cout << 1 << endl;
            return 0;
        }
    }
    return 0;
}
