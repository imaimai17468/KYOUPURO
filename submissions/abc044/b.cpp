#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int cnt = 0;
    bool even = true;
    for (int i = 0; i < s.size(); i++) {
        for (int j = 0; j < s.size(); j++) {
            if (s[i] == s[j])
                cnt++;
        }
        if (cnt % 2 == 1)
            even = false;

        cnt = 0;
    }
    if (even)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
