#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int maxn = 1e5 + 100, mod = 1e9 + 7;
long long p[maxn], x[maxn], f[maxn],a,b,n,q;

int main(){
	cin >> n >> q;
	for(int i = 0; i < 2; i++)
		cin >> f[i];
	cin >> a >> b;
	for(int i = 2; i < maxn; i++)
		f[i] = (1LL * a * f[i-2] + 1LL * b * f[i-1]) % mod;
	for(int i = 0; i < n; i++)
		cin >> x[i];
	while(q--){
		int l,r;
		cin >> l >> r;
		-- l;
		-- r;
		if(l < r){
			p[l] = (p[l] + f[0]) % mod;
			p[l+1] = (p[l+1] + f[1])%mod;
			p[l+1] = (1LL * p[l+1] + mod - 1LL * ((1LL * b * f[0])%mod))%mod;
			p[r + 1] = (1LL * p[r+1] + mod - f[r - l + 1])%mod;
			p[r + 2] = (1LL * p[r+2] + mod - 1LL * ((1LL * a * f[r-l])%mod))%mod;
		}
		else{
			p[l] = (p[l] + f[0])%mod;
			p[r+1] = (1LL * p[r+1] + mod - ((1LL * b * f[0])%mod))%mod;
			p[r+2] = (1LL * p[r+2] + mod - 1LL * ((1LL * a * f[0])%mod))%mod;
		}
	}
	for(int i = 0; i < n; i++){
		if(i > 1)
			p[i] = (1LL * p[i] + a * p[i-2])%mod;
		if(i)
			p[i] = (1LL * p[i] + b * p[i-1])%mod;
		x[i] = (p[i] + x[i])%mod;
		cout << x[i];
		if(i + 1 < n)
			cout << ' ';
	}
	cout << endl;
	return 0;
}
