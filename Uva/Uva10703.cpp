#include<bits/stdc++.h>

using namespace std;

int main(){
    int w,h,n;
    //freopen("input.txt","w",stdout);
    while(cin>>w>>h>>n){
        if(w==0&&h==0&&n==0) break;
        int arr[w+1][h+1];
        memset(arr,0,sizeof(arr));
        int ll=w*h;
        int x1,y1,x2,y2;
        int mnx,mny,mxx,mxy,u,x,y,v;
        for(int i=0;i<n;i++){
            cin>>x1>>y1>>x2>>y2;
            if(i==0) {
                mnx=min(x1,x2);
                mxx=max(x1,x2);
                mny=min(y1,y2);
                mxy=max(y1,y2);
                x=mnx,y=mny,u=mxx,v=mxy;
            }
            else{
                mnx=min(x1,x2);
                mxx=max(x1,x2);
                mny=min(y1,y2);
                mxy=max(y1,y2);
                x=min(x,mnx);
                u=max(u,mxx);
                y=min(y,mny);
                v=max(v,mxy);
            }
            for(int j=mnx;j<=mxx;j++)
                for(int k=mny;k<=mxy;k++)
                    arr[j][k]=1;
        }
        int cn=0;
        for(int i=x;i<=u;i++)
            for(int j=y;j<=v;j++){
                if(arr[i][j]==1) cn++;
        }
        ll=ll-cn;
        if(ll==0) cout<<"There is no empty spots."<<endl;
        else if(ll==1) cout<<"There is one empty spot."<<endl;
        else cout<<"There are "<<ll<<" empty spots."<<endl;
    }

    return 0;
}
