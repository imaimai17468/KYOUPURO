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
  vector<ll> s(n-1), c(n-1), f(n-1);
  for(ll i = 0; i < n-1; i++) cin >> c[i] >> s[i] >> f[i];

  vector<ll> ans(n-1);
  for(ll i = 0; i < n-1; i++){
    for(ll j = i; j < n-1; j++){
      if(ans[i] < s[j]) ans[i] = s[j];
      ans[i] = (ans[i] + f[j] - 1) / f[j] * f[j] + c[j];
    }
  }

  for(ll i = 0; i < n-1; i++){
    cout << ans[i] << endl;
  }
  cout << 0 << endl;
  return 0;
}