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

ll func(ll n, ll a){
  int res = 0;
  while(n){
    res += n % a;
    n /= a;
  }
  return res;
}

int main(){
  ll n;
  cin >> n;

  ll res = n;
  for(ll i = 0; i <= n; i++){
    ll mi = func(i, 6) + func(n - i, 9);
    res = min(res, mi);
  }
  cout << res << endl;
  return 0;
}