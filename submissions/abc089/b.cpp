#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i, ans[4] = {0, 0, 0, 0};
    char s[101];
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> s[i];
    }

    for (i = 0; i < n; i++) {
        if (s[i] == 'P') ans[0] = 1;
        if (s[i] == 'W') ans[1] = 1;
        if (s[i] == 'G') ans[2] = 1;
        if (s[i] == 'Y') ans[3] = 1;
    }
    if (ans[0] + ans[1] + ans[2] + ans[3] == 3)
        cout << "Three" << endl;
    else if (ans[0] + ans[1] + ans[2] + ans[3] == 4)
        cout << "Four" << endl;
}
