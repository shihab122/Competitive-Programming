
#include<bits/stdc++.h>

using namespace std;

struct node{
    int val, pos;
};

int main(){
    int t;
    scanf("%d", &t);

    while(t--){

        priority_queue<int> pq;
        queue<node> vc;
        int n, m;
        scanf("%d %d", &n, &m);

        node a;
        for(int i = 0; i < n; i++){
            scanf("%d", &a.val);
            a.pos = i;
            pq.push(a.val);
            vc.push(a);
        }

        int x, flag = 0, ans = 0;
        while(!vc.empty()){
            a = vc.front();
            x = pq.top();
            if(a.val == x){
                ans++;
                vc.pop();
                pq.pop();
                if(a.pos == m) flag = 1;
            }
            else{
                vc.pop();
                vc.push(a);
            }
            if(flag == 1) break;
        }
        printf("%d\n", ans);
    }

    return 0;
}
