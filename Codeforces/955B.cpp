#include<bits/stdc++.h>

using namespace std;

int main(){
    string a;
    cin>>a;
    int flag = 0;
    map<char,int>mp;
    if(a.size() < 4){
        printf("NO\n");
        return 0;
    }
    int distinct=0;
    for(int i=0;i<a.size();i++){
        mp[a[i]]++;
        if(mp[a[i]] == 1) distinct++;
    }
    if(distinct == 4 || distinct == 3){
        printf("YES\n");
    }
    else if(distinct == 2){
        map<char,int>:: iterator it;
        for(it = mp.begin();it != mp.end();it++) if(it->second==1){printf("NO\n");return 0;}
        printf("YES\n");
    }
    else printf("NO\n");

    return 0;
}
