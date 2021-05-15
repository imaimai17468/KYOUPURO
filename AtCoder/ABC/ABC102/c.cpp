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
  vector<ll> a(n);
  for(ll i = 0; i < n; i++) cin >> a[i];

  ll ans = 0;
  vector<ll> mid(n);
  for(ll i = 0; i < n; i++){
    mid[i] = a[i] - (i+1);
  }
  sort(all(mid));

  ll b = 0;
  if(n % 2 == 0){
    b = (mid[n/2] + mid[n/2-1]) / 2;
  }else{
    b = mid[n/2];
  }
  //cout << b << endl;

  for(ll i = 0; i < n; i++){
    ans += abs(a[i] - i-1 - b);
  }

  cout << ans << endl;
  return 0;
}