#include<bits/stdc++.h>

using namespace std;

int rec(int x){
    if(x >= 101) return (x - 10);
    else  return rec(rec(x + 11));
}

int main(){
    int n;
    while(scanf("%d", &n)){
        if(n == 0) break;
        else printf("f91(%d) = %d\n", n, rec(n));
    }


    return 0;
}
