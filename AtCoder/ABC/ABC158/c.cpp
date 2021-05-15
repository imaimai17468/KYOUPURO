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
  ll a, b;
  cin >> a >> b;
 
  for(ll i = 1; i <= 10000; i++){
    double zeia = (int)(i * 0.08);
    double zeib = (int)(i * 0.1);
 
    if(zeia == a && zeib == b){
      cout << i << endl;
      return 0;
    }
  }
 
  cout << -1 << endl;
  return 0;
}