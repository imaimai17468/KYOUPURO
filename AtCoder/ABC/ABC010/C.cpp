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
  ll txa, tya, txb, tyb, t, v;
  cin >> txa >> tya >> txb >> tyb >> t >> v;
  ll n;
  cin >> n;
  vector<double> x(n), y(n);
  for(ll i = 0; i < n; i++) cin >> x[i] >> y[i];

  for(ll i = 0; i < n; i++){
    double len = sqrt(pow(x[i]-txa, 2) + pow(y[i]-tya, 2)) + sqrt(pow(x[i]-txb, 2) + pow(y[i]-tyb, 2));

    double time = t * v;
    if(len <= time){
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
  return 0;
}