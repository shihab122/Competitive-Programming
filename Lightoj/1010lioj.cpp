#include<bits/stdc++.h>

using namespace std;

int main(){
    //freopen("in.txt","w",stdout);
    int t;
    scanf("%d",&t);
    for(int tes = 1;tes <= t;tes++){
        int r,c,total=0;
        scanf("%d %d",&r,&c);
        if(c == 1||r == 1) printf("Case %d: %d\n",tes,max(r,c));
        else if(c == 2||r == 2){
            int mn = 2;
            int mx = max(c,r);
            int mod = mx%2;
            mx/=2;
            total += (4*(mx/2));
            total += (4*(mx%2));
            if(mx%2==0) total += 2 * mod;
            printf("Case %d: %d\n",tes,total);
        }
        else{
            if(c%2 != 0) total += (r/2)+(r%2);
            total += r*(c/2);
            printf("Case %d: %d\n",tes,total);
        }


    }

    return 0;
}
