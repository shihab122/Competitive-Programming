#include<bits/stdc++.h>

using namespace std;

struct node{
    int val, pos;
};

bool cmp(node x, node y){
    if(x.val != y.val) return x.val < y.val;
    else return x.pos < y.pos;
}

int main(){
    int n;
    scanf("%d", &n);
    vector<node> vc;
    for(int i = 0; i < n*2; i++){
        node a;
        scanf("%d", &a.val);
        a.pos = i;
        vc.push_back(a);
    }

    sort(vc.begin(), vc.end(), cmp);
    int mx = 0;
    for(int i = 0; i < vc.size(); i++){
        int c = abs(i - vc[i].pos);
        cout<<i<<" "<<vc[i].pos<<endl;
        mx = max(mx, c);
    }
    printf("%d\n", mx);


    return 0;
}
