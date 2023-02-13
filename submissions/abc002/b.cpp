#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define PI 3.1415926535897932384626433
#define MOD 1000000007

int i = 0;
int ans = 0;

int main() {
    string s;
    cin >> s;
    int j = 0;
    for (int i = 0; i <= s.size(); i++) {
        if (s[i] == 'a' || s[i] == 'i' || s[i] == 'u' || s[i] == 'e' || s[i] == 'o') {
            s.erase(i, 1);
            i--;
        }
    }
    cout << s << endl;
    return 0;
}
