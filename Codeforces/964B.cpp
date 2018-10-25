#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ii pair<int,int>
#define MP map<int,int>
using namespace std;

int main(){
    int n,a,b,c,t;
    scanf("%d %d %d %d %d",&n,&a,&b,&c,&t);
    ll total =0,sum=0,x=1;
    for(int i=1;i<=n;i++){
        int ti;
        cin>>ti;
        if(b<c){
            total+=a;
            total+=(t-ti)*(c-b);


        }
        else{
            total+=a;
        }
    }
    total+=sum;
    cout<<total<<endl;
    return 0;
}

