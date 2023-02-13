#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    char a, b;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++) {
        if (i == 0)
            a = s[i];
        else if (i == s.size() - 1)
            b = s[i];
        else
            cnt++;
    }
    cout << a << cnt << b << endl;
    return 0;
}
