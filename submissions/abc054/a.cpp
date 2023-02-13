#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int a, b;
    cin >> a >> b;
    if (a > b) {
        if (b == 1)
            cout << "Bob" << endl;
        else
            cout << "Alice" << endl;
    } else if (a < b) {
        if (a == 1)
            cout << "Alice" << endl;
        else
            cout << "Bob" << endl;
    } else
        cout << "Draw" << endl;
    return 0;
}
