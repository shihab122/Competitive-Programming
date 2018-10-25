#include<iostream>
#include<cstdio>

using namespace std;

int main(){
    int n;
    //freopen("in.txt", "w", stdout);
    scanf("%d", &n);
    for(int j = 0; j < n; j++){
        int m, x;
        scanf("%d", &m);
        long long sum = 0;
        for(int i = 0; i < m; i++){
            scanf("%d", &x);
            sum += x;
        }
        if(j == 0) printf("%lld\n", sum);
        else{
            printf("\n");
            printf("%lld\n", sum);
        }

    }

    return 0;
}
