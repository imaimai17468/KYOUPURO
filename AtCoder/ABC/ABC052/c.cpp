#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef pair<int, int> P;
 
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define popcount(x) __builtin_popcountll(x)
 
const long double PI = acos(-1);
 
ll gcd(ll a,ll b){return b ? gcd(b,a%b) : a;}
ll lcm(ll a,ll b){return a / gcd(a,b) * b;}
ll stringcount(string s, char c){return count(s.cbegin(), s.cend(), c);}
bool isInteger(double x){return floor(x) == x;}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  ll n;
  cin >> n;

  vector<ll> a(n+1);
  a[0] = a[1] = 1;
  for(ll i = 2; i <= n; i++){
    ll num = i;
    for(ll j = 2; j <= i; j++){
      while(num % j == 0){
        a[j]++;
        num /= j;
      }
    }
  }

  ll ans = 1;
  for(ll i = 2; i <= n; i++){
    ans *= (a[i]+1);
    ans %= mod;
  }
  cout << ans << endl;
  return 0;
}