#include<bits/stdc++.h>

using namespace std;

struct ii{
    int dist,coin,pos;
};


int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x,y;
        scanf("%d %d %d",&n,&x,&y);
        vector<ii>vc;
        for(int i=0;i<n;i++){
            int a,b;
            scanf("%d %d",&a,&b);
            if(a<=x&&b>=y){
                ii nn;
                nn.dist=a;
                nn.coin=b;
                nn.pos=i+1;
                vc.push_back(nn);
            }
        }
        if(vc.size()==0){
            printf("-1\n");
            continue;
        }
        int bj=-1,ps=-1,di=INT_MAX;
        for(int i=0;i<vc.size();i++){
           if(di>vc[i].dist){
                bj=vc[i].coin;
                ps=vc[i].pos;
                di=vc[i].dist;
            }
            else if(di==vc[i].dist&&bj<vc[i].coin){
                bj=vc[i].coin;
                ps=vc[i].pos;
                di=vc[i].dist;
            }
            else if(di==vc[i].dist&&bj==vc[i].coin&&ps>vc[i].pos){
                bj=vc[i].coin;
                ps=vc[i].pos;
                di=vc[i].dist;
            }
        }
        printf("%d\n",ps);
        vc.clear();
    }


    return 0;
}
