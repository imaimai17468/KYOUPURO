#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> s(3, 0);
    for (int i = 0; i < 3; i++) cin >> s[i];
    sort(s.begin(), s.end(), greater<int>());

    cout << s[0] * 10 + s[1] + s[2] << endl;
    return 0;
}
