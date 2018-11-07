#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
map<string, int> mp;
string month[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

void init(){
    for(int i = 0; i < 12; i++)
        mp[month[i]] = i + 1;
}

int main(){

    int t;
    scanf("%d", &t);
    init();
    for(int tes = 1; tes <= t; tes++){
        string mnth1;
        int d1;
        ll y1;
        cin>>mnth1;
        scanf("%d, %lld", &d1, &y1);
        ll ty1 = y1, ty2 = y1;

        string mnth2;
        int d2;
        ll y2, ans = 0;
        cin>>mnth2;
        scanf("%d, %lld", &d2, &y2);
        if(mp[mnth1] > 2) y1++, ty1++, ty2++;

        if(mp[mnth2] < 2 ) y2--;
        if(mp[mnth2] == 2 && d2 < 29) y2--;

        while(y1 % 4 != 0LL && y1 <= y2) y1++;
        while(ty1 % 100 != 0LL && ty1 <= y2) ty1++;
        while(ty2 % 400 != 0LL && ty2 <= y2) ty2++;

        if(y1 % 4 == 0 && y1 <= y2) ans++;
        if(ty1 % 100 == 0LL && ty1 <= y2) ans--;
        if(ty2 % 400 == 0LL && ty2 <= y2) ans++;

        ans += (y2 - y1) / 4;
        ans -= (y2 - ty1) / 100;
        ans += (y2 - ty2) / 400;

        printf("Case %d: %lld\n", tes, ans);

    }
}
