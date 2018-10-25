#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, cnt = 0;
    scanf("%d", &n);
    string a;
    cin>>a;
    for(int i = 1; i < n; i++){
        if(a[i] != a[i - 1]) cnt++, i++;
    }
    n = n - cnt;
    printf("%d\n", n);

    return 0;
}
