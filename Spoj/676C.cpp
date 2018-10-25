#include<bits/stdc++.h>

using namespace std;

int x, y, a, b;
string s;

int BS(){
    int ans = 0;
    int lo = 1, hi = x, mid, mn;
    while(lo <= hi){

        mid = (lo + hi) / 2;
        a = 0, b = 0;
        for(int i = 0; i < mid; i++){
            if(s[i] == 'a') a++;
            else b++;
        }

        mn = min(a, b);
        int u = 1, v = mid;
        while(v < x && mn > y){
            if(s[u - 1] == 'a') a--;
            else b--;
            if(s[v] == 'a') a++;
            else b++;
            mn = min(a, b);
            v++;
            u++;
        }

        if(mn <= y) lo = mid + 1, ans = a + b;
        else hi = mid - 1;
    }

    return ans;

}

int main(){
    scanf("%d %d", &x, &y);
    cin>>s;
    int ans = BS();
    printf("%d\n", ans);


    return 0;
}
