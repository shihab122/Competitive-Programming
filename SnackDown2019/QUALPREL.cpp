#include<bits/stdc++.h>

using namespace std;


int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, k;
        priority_queue<int> pq;
        scanf("%d %d", &n, &k);
        int a;
        for(int i = 0; i < n; i++){
            scanf("%d", &a);
            pq.push(a);
        }

        int c = 1, p;
        long long sum = 0;
        while(!pq.empty()){
            if(c <= k) sum++;
            if(c == k) p = pq.top();
            if(c > k && p <= pq.top()) sum++;
            pq.pop();
            c++;

        }
        printf("%lld\n", sum);

    }


    return 0;
}
