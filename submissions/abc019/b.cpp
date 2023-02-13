#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define PI 3.1415926535897932384626433
#define MOD 1000000007

int main() {
    string s;
    cin >> s;
    int cnt = 1;
    char c = s[0];
    for (int i = 1; i <= s.size(); i++) {
        if (s[i] != c) {
            cout << c << cnt;
            c = s[i];
            cnt = 0;
        }
        cnt++;
    }
    cout << endl;
    return 0;
}
