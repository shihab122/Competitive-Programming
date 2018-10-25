#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    string a, b;
    cin>>a;
    cin>>b;
    int ans = 0;
    a.push_back('#');
    b.push_back('#');
    for(int i = 0; i < n; i++){
        if(a[i] == b[i]) continue;
        ans++;
        if(a[i] != a[i + 1] && a[i + 1] != b[i + 1]) swap(a[i], a[i + 1]);
    }

    printf("%d\n", ans);

    return 0;
}
