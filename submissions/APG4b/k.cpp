#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int n, count = 1;
    cin >> s;

    n = s.size();

    for (int i = 0; i < n; i++) {
        if (s.at(i) == '+') count++;
        if (s.at(i) == '-') count--;
    }

    cout << count << endl;
    return 0;
}
