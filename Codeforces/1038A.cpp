#include<bits/stdc++.h>
#define sc scanf
#define pr printf


using namespace std;
typedef long long ll;


int main(){
    int n, k;
    scanf("%d %d", &n, &k);

    string a;
    cin>>a;

    vector<char>vc;
    map<char,int>mp;
    int mn = 1000000;

    char ch[26],l = 0;

    for(char j = 'A'; j <= 'Z'; j++) ch[l++] = j;

    for(int i = 0; i < n; i++){
        if(mp[a[i]] == 0) vc.push_back(a[i]);
        mp[a[i]]++;
    }
    sort(vc.begin(), vc.end());

    if(vc.size() < k || n < k) printf("0\n");
    else{
        for(int i = 0; i < k; i++){
            if(vc[i] != ch[i]){
                printf("0\n");
                return 0;
            }
            mn = min(mn, mp[ch[i]]);
        }
        long long ans = mn * k;
        printf("%lld\n", ans);

    }

    return 0;
}
