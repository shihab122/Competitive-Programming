#include<bits/stdc++.h>

using namespace std;

int check(int x){
    int res=0;
    while(x>0){
        res+=x%10;
        x/=10;
    }
    return res;
}

int main(){
    int n;
    vector<int>y;
    scanf("%d",&n);
    for(int i=max(0,n-80);i<=n;i++){
        if(i+check(i)==n) y.push_back(i);
    }
    printf("%d\n",y.size());
    sort(y.begin(),y.end());
    for(int i=0;i<y.size();i++)
        printf("%d\n",y[i]);
    return 0;
}
