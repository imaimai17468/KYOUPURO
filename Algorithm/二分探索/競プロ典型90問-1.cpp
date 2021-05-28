#include<bits/stdc++.h>
using namespace std;
 
using ll = long long;
using pll = pair<ll, ll>;
#define all(x) (x).begin(), (x).end()
#define call(x) (x).cbegin(), (x).cend()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define sz(x) ((x).size())
#define pd(a) printf("%.10f\n",a)
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end())
#define rep(i, a, b) for(ll i = ll(a); i < ll(b); i++)
ll gcd(ll a,ll b){return b ? gcd(b,a%b) : a;}
ll lcm(ll a,ll b){return a / gcd(a,b) * b;}
ll ceil(ll a, ll b){return ((a)+(b)-1)/b;}
template<class T> inline bool chmax(T &a, const T &b){ if(a < b){ a=b; return 1; } return 0; }
template<class T> inline bool chmin(T &a, const T &b){ if(a > b){ a=b; return 1; } return 0; }

int main(){
	ll n, l, k;
	cin >> n >> l >> k;
	vector<ll> a(n);
	rep(i, 0, n) cin >> a[i];

	ll L = -1, R = l+1;
	while(R - L > 1){
		ll mid = L + (R - L) / 2;

		ll cnt = 0, pre = 0;
		rep(i, 0, n){
			if(a[i] - pre >= mid && l - a[i] >= mid){
				cnt++;
				pre = a[i];
			}
		}
		if(cnt >= k) L = mid;
		else R = mid;
	}
	cout << L << endl;
	return 0;
} 