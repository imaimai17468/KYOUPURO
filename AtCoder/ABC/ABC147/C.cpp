#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> P;

#define mod 1000000007
#define inf 1000000000
#define all(x) (x).begin(), (x).end()
#define pb push_back

const long double PI = acos(-1);

ll gcd(ll a,ll b){return b ? gcd(b,a%b) : a;}
ll lcm(ll a,ll b){return a / gcd(a,b) * b;}

int main(){
  ll n;
  cin >> n;
  vector<vector<pair<ll, ll>>> v;
  v.resize(n);

  for(ll i = 0; i < n; i++){
    ll a = 0;
    cin >> a;
    v[i].resize(a);
    for(ll j = 0; j < a; j++){
      cin >> v[i][j].first >> v[i][j].second;
      v[i][j].first--;
    }
  }
  
  ll res = 0;
  for(ll i = 0; i < (1<<n); i++){
    bool flag = true;

    for(ll j = 0; j < n; j++){
      if(!(i & (1 << j))) continue;

      for(pair<ll, ll> xy : v[j]){
        ll x = xy.first;
        ll y = xy.second;

        if(y == 1 && !(i & (1 << x))) flag = false;
        if(y == 0 && (i & (1 << x))) flag = false;
      }
    }

    if(flag){
      ll count = 0;
      for(ll j = 0; j < n; j++){
        if(i & (1 << j)) count++;
      }
      res = max(res, count);
    }
  }

  cout << res << endl;
  return 0;
}