#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n < 1200)
        cout << "ABC" << endl;
    else if (n >= 1200 && n < 2800)
        cout << "ARC" << endl;
    else if (n >= 2800)
        cout << "AGC" << endl;
    return 0;
}
