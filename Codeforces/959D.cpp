#include<bits/stdc++.h>

using namespace std;

int gcd(int a,int b){
    if(b==0) return a;
    else return gcd(b,a%b);
}

int main(){
    int a;
    list<int>vc;
    int arr[a+1]
    scanf("%d",&a);
    bool prime[a+100];
    memset(prime,true,sizeof(prime));
    prime[1]=false;
    prime[2]=true;
    int limit=sqrt(a)+2;
    for(int i=4;i<=a;i+=2) prime[i]=false;

    for(int i=3;i<=sqrt(a)+2;i++){
        if(prime[i]){
            vc.push_back(i);
            if(i<=limit){
                for(int j=i*i;j<=a;j+=i*2)
                    prime[j]=false;
            }
        }
    }
    for(int i=1;i<=a;i++){
        if(prime[])
    }


    return 0;
}
