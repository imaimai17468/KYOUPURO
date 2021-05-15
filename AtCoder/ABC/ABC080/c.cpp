#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef pair<int, int> P;
 
#define mod 1000000007
#define inf 1000000000
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define popcount(x) __builtin_popcountll(x)
 
const long double PI = acos(-1);
 
ll gcd(ll a,ll b){return b ? gcd(b,a%b) : a;}
ll lcm(ll a,ll b){return a / gcd(a,b) * b;}

int main(){
  ll n;
  cin >> n;
  ll f[n][10];
  for(ll i = 0; i < n; i++){
    for(ll j = 0; j < 10; j++) cin >> f[i][j];
  }
  ll p[n][11];
  for(ll i = 0; i < n; i++){
    for(ll j = 0; j < 11; j++) cin >> p[i][j];
  }

  ll ans = -(1<<30);
  for(ll bit = 1; bit < (1 << 10); bit++){
    ll cnt = 0;
    for(ll i = 0; i < n; i++){
      ll c = 0;
      for(ll j = 0; j < 10; j++){
        if((bit & (1 << j)) && f[i][j]) c++;
      }
      cnt += p[i][c];
    }
    ans = max(ans, cnt);
  }
  cout << ans << endl;
  return 0;
}