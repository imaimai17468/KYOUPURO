#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i;
    cin >> n;
    vector<string> w(n);
    for (i = 0; i < n; i++) {
        cin >> w[i];
    }

    for (i = 0; i < n - 1; i++) {
        string w1 = w[i];
        string w2 = w[i + 1];
        if (w1[w1.size() - 1] != w2[0]) {
            cout << "No" << endl;
            // cout << i << w1[w1.size()-1] << w2[0] << endl;
            return 0;
        }

        for (int j = i + 1; j < n; j++) {
            if (w[i] == w[j]) {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}
