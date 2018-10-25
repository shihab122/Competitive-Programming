#include<bits/stdc++.h>

using namespace std;

int findlen(int a){
    int cnt=0,t=1;
    while(t==1){
        cnt++;
        a/=2;
        if(a==0) t=0;
    }
    return cnt;

}

int main(){
    int n;
    scanf("%d",&n);
    int len=findlen(n);
    int up=(len/2)+1;
    int low=len/2;
    int val=0;
    for(int i=0;i<up;i++){
        val+=pow(2,i);
    }
    while(1){
        int mul=pow(2,low);
        int v=val*mul;
        int l=n%v;
        if(l==0){
            printf("%d\n",v);
            return 0;
        }
        up--;
        val-=pow(2,up);
        low--;
    }
    return 0;
}
