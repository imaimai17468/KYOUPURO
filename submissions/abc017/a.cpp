#include <bits/stdc++.h>
using namespace std;

int main() {
    int e1, e2, e3;
    int s1, s2, s3;
    cin >> s1 >> e1 >> s2 >> e2 >> s3 >> e3;
    double ans = s1 * e1 + s2 * e2 + s3 * e3;
    ans /= 10;
    cout << (int)ans << endl;
    return 0;
}
