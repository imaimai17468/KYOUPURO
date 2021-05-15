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
  ll n, k;
  cin >> n >> k;

  ll ans = 0;
  ll wareru = n / k;
  ans += pow(wareru, 3);

  if(k % 2 == 0){
    ll cnt = (n + k/2) / k;
    ans += pow(cnt, 3);
  }

  cout << ans << endl;
  return 0;
}