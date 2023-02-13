#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define PI 3.1415926535897932384626433
#define MOD 1000000007

int main() {
    string a, b, sum;
    cin >> a >> b;
    sum = a + b;
    ll ans = stoi(sum);
    cout << ans * 2 << endl;
    return 0;
}
