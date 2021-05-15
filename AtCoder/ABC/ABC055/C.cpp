#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define mod 1000000007
#define all(x) (x).begin(), (x).end()
#define pb push_back

const long double PI = acos(-1);

ll gcd(ll a,ll b){return b ? gcd(b,a%b) : a;}
ll lcm(ll a,ll b){return a / gcd(a,b) * b;}
ll GetDigit(ll num) {return log10(num)+1;}

int main(){
  ll n, m;
  cin >> n >> m;

  ll ans = 0;
  if(n * 2 <= m){
    ans = n + (m - n * 2) / 4;
  }else{
    ans = m / 2;
  }
  cout << ans << endl;
  return 0;
}
