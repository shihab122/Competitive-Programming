#include<bits/stdc++.h>

using namespace std;

int main(){
    string a, b;
    cin>>a;
    cin>>b;
    int ans = a.size() + b.size();
    int j = 1, m = 0;
    int u = a.size(), v = b.size();
    while(1){
        if(j > a.size() || j > b.size()) break;
        if(a[u - j] == b[v - j]) ans -= 2;
        else break;
        j++;
    }
    printf("%d\n", ans);

    return 0;
}
