#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < 4; i++) {
        if (s[i] == '+')
            cnt++;
        else
            cnt--;
    }
    cout << cnt << endl;
    return 0;
}
