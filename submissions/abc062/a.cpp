#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[13] = {1, 3, 1, 2, 1, 2, 1, 1, 2, 1, 2, 1};
    int x, y;
    cin >> x >> y;
    if (a[x - 1] == a[y - 1])
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
