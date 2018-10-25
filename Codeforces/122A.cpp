#include<bits/stdc++.h>

using namespace std;

bool islucky(int n){
    while(n){
        if(n%10 != 4 && n%10 != 7) return false;
        n /= 10;
    }
    return true;
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0 && islucky(i)){
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");

    return 0;
}
