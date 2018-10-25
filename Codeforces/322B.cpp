#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    ll arr[3],sum=0,mn,cnt=0;
    for(int i=0;i<3;i++){
        cin>>arr[i];
    }
    mn=arr[0];
    for(int i=0;i<3;i++){
        if(arr[i]>3){
            sum+=arr[i]/3;
            if(arr[i]%3==0&&arr[i]!=0) arr[i]=3,sum--,cnt++;
            else arr[i]%=3;
        }
        mn=min(mn,arr[i]);
    }
    if(mn>0&&cnt<2){
        sum+=mn;
        cout<<sum<<endl;
    }
    else{
        for(int i=0;i<3;i++){
            sum+=arr[i]/3;
        }
        cout<<sum<<endl;
    }
    return 0;
}
