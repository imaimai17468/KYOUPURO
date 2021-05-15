#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define mod 1000000007
#define all(x) (x).begin(), (x).end()
#define pb push_back

const long double PI = acos(-1);

ll gcd(ll a,ll b){return b ? gcd(b,a%b) : a;}
ll lcm(ll a,ll b){return a / gcd(a,b) * b;}

ll power(ll a, ll b){
  return b?power(a*a%mod,b/2)*(b%2?a:1)%mod:1;
}

ll comb(ll n, ll k){
  ll x = 1, y = 1;
  for(ll i = 1; i <= k; i++){
    x = x * (n-i+1) % mod;
    y = y *  i % mod;
  }
  return x*power(y, mod-2)%mod;
}

int main(){
  ll n, a, b;
  cin >> n >> a >> b;

  ll ans = power(2, n);
  ans -= 1;
  ans -= comb(n, a);
  ans -= comb(n, b);
  cout << (ans%mod+mod)%mod << endl;
  return 0;
}