#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        string a;
        cin>>a;
        long long sum = 0;
        for(int i = 0; i < a.size(); i++)
            sum += a[i] - '0';

        printf("%lld\n", sum);
    }

    return 0;
}
