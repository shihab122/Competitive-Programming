#include<bits/stdc++.h>

using namespace std;


int main(){
    int n;
    while(scanf("%d", &n)){
        if( n == 0 ) break;
        queue<int> qu;
        vector<int> vc;
        for(int i = 1; i <= n ; i++) qu.push(i);
        while(qu.size() > 1){
            int to = qu.front();
            qu.pop();
            vc.push_back(to);
            to = qu.front();
            qu.pop();
            qu.push(to);
        }
        printf("Discarded cards:");
        if( n > 1){
            for(int i = 0; i < vc.size() - 1; i++) printf(" %d,", vc[i]);
            printf(" %d", vc[vc.size() - 1]);
        }
        printf("\n");
        printf("Remaining card: %d\n", qu.front());
    }
    return 0;
}
