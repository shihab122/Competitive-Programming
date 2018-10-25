#include<bits/stdc++.h>


using namespace std;

int Reverse(int x){
    int ans = 0;
    while(x > 0){
        ans = (ans * 10) + (x % 10);
        x /= 10;
    }
    return ans;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int a, b;
        scanf("%d %d", &a, &b);
        a = Reverse(a);
        b = Reverse(b);
        int sum = a + b;
        sum = Reverse(sum);
        printf("%d\n", sum);
    }

    return 0;
}
