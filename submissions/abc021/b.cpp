#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define PI 3.1415926535897932384626433
#define MOD 1000000007

int main() {
    int n, a, b, k;
    set<ll> st;
    cin >> n >> a >> b >> k;
    st.insert(a);
    st.insert(b);
    int p;
    for (int i = 0; i < k; i++) {
        cin >> p;
        if (st.count(p) > 0) {
            cout << "NO" << endl;
            return 0;
        } else {
            st.insert(p);
        }
    }
    cout << "YES" << endl;
    return 0;
}
