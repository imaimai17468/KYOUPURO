#include <bits/stdc++.h>
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
  ll a[3][3];
  for(ll i = 0; i < 3; i++){
    for(ll j = 0; j < 3; j++){
      cin >> a[i][j];
    }
  }
 
  ll n;
  cin >> n;
  ll b[n];
  for(ll i = 0; i < n; i++) cin >> b[i];
 
  bool ok[3][3] = {false};
  for(ll j = 0; j < 3; j++){
    for(ll k = 0; k < 3; k++){
      for(ll i = 0; i < n; i++){
        if(b[i] == a[j][k]){
          ok[j][k] = true;
        }
      }
    }
  }
 
  for(ll i = 0; i < 3; i++){
    if(ok[i][0] == true && ok[i][1] == true && ok[i][2] == true){
      cout << "Yes" << endl;
      return 0;
    }
  }
 
  for(ll i = 0; i < 3; i++){
    if(ok[0][i] == true && ok[1][i] == true && ok[2][i] == true){
      cout << "Yes" << endl;
      return 0;
    }
  }
 
  if(ok[0][0] == true && ok[1][1] == true && ok[2][2] == true){
    cout << "Yes" << endl;
    return 0;
  }
 
  if(ok[0][2] == true && ok[1][1] == true && ok[2][0] == true){
    cout << "Yes" << endl;
    return 0;
  }
 
  cout << "No" << endl;
  return 0;
}