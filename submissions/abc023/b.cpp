#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define PI 3.1415926535897932384626433
#define MOD 1000000007

int main() {
    int n;
    string s;
    cin >> n >> s;
    string t = "b";
    for (int i = 1; i < 100; i++) {
        if (t.size() > s.size()) {
            cout << -1 << endl;
            return 0;
        }
        if (s == t) {
            cout << i - 1 << endl;
            return 0;
        }
        if (i % 3 == 0) {
            t = "b" + t + "b";
        } else if (i % 3 == 1) {
            t = "a" + t + "c";
        } else if (i % 3 == 2) {
            t = "c" + t + "a";
        }
    }
    return 0;
}
