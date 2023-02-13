#include <bits/stdc++.h>
using namespace std;

int main() {
    string s[13];
    int i, j, count = 0, sum = 0;
    for (i = 0; i < 12; i++) cin >> s[i];

    for (i = 0; i < 12; i++) {
        for (j = 0; j < s[i].length(); j++) {
            if (s[i].at(j) == 'r') count++;
        }
        if (count >= 1) sum++;
        count = 0;
    }
    cout << sum << endl;
    return 0;
}
