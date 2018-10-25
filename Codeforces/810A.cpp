#include<bits/stdc++.h>

using namespace std;

int main(){
    double n,k,sum=0,cnt=0;
    double a;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        sum+=x;
    }
    a=round(sum/n);
    if(a==k){
        cout<<0<<endl;
        return 0;
    }
    else{
        while(1){
            sum+=k;
            n++;
            cnt++;
            if(k==(round(sum/n))) break;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
