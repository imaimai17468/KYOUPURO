#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define PI 3.1415926535897932384626433
#define MOD 1000000007

int main() {
    string s;
    cin >> s;

    if (s[0] >= 'a' && s[0] <= 'z') {
        s[0] -= 'a' - 'A';
    }

    for (int i = 1; i < s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] -= 'A' - 'a';
        }
    }

    cout << s << endl;
    return 0;
}
