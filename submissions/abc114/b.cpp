#include <bits/stdc++.h>
using namespace std;

int main() {
    int num = 1001;
    string s;
    cin >> s;

    for (int i = 0; i < s.length() - 1; i++) {
        int sub;
        string a;
        a = s.substr(i, 3);
        sub = abs(753 - stoi(a));
        num = min(num, sub);
    }
    cout << num << endl;
    return 0;
}
