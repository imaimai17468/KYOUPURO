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
  ll a = 0, b = 0;
  for(ll i = 0; i < 3; i++){
    char c = 0;
    cin >> c;
    if(c == 'A') a++;
    else b++;
  }
  if(a == 3 || b == 3) cout << "No" << endl;
  else cout << "Yes" << endl;
}