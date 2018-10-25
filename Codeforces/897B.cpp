#include<bits/stdc++.h>
#define ll long long int
using namespace std;



int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    long long sum = 0;
    long long temp,now;
    for(int i=1;i<=n;i++){
        temp=i,now=i;
        while(temp){
            now=((now*10)+(temp%10))%m;
            temp/=10;
        }
        sum+=now;
        sum%=m;
    }
    printf("%lld\n", sum);
    return 0;
}
