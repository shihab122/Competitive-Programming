#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        int sum = 0;
        if(a % 2 == 0) a++;
        for(int j = a; j <= b; j += 2) sum += j;
        printf("Case %d: %d\n", i, sum);
    }


    return 0;
}
