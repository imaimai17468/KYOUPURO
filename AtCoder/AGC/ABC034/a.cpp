#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef vector<pair<ll, ll>> pll;
 
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

  ll n, a, b, c, d;
  string s;
  cin >> n >> a >> b >> c >> d >> s;

  if(c < d){
    string iwa = s.substr(a-1, d-a+1);
    if(iwa.find("##") == -1) cout << "Yes" << endl;
    else cout << "No" << endl;
  }else{
    string iwa = s.substr(a-1, c-a+1);
    string tmp = s.substr(b-2, d-b+3);
    if(iwa.find("##") == -1 && tmp.find("...") != -1) cout << "Yes" << endl;
    else cout << "No" << endl;
  }

  return 0;
}