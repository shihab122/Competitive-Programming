#include<bits/stdc++.h>
#include<ext/rope>

using namespace std;
using namespace __gnu_cxx;

int main()
{
	int n, m, x;
    scanf("%d %d", &n, &m);
    rope<int> v;
	for (int i = 0; i < n; i++){
        scanf("%d", &x);
        v.push_back(x);
	}
	for (int i = 0; i < m; i++){
		int t, l, r;
		scanf("%d %d %d", &t, &l, &r);
		l--;
		r--;
		rope<int> cur = v.substr(l, r - l + 1);
		v.erase(l, r - l + 1);
		if(t == 1) v.insert(v.mutable_begin(), cur);
		else v.insert(v.mutable_end(), cur);
	}
	printf("%d\n", abs(v[0] - v[n - 1]));
    for (int i = 0; i < v.size(); i++) printf("%d ", v[i]);
    puts("\n");
	return 0;
}
