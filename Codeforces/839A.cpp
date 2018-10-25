#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    vector<int>c;
    long long sum=0,day=0;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        sum+=a;
        if(sum>8&&k>0){
            k-=8;
            sum-=8;
            day++;
        }
        else if(k>0){
            k-=sum;
            day++;
            sum=0;
        }
    }
    if(k<=0)
        cout<<day<<endl;
    else
        cout<<-1<<endl;
    return 0;
}
