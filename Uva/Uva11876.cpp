#include<bits/stdc++.h>

using namespace std;

int NOD[1000005], dp[1000005];

int BS1(int lo, int hi){
    int mid, x;
    int l = 0, h = hi;
    while(l <= h){
        mid = (l + h) / 2;
        x = dp[mid];
        if(x <= hi) l = mid + 1;
        else h = mid - 1;

    }
    return l + 1;
}

int BS2(int lo, int hi){
    int mid, x;
    int l = 0, h = hi;
    while(l <= h){
        mid = (l + h) / 2;
        x = dp[mid];
        if(x > lo) h = mid - 1;
        else l = mid + 1;
    }
    return l - 1;
}


int main(){
    memset(NOD, 0, sizeof(NOD));
    for(int i = 1; i <= 1000000; i++){
        for(int j = i; j <= 1000000; j += i)
            NOD[j]++;
    }
    dp[0] = 1;
    NOD[0] = 1;

    for(int i = 1; i <= 1000000; i++)
        dp[i] = dp[i - 1] + NOD[dp[i - 1]];


    int t;
    scanf("%d", &t);
    for(int tes = 1; tes <= t; tes++){
        int l, h;
        scanf("%d %d", &l, &h);
        int a = BS2(l, h);
        int b = BS1(l, h);
        if(dp[a] < l) a++;
        if(dp[b] > h) b--;
        int ans = 0;

        a = b - a;

        printf("Case %d: %d\n", tes, a);
    }


    return 0;
}
