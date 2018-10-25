#include<bits/stdc++.h>

using namespace std;
typedef long long ll;


int main(){
    int n;
    scanf("%d",&n);
    map<int,int>mp;
    int cnt=0;
    vector<int>vc;
    int arr[n+1];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        mp[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        mp[arr[i]]--;
        if(mp[arr[i]]==0) cnt++,vc.push_back(arr[i]);
    }
    printf("%d\n",cnt);
    for(int i=0;i<vc.size();i++) printf("%d ",vc[i]);
    printf("\n");

    return 0;
}
