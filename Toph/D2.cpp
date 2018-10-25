#include <cstdio>
using namespace std;
long long big_mod(long long x,long long y,long long mod)
{
    if(y==0) return 1 ;
    if(y==1) return x % mod ;
    if(y%2==0)
    {
        long long r = big_mod(x,y/2,mod);
        return (r*r)%mod;
    }
    else
    {
        return ( big_mod(x,y-1,mod) * (x%mod) ) % mod ;
    }
}
int main()
{
    long long x,y,mod;
   while(scanf("%lld%lld%lld",&x,&y,&mod)){
        if(x==0&&y==0&&mod==0) break;
        printf("%lld\n",big_mod(x,y,mod));
   }
    return 0;
}
