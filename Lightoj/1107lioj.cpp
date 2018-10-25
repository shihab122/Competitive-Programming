#include<bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin>>T;
    for(int i=1;i<=T;i++){
        int x1,y1,x2,y2,M;
        cin>>x1>>y1>>x2>>y2;
        cin>>M;
        printf("Case %d:\n",i);
        for(int j=1;j<=M;j++){
            int x,y;
            cin>>x>>y;
            if(x>=x1&&x<=x2){
                if(y>=y1&&y<=y2){
                    cout<<"Yes"<<endl;
                    continue;
                }
            }
            cout<<"No"<<endl;
        }
    }
    return 0;
}
