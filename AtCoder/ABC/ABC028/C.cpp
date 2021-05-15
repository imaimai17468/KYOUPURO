#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define mod 1000000007
#define all(x) (x).begin(), (x).end()
#define pb push_back

const long double PI = acos(-1);

ll gcd(ll a,ll b){return b ? gcd(b,a%b) : a;}
ll lcm(ll a,ll b){return a / gcd(a,b) * b;}



int main(){
  vector<ll> a(5);
  for(ll i = 0; i < 5; i++) cin >> a[i];
  
  cout << max(a[4]+a[3]+a[0], a[4]+a[2]+a[1]) << endl;
  return 0;
}