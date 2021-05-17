#include<bits/stdc++.h>
using namespace std;
 
using ll = long long;
using pll = pair<ll, ll>;
#define all(x) (x).begin(), (x).end()
#define call(x) (x).cbegin(), (x).cend()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define sz(x) ((x).size())
#define pd(a) printf("%.10f\n",a)
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end())
#define rep(i, a, b) for(ll i = ll(a); i < ll(b); i++)
ll gcd(ll a,ll b){return b ? gcd(b,a%b) : a;}
ll lcm(ll a,ll b){return a / gcd(a,b) * b;}
ll ceil(ll a, ll b){return ((a)+(b)-1)/b;}
template<class T> inline bool chmax(T &a, const T &b){ if(a < b){ a=b; return 1; } return 0; }
template<class T> inline bool chmin(T &a, const T &b){ if(a > b){ a=b; return 1; } return 0; }

int primeNumber(const int n){
  if(n == 1) return 0;
  if(n == 2) return 1;
  else if(n % 2 == 0) return 0;

  for(int i = 3; i * i <= n; i += 2){
    if(n % i == 0) return 0;
  }
  
  return 1;
}

int main(){
  ll q;
  cin >> q;
  vector<ll> l(q), r(q);
  rep(i, 0, q)cin >> l[i] >> r[i];

  vector<ll> s(100001);
  rep(i, 0, 100000){
    if(primeNumber(i + 1) && primeNumber((i+1 + 1) / 2) && (i+1) % 2 == 1 ) s[i+1] = s[i] + 1;
    else s[i+1] = s[i];
  }

  rep(i, 0, q){
    cout << s[r[i]] - s[l[i]-1] << endl;
  }
  cout << endl;
}