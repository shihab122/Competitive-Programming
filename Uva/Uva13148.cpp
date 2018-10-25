#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int a;
    while(1){
        scanf("%d", &a);
        if(a == 0) break;
        if(a == 1){
            printf("Special\n");
            continue;
        }
        ll b = pow(a, 0.5);
        ll c = pow(a, 0.3);

        while(b * b < a)
            b++;
        while(c * c * c < a)
            c++;

        if(b * b == a && c * c * c == a)
            printf("Special\n");
        else printf("Ordinary\n");
    }


    return 0;
}
