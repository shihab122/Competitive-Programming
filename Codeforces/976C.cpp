#include<bits/stdc++.h>

using namespace std;

struct node{
    int l,r,pos;
};

bool cmp(node x, node y){
    if(x.l == y.l) return x.r > y.r;
    else return x.l < y.l;
}

int main(){
    int n;
    scanf("%d",&n);
    vector<node>vc;
    for(int i=0;i<n;i++){

        node a;
        scanf("%d %d",&a.l,&a.r);
        a.pos = i;
        vc.push_back(a);

    }
    sort(vc.begin(),vc.end(),cmp);
    int left = vc[0].l, right = vc[0].r, ans = vc[0].pos;
    for(int i=1;i<n;i++){
        if(left <= vc[i].l && right >= vc[i].r){
            printf("%d %d\n",vc[i].pos+1,ans+1);
            return 0;
        }
        else{
            ans = vc[i].pos;
            left = vc[i].l;
            right = vc[i].r;
        }

    }
    printf("-1 -1\n");

    return 0;
}
