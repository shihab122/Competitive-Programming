#include<bits/stdc++.h>

using namespace std;
typedef long long ll;


    string a,b;
void divide(string x,ll dvsr)
{
ll rem = 0;
ll dvnd;
ll quot;
int i;
    for(i = 0; i <b.size() ; i++){
        dvnd = (rem * 10) + b[i]-'0';
        rem = dvnd % dvsr;
        quot = dvnd / dvsr;
        b[i] = quot;
    }
}


int main(){
    long long c;
    while(cin>>a>>b){
        scanf("%lld",&c);
        if(a=="0"&&b=="0"&&c==0) break;
        long long res = 0;
        if(c==1){
            printf("0\n");
            continue;
        }
        for (int i = 0; i < a.length(); i++)
             res = (res*10 + a[i] - '0') %c;
        long long sum=big_mod(res,b,c)%c;
        printf("%lld\n",sum);
        a.clear();
        b.clear();

    }

    return 0;
}
