#include<bits/stdc++.h>

using namespace std;

int main(){
    cout<<fixed<<setprecision(6);
    int n, a;
    scanf("%d", &n);
    double ans = 0.0;
    for(int i = 0; i < n; i++){
        scanf("%d", &a);
        ans += 1.0 / (100.0 / (double)a);
    }
    ans = 100.0 * (ans / double(n));
    printf("%f\n", ans);

    return 0;
}
