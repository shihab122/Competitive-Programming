#include<bits/stdc++.h>
#define mx 100005

using namespace std;
    int mp[1000000+10000];
    long long arr[mx],ans=0;

void add(int y,long long val){
    if((arr[y] & val)>0) ans++;
}

void remov(int y,long long val){
    if((arr[y] & val)>0) ans--;
}


int main(){
    memset(mp,0,sizeof(mp));
    int curL=0,curR=0;
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%lld",&arr[i]);
    int q;
    scanf("%d",&q);
    for(int i=1;i<=q;i++){
        int yu;
        scanf("%d",&yu);
        if(yu==1){
            int X;
            long long Y;
            scanf("%d %lld",&X,&Y);
            arr[X]=Y;

        }
        else{
            ans=0;
            int L,R,gf;
            scanf("%d %d %d",&L,&R,&gf);
            long long k=1<<gf;
            for(int ter=L;ter<=R;ter++)
                add(ter,k);
            printf("%lld\n",ans);

        }
    }



    return 0;
}

/*string longDivision(string y)
{
   string ans;

    int idx = 0;
    int temp = number[idx] - '0';
    while (temp < divisor)
       temp = temp * 10 + (number[++idx] - '0');
    while (number.size() > idx)
    {
        ans += (temp / divisor) + '0';

        temp = (temp % divisor) * 10 + number[++idx] - '0';
    }

    int rem = 0,dvnd=0,quot=0;
    for(int im=0;im<y.size();im++){
        dvnd = (rem * 10) + (y[im]-'0');
        rem = dvnd % 2;
        quot = dvnd / 2;
        if(quot>0||flag==1)ans+= (quot+'0'),flag=1;
    }
    if (ans.length() == 0)
        return "0";

    return ans;
}
*/
