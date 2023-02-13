#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define PI 3.1415926535897932384626433
#define MOD 1000000007

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        int in;
        cin >> in;
        if (count(a.begin(), a.end(), in) == 0) {
            a.push_back(in);
        }
    }
    sort(a.begin(), a.end(), greater<int>());
    cout << a.at(1) << endl;
    return 0;
}
