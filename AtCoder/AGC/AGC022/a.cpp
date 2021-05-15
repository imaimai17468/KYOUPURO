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
	
  	string s;
	cin >> s;
	ll len = s.size();

	map<char, ll> mp;
	for(ll i = 0; i < len; i++) mp[s[i]]++;
	if(len < 26){
		char ans;
		for(char c = 'a'; c <= 'z'; c++){
			if(mp[c] == 0){
				ans = c;
				break;
			}
		}
		cout << s + ans << endl;
	}else{
    ll pos = -1;
    for(ll i = len-2; i >=0; i--){
      if(s[i] < s[i+1]){
        pos = i;
        break;
      }
    }
    if(pos == -1) cout << pos << endl;
    else{
      string t = s.substr(0, pos);
      ll pos2 = pos+1;
      for(ll i = pos2; i < len; i++){
        if(s[i] < s[pos2] && s[i] > s[pos]) pos2 = i;
      }
      t += s[pos2];
      cout << t << endl;
    }
  }
	return 0;
}