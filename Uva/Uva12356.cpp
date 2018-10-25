#include<bits/stdc++.h>

using namespace std;

int main(){
    int b, s;
    int left[100005], right[100005];
    while(scanf("%d %d", &b, &s)){
        if(b == 0 && s == 0) break;

        for(int i = 0; i <= b; i++) left[i] = i - 1, right[i] = i + 1;
        left[0] = 0, right[b] = 0;
        int x, y;
        for(int i = 0; i < s; i++){
            scanf("%d %d", &x, &y);

            if(left[x]) printf("%d ", left[x]);
            else printf("* ");
            if(right[y]) printf("%d\n", right[y]);
            else printf("*\n");
            left[right[y]] = left[x];
            right[left[x]] = right[y];
        }
        printf("-\n");
    }


    return 0;
}
