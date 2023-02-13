#include <bits/stdc++.h>
using namespace std;

int main() {
    double a, b;
    cin >> a >> b;
    cout << (a > b ? "GREATER" : a < b ? "LESS"
                                       : "EQUAL")
         << endl;
    return 0;
}
