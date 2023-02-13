#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define PI 3.1415926535897932384626433
#define MOD 1000000007

int i = 0;
int ans = 0;

int main() {
    string s, t;
    cin >> s >> t;
    bool same = false;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '@' && t[i] != '@') {
            if (t[i] == 'a' || t[i] == 't' || t[i] == 'c' || t[i] == 'o' || t[i] == 'd' || t[i] == 'e' || t[i] == 'r') {
                s[i] = t[i];
            } else {
                same = true;
            }
        }
        if (s[i] != '@' && t[i] == '@') {
            if (s[i] == 'a' || s[i] == 't' || s[i] == 'c' || s[i] == 'o' || s[i] == 'd' || s[i] == 'e' || s[i] == 'r') {
                t[i] = s[i];
            } else {
                same = true;
            }
        }
    }

    if (s != t) {
        same = true;
    }

    if (same) {
        cout << "You will lose" << endl;
    } else {
        cout << "You can win" << endl;
    }
    return 0;
}
